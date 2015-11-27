<?php
/**
 * @file
 * topics_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function topics_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'topic_taxonomy_land_terms_importer';
  $feeds_importer->config = array(
    'name' => 'Topic taxonomy land terms importer',
    'description' => 'To import land terms from a CSV with Agrovoc URI and translations',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'concept',
            'target' => 'field_agrovoc_uri:url',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'labelEn',
            'target' => 'name',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'labelEn',
            'target' => 'name_field:et:en',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'labelFR',
            'target' => 'name_field:et:fr',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'labelES',
            'target' => 'name_field:et:es',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'full_html',
        'skip_hash_check' => 1,
        'bundle' => 'landportal_topics',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['topic_taxonomy_land_terms_importer'] = $feeds_importer;

  return $export;
}
