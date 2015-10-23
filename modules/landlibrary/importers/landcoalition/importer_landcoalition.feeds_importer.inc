<?php
/**
 * @file
 * importer_landcoalition.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function importer_landcoalition_feeds_importer_default() {
    $export = array();

    $feeds_importer = new stdClass();
    $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
    $feeds_importer->api_version = 1;
    $feeds_importer->id = 'landcoalition_events_rss_import';
    $feeds_importer->config = array(
        'name' => 'LandCoalition Events RSS import',
        'description' => 'Import from landcoalition RSS feed http://landcoalition.org/en/events/feeds/rss.xml all events',
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
                'authorize' => 1,
                'mappings' => array(
                    0 => array(
                        'source' => 'title',
                        'target' => 'title',
                        'unique' => 1,
                    ),
                    1 => array(
                        'source' => 'description',
                        'target' => 'body',
                        'unique' => FALSE,
                    ),
                    2 => array(
                        'source' => 'geolocations',
                        'target' => 'field_geographical_focus',
                        'unique' => FALSE,
                    ),
                    3 => array(
                        'source' => 'url',
                        'target' => 'field_website:url',
                        'unique' => FALSE,
                    ),
                    4 => array(
                        'source' => 'timestamp',
                        'target' => 'field_date:start',
                        'unique' => FALSE,
                    ),
                ),
                'update_existing' => '2',
                'update_non_existent' => 'skip',
                'input_format' => 'plain_text',
                'skip_hash_check' => 0,
                'bundle' => 'event',
            ),
        ),
        'content_type' => '',
        'update' => 0,
        'import_period' => '-1',
        'expire_period' => 3600,
        'import_on_create' => 0,
        'process_in_background' => 0,
    );
  
    $export[$feeds_importer->id] = $feeds_importer;

    $feeds_importer = new stdClass();
    $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
    $feeds_importer->api_version = 1;
    $feeds_importer->id = 'landcoalition_rss_import';
    $feeds_importer->config = array(
        'name' => 'LandCoalition RSS import',
        'description' => 'landcoalition RSS importer from http://landcoalition.org/en/publication/feed/rss.xml',
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
                'authorize' => 1,
                'mappings' => array(
                    0 => array(
                        'source' => 'title',
                        'target' => 'title',
                        'unique' => 1,
                    ),
                    1 => array(
                        'source' => 'description',
                        'target' => 'field_doc_description',
                        'unique' => FALSE,
                    ),
                    2 => array(
                        'source' => 'url',
                        'target' => 'field_doc_is_shown_at:url',
                        'unique' => FALSE,
                    ),
                    3 => array(
                        'source' => 'timestamp',
                        'target' => 'field_doc_creation_date:start',
                        'unique' => FALSE,
                    ),
                    4 => array(
                        'source' => 'guid',
                        'target' => 'field_doc_identifier',
                        'unique' => FALSE,
                    ),
                    5 => array(
                        'source' => 'title',
                        'target' => 'field_doc_title',
                        'unique' => FALSE,
                    ),
                    6 => array(
                        'source' => 'Blank source 1',
                        'target' => 'field_doc_publisher:label',
                        'unique' => FALSE,
                    ),
                    7 => array(
                        'source' => 'Blank source 2',
                        'target' => 'field_doc_provider:label',
                        'unique' => FALSE,
                    ),
                    8 => array(
                        'source' => 'Blank source 3',
                        'target' => 'language',
                        'unique' => FALSE,
                    ),
                    9 => array(
                        'source' => 'Blank source 4',
                        'target' => 'field_doc_language',
                        'unique' => FALSE,
                    ),
                    10 => array(
                        'source' => 'parent:uid',
                        'target' => 'field_doc_title',
                        'unique' => FALSE,
                    ),
                ),
                'update_existing' => '2',
                'update_non_existent' => 'skip',
                'input_format' => 'plain_text',
                'skip_hash_check' => 0,
                'bundle' => 'landlibrary_resource',
            ),
        ),
        'content_type' => '',
        'update' => 0,
        'import_period' => '-1',
        'expire_period' => 3600,
        'import_on_create' => 0,
        'process_in_background' => 0,
    );

    $export[$feeds_importer->id] = $feeds_importer;

    return $export;
}
