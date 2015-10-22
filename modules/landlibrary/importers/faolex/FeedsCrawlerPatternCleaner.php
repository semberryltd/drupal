<?php

/**
 * Result of FeedsHTTPFetcher::fetch().
 */
class CleanerHTTPFetcherResult extends FeedsHTTPFetcherResult {
  public function sanitizeRaw($raw) {
      /**
       * Tidy (NOTE: is provided when php tidy lib is installed)
       */
      /* $config = array('indent' => true, 'output-xhtml' => true); */
      /* $tidy = new Tidy(); */
      /* $tidy->parseString($raw, $config, 'utf8'); */
      /* $tidy->cleanRepair(); */
      /* dpm(array( */
      /*     'fetcher'=>$this, 'raw' => $raw, */
      /*     'tidy' => $tidy->value */
      /* )); */
      dpm(array('RAW data' => $raw));
      return parent::sanitizeRaw($raw);//tidy->value);
  }
}

class FeedsCrawlerPatternCleaner extends FeedsCrawlerPattern {

    protected function beginFetch(FeedsSource $source, FeedsState $state) {
        /* dpm($state, 'beginFetch'); */
        // Force (first) index to take initial_index
        // (otherwise 'pattern' won't get applied to the first getNextUrl call, go figure!)
        $source_config = $source->getConfigFor($this);
        /* dpm($source_config, 'beginFetch source'); */
        if (!$state->index) {
            $state->index = $source_config['initial_index'];
            $state->next_url = $this->getNextUrl($source, $source_config['source']);
        }
        watchdog('feeds', 'Importing '.$state->next_url);
        parent::beginFetch($source, $state);
    }

    /**
     * {@inheritdoc}
     */
    public function fetch(FeedsSource $source) {
        $source_config = $source->getConfigFor($this);
        //dpm($source_config, 'fetch source');
        //dpm(array('C'=>$this->config, 'SConfig' => $source_config, 'S'=>$source->state(FEEDS_FETCH)));
        $raw = parent::fetch($source);
        /* if (!$source_config['spage_query']) { */
        /*     // FAOLEX importer HACK! */
        /*     // grep spage_query in $raw source from first fetch */
        /*     // use it in next batch of queries */
        /*     $source_config['spage_query'] = preg_replace("/^.*spage_query.value:'()';/", '$1', $raw); */
        /* } */
        //dpm(array('fetch' => $raw));
        return $raw;
    }

    /* protected function getFetcherResult($url) { */
    /*     dsm('getFetcherResult: '.$url); */
    /*     $result = new FeedsHTTPFetcherResult($url); */
    /*     //$result = new CleanerHTTPFetcherResult($url); */
    /*     // When request_timeout is empty, the global value is used. */
    /*     $result->setTimeout($this->config['request_timeout']); */
    /*     $result->setAcceptInvalidCert($this->config['accept_invalid_cert']); */
    /*     //dpm(array('getFetcherResult' => $result)); */
    /*     return $result; */
    /* }     */
    
    /**
     * Override FeedsCrawlerPattern form
     * Change 'pattern' field to textarea (allowing longer uri params)
     *
     * TODO: check if there is a improv. req/bug in plugin issue list on drupal
     * create + submit a patch (no reason to limit query string to 128 char.
     *    -this is very limitating-)
     */
    public function sourceForm($source_config) {
        $form = parent::sourceForm($source_config);
        $form['pattern']['#type'] = 'textarea';
        return $form;
    }
}

?>
