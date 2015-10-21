<?php

/**
 * Result of FeedsHTTPFetcher::fetch().
 */
class CleanerHTTPFetcherResult extends FeedsHTTPFetcherResult {
  public function sanitizeRaw($raw) {
      $config = array(
          'indent'         => true,
          'output-xhtml'   => true,
          //'wrap'           => 200
      );

      // Tidy
      $tidy = new Tidy();
      $tidy->parseString($raw, $config, 'utf8');
      $tidy->cleanRepair();

      dpm(array(
          'fetcher'=>$this, 'raw' => $raw,
          'tidy' => $tidy->value
      ));
      
      return parent::sanitizeRaw($tidy->value);
  }
}

class FeedsCrawlerPatternCleaner extends FeedsCrawlerPattern {
    protected function getFetcherResult($url) {
        dpm(array(
            'url'=>$url, 'FCPC'=>$this->config,
            'S'=>$this->source,
            'SD'=>$this->sourceDefaults()
        ));
        $result = new CleanerHTTPFetcherResult($url);// FeedsHTTPFetcherResult($url);
        // When request_timeout is empty, the global value is used.
        $result->setTimeout($this->config['request_timeout']);
        $result->setAcceptInvalidCert($this->config['accept_invalid_cert']);

        return $result;
    }    

    /**
     * {@inheritdoc}
     */
    public function fetch(FeedsSource $source) {
        $source_config = $source->getConfigFor($this);
        dpm($source_config, 'SConfig');
        return parent::fetch($source);
    }

    public function sourceForm($source_config) {
        $form = parent::sourceForm($source_config);
        $form['pattern']['#type'] = 'textarea';
        return $form;
    }
}

?>
