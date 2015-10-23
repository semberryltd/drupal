<?php
/**
 * @file
 * landlibrary_importers_usaid.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function landlibrary_importers_usaid_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'rss_usaid_commentary_importer';
  $feeds_importer->config = array(
      'name' => 'USAID RSS importer - commentary',
      'description' => 'Import USAID commentary from RSS feed ',
      'description' => 'Import Issue briefs from: http://usaidlandtenure.net/commentary-feed',
      'fetcher' => array(
          'plugin_key' => 'FeedsCrawlerNext',
          'config' => array(
              'num_pages' => 10,
              'first_run' => 1,
              'delay' => 1,
              'auto_detect_feeds' => 0,
              'use_pubsubhubbub' => 0,
              'designated_hub' => '',
              'request_timeout' => '',
              'auto_scheme' => 'http',
              'accept_invalid_cert' => 0,
          ),
      ),
      'parser' => array(
          'plugin_key' => 'FeedsSyndicationParser',
          'config' => array(),
      ),
      'processor' => array(
          'plugin_key' => 'FeedsNodeProcessor',
          'config' => array(
              'expire' => '-1',
              'author' => '1',
              'authorize' => 1,
              'mappings' => array(
                  0 => array(
                      'source' => 'title',
                      'target' => 'title',
                      'unique' => 1,
                  ),
                  1 => array(
                      'source' => 'title',
                      'target' => 'field_doc_title',
                      'unique' => FALSE,
                  ),
                  2 => array(
                      'source' => 'description',
                      'target' => 'field_doc_description',
                      'unique' => FALSE,
                  ),
                  3 => array(
                      'source' => 'timestamp',
                      'target' => 'field_doc_creation_date:start',
                      'unique' => FALSE,
                  ),
                  4 => array(
                      'source' => 'url',
                      'target' => 'field_doc_is_shown_by:url',
                      'unique' => FALSE,
                  ),
                  5 => array(
                      'source' => 'guid',
                      'target' => 'field_doc_identifier',
                      'unique' => FALSE,
                  ),
                  6 => array(
                      'source' => 'Blank source 1',
                      'target' => 'field_doc_provider:label',
                      'unique' => FALSE,
                  ),
                  7 => array(
                      'source' => 'Blank source 2',
                      'target' => 'language',
                      'unique' => FALSE,
                  ),
                  8 => array(
                      'source' => 'Blank source 3',
                      'target' => 'field_doc_type',
                      'unique' => FALSE,
                  ),
                  9 => array(
                      'source' => 'Blank source 4',
                      'target' => 'field_doc_language',
                      'unique' => FALSE,
                  ),
                  10 => array(
                      'source' => 'title',
                      'target' => 'field_doc_title',
                      'unique' => FALSE,
                  ),
                  11 => array(
                      'source' => 'title',
                      'target' => 'title_field:et:en',
                      'unique' => FALSE,
                  ),
              ),
              'update_existing' => '2',
              'input_format' => 'plain_text',
              'skip_hash_check' => 0,
              'bundle' => 'landlibrary_resource',
              'update_non_existent' => 'skip',
          ),
      ),
      'content_type' => '',
      'update' => 2,
      'import_period' => '-1',
      'expire_period' => 3600,
      'import_on_create' => 1,
      'process_in_background' => 0,
  );

  $export[$feeds_importer->id] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'rss_usaid_issue_briefs_importer_';
  $feeds_importer->config = array(
      'name' => 'USAID RSS importer - issue briefs ',
      'description' => 'Import Issue briefs from: http://usaidlandtenure.net/issue-briefs-feed',
      'fetcher' => array(
          'plugin_key' => 'FeedsCrawlerNext',
          'config' => array(
              'num_pages' => 10,
              'first_run' => 1,
              'delay' => 1,
              'auto_detect_feeds' => 0,
              'use_pubsubhubbub' => 0,
              'designated_hub' => '',
              'request_timeout' => '',
              'auto_scheme' => 'http',
              'accept_invalid_cert' => 0,
          ),
      ),
      'parser' => array(
          'plugin_key' => 'FeedsSyndicationParser',
          'config' => array(),
      ),
      'processor' => array(
          'plugin_key' => 'FeedsNodeProcessor',
          'config' => array(
              'expire' => '-1',
              'author' => 0,
              'authorize' => 0,
              'mappings' => array(
                  0 => array(
                      'source' => 'title',
                      'target' => 'title',
                      'unique' => 1,
                  ),
                  1 => array(
                      'source' => 'title',
                      'target' => 'field_doc_title',
                      'unique' => FALSE,
                  ),
                  2 => array(
                      'source' => 'description',
                      'target' => 'field_doc_description',
                      'unique' => FALSE,
                  ),
                  3 => array(
                      'source' => 'timestamp',
                      'target' => 'field_doc_creation_date:start',
                      'unique' => FALSE,
                  ),
                  4 => array(
                      'source' => 'Blank source 1',
                      'target' => 'field_doc_provider:label',
                      'unique' => FALSE,
                  ),
                  5 => array(
                      'source' => 'Blank source 2',
                      'target' => 'language',
                      'unique' => FALSE,
                  ),
                  6 => array(
                      'source' => 'url',
                      'target' => 'field_doc_is_shown_by:url',
                      'unique' => FALSE,
                  ),
                  7 => array(
                      'source' => 'Blank source 3',
                      'target' => 'field_doc_type',
                      'unique' => FALSE,
                  ),
                  8 => array(
                      'source' => 'guid',
                      'target' => 'field_doc_identifier',
                      'unique' => FALSE,
                  ),
                  9 => array(
                      'source' => 'Blank source 4',
                      'target' => 'field_doc_language',
                      'unique' => FALSE,
                  ),
                  10 => array(
                      'source' => 'title',
                      'target' => 'title_field:et:en',
                      'unique' => FALSE,
                  ),
              ),
              'update_existing' => '2',
              'input_format' => 'plain_text',
              'skip_hash_check' => 0,
              'bundle' => 'landlibrary_resource',
              'update_non_existent' => 'skip',
          ),
      ),
      'content_type' => 'rss_issue_briefs_feed',
      'update' => 2,
      'import_period' => '-1',
      'expire_period' => 3600,
      'import_on_create' => 1,
      'process_in_background' => 0,
  );

  $export[$feeds_importer->id] = $feeds_importer;

  return $export;
}
