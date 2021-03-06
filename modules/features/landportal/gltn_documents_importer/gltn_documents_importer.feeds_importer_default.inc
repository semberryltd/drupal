<?php
/**
 * @file
 * gltn_documents_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function gltn_documents_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'GLTN Importer';
  $feeds_importer->config = array(
    'name' => 'GLTN Importer',
    'description' => 'Import documents from GLTN',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'field_doc_title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Title',
            'target' => 'title_field:et:und',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Principle Authors',
            'target' => 'field_doc_creator:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Contributors/Co-Authors',
            'target' => 'field_doc_contributor:label',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Language',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Type',
            'target' => 'field_doc_type',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Topics',
            'target' => 'field_doc_subject',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Topics',
            'target' => 'field_doc_keyword',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          9 => array(
            'source' => 'Copyright',
            'target' => 'field_doc_copyrights_statement',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Publisher',
            'target' => 'field_doc_publisher:label',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Link',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Year',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'Provider',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'Abstract',
            'target' => 'field_doc_description',
            'format' => 'plain_text',
          ),
          15 => array(
            'source' => 'doctitle',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'docid',
            'target' => 'field_doc_identifier',
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
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['GLTN Importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'gltn_creators_importer';
  $feeds_importer->config = array(
    'name' => 'GLTN Creators importer',
    'description' => 'Import authors creators from GLTN',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Full Name',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Full Name',
            'target' => 'field_person_full_name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'person',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['gltn_creators_importer'] = $feeds_importer;

  return $export;
}
