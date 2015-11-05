<?php

$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE;
$feeds_importer->api_version = 1;
$feeds_importer->id = 'ifpri_importer_creator';
$feeds_importer->config = array(
    'name' => 'IFPRI (pre)importer - creator',
    'description' => 'Import resource (ex. documents) authors BEFORE importing content.',
    'fetcher' => array(
        'plugin_key' => 'feeds_fetcher_directory_fetcher',
        'config' => array(
            'recursive' => TRUE,
            'filemask' => '/\\.xml$/',
            'updated_files' => FALSE,
            'directory' => 'private://feeds/ifpri',
        ),
    ),
    'parser' => array(
        'plugin_key' => 'FeedsXPathParserXML',
        'config' => array(
            'sources' => array(
                'xpathparser:0' => 'dc:creator[1]/text()',
                'xpathparser:1' => 'dc:creator[1]/text()',
            ),
            'rawXML' => array(
                'xpathparser:0' => 0,
                'xpathparser:1' => 0,
            ),
            'context' => '/oai_dc:dc',
            'exp' => array(
                'errors' => 0,
                'debug' => array(
                    'context' => 0,
                    'xpathparser:0' => 0,
                    'xpathparser:1' => 0,
                ),
            ),
            'allow_override' => 0,
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
                    'source' => 'xpathparser:0',
                    'target' => 'title',
                    'unique' => FALSE,
                ),
                1 => array(
                    'source' => 'xpathparser:1',
                    'target' => 'field_person_full_name',
                    'unique' => TRUE,
                ),
            ),
            'update_existing' => '2',
            'input_format' => 'plain_text',
            'skip_hash_check' => 0,
            'bundle' => 'person',
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