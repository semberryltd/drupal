<?php
/**
 * IFPRI importer feeds
 *
 * Author: Jules Clement <jules@ker.bz>
 * Date: Oct. 2015
 */

function importer_ifpri_feeds_importer_default() {
    $export = array();

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
                'allow_override' => 1,
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
    $export[$feeds_importer->id] = $feeds_importer;

    $feeds_importer = new stdClass();
    $feeds_importer->disabled = FALSE;
    $feeds_importer->api_version = 1;
    $feeds_importer->id = 'ifpri_importer';
    $feeds_importer->config = array(
        'name' => 'IFPRI importer',
        'description' => 'Import IFPRI\'s xml files from directory',
        'fetcher' => array(
            'plugin_key' => 'feeds_fetcher_directory_fetcher',
            'config' => array(
                'recursive' => 1,
                'filemask' => '/\\.xml$/',
                'updated_files' => 1,
                'directory' => 'private://feeds/ifpri',
            ),
        ),
        'parser' => array(
            'plugin_key' => 'FeedsXPathParserXML',
            'config' => array(
                'sources' => array(
                    'xpathparser:0' => 'dc:title[1]/text()',
                    'xpathparser:2' => 'dc:description[2]/text()',
                    'xpathparser:3' => 'dc:format/text()',
                    'xpathparser:4' => 'dc:publisher[2]/text()',
                    'xpathparser:5' => 'dc:subject[2]/text()',
                    'xpathparser:6' => 'dc:description[1]/text()',
                    'xpathparser:7' => 'dc:language/text()',
                    'xpathparser:8' => 'concat(/oai_dc:dc/dc:identifier[1]/text(),";",/oai_dc:dc/dc:identifier[2]/text(),";",/oai_dc:dc/dc:identifier[3]/text(),";",/oai_dc:dc/dc:identifier[4]/text())',
                    'xpathparser:9' => '',
                    'xpathparser:10' => 'dc:date[1]/text()',
                    'xpathparser:11' => '',
                    'xpathparser:12' => 'dc:publisher[1]/text()',
                    'xpathparser:13' => 'concat(/oai_dc:dc/dc:identifier[1]/text(),";",/oai_dc:dc/dc:identifier[2]/text(),";",/oai_dc:dc/dc:identifier[3]/text(),";",/oai_dc:dc/dc:identifier[4]/text())',
                    'xpathparser:14' => 'concat(/oai_dc:dc/dc:identifier[1]/text(),";",/oai_dc:dc/dc:identifier[2]/text(),";",/oai_dc:dc/dc:identifier[3]/text(),";",/oai_dc:dc/dc:identifier[4]/text())',
                    'xpathparser:15' => '',
                    'xpathparser:16' => '',
                    'xpathparser:17' => 'dc:date[1]/text()',
                    'xpathparser:18' => '',
                    'xpathparser:19' => 'concat(/oai_dc:dc/dc:subject[1]/text()  , /oai_dc:dc/dc:subject[2]/text())',
                    'xpathparser:20' => 'dc:creator[1]/text()',
                    'xpathparser:21' => 'dc:language/text()',
                    'xpathparser:22' => 'concat(/oai_dc:dc/dc:subject[1]/text()  , /oai_dc:dc/dc:subject[2]/text(), /oai_dc:dc/dc:subject[3]/text())',
                    'xpathparser:23' => 'dc:identifier[2]/text()',
                    'xpathparser:24' => 'dc:title[1]/text()',
                    'xpathparser:25' => '',
                    'xpathparser:26' => '',
                ),
                'rawXML' => array(
                    'xpathparser:0' => 0,
                    'xpathparser:2' => 0,
                    'xpathparser:3' => 0,
                    'xpathparser:4' => 0,
                    'xpathparser:5' => 0,
                    'xpathparser:6' => 0,
                    'xpathparser:7' => 0,
                    'xpathparser:8' => 0,
                    'xpathparser:9' => 0,
                    'xpathparser:10' => 0,
                    'xpathparser:11' => 0,
                    'xpathparser:12' => 0,
                    'xpathparser:13' => 0,
                    'xpathparser:14' => 0,
                    'xpathparser:15' => 0,
                    'xpathparser:16' => 0,
                    'xpathparser:17' => 0,
                    'xpathparser:18' => 0,
                    'xpathparser:19' => 0,
                    'xpathparser:20' => 0,
                    'xpathparser:21' => 0,
                    'xpathparser:22' => 0,
                    'xpathparser:23' => 0,
                    'xpathparser:24' => 0,
                    'xpathparser:25' => 0,
                    'xpathparser:26' => 0,
                ),
                'context' => '/oai_dc:dc',
                'exp' => array(
                    'errors' => 0,
                    'debug' => array(
                        'context' => 0,
                        'xpathparser:0' => 0,
                        'xpathparser:2' => 0,
                        'xpathparser:3' => 0,
                        'xpathparser:4' => 0,
                        'xpathparser:5' => 0,
                        'xpathparser:6' => 0,
                        'xpathparser:7' => 0,
                        'xpathparser:8' => 0,
                        'xpathparser:9' => 0,
                        'xpathparser:10' => 0,
                        'xpathparser:11' => 0,
                        'xpathparser:12' => 0,
                        'xpathparser:13' => 0,
                        'xpathparser:14' => 0,
                        'xpathparser:15' => 0,
                        'xpathparser:16' => 0,
                        'xpathparser:17' => 0,
                        'xpathparser:18' => 0,
                        'xpathparser:19' => 0,
                        'xpathparser:20' => 0,
                        'xpathparser:21' => 0,
                        'xpathparser:22' => 0,
                        'xpathparser:23' => 0,
                        'xpathparser:24' => 0,
                        'xpathparser:25' => 0,
                        'xpathparser:26' => 0,
                    ),
                ),
                'allow_override' => 1,
            ),
        ),
        'processor' => array(
            'plugin_key' => 'FeedsNodeProcessor',
            'config' => array(
                'expire' => '-1',
                'author' => '1',
                'authorize' => 1,
                'mappings' => array(
                    0 => array(
                        'source' => 'xpathparser:0',
                        'target' => 'title',
                        'unique' => 0,
                    ),
                    1 => array(
                        'source' => 'xpathparser:2',
                        'target' => 'field_doc_type',
                        'term_search' => '0',
                        'autocreate' => 0,
                    ),
                    2 => array(
                        'source' => 'xpathparser:3',
                        'target' => 'field_doc_pagination',
                        'unique' => FALSE,
                    ),
                    3 => array(
                        'source' => 'xpathparser:4',
                        'target' => 'field_doc_publisher_place',
                        'term_search' => '0',
                        'autocreate' => 0,
                    ),
                    4 => array(
                        'source' => 'xpathparser:5',
                        'target' => 'field_doc_keyword',
                        'unique' => FALSE,
                    ),
                    5 => array(
                        'source' => 'xpathparser:6',
                        'target' => 'field_doc_description',
                        'unique' => FALSE,
                    ),
                    6 => array(
                        'source' => 'xpathparser:7',
                        'target' => 'field_doc_language',
                        'term_search' => '0',
                        'autocreate' => 0,
                    ),
                    7 => array(
                        'source' => 'xpathparser:8',
                        'target' => 'field_doc_identifier',
                        'unique' => TRUE,
                    ),
                    8 => array(
                        'source' => 'xpathparser:9',
                        'target' => 'field_date_of_submission:end',
                        'unique' => FALSE,
                    ),
                    9 => array(
                        'source' => 'xpathparser:10',
                        'target' => 'field_doc_creation_date:end',
                        'unique' => FALSE,
                    ),
                    10 => array(
                        'source' => 'xpathparser:11',
                        'target' => 'field_doc_replaces:title',
                        'unique' => FALSE,
                    ),
                    11 => array(
                        'source' => 'xpathparser:12',
                        'target' => 'field_doc_publisher:label',
                        'unique' => FALSE,
                    ),
                    12 => array(
                        'source' => 'xpathparser:13',
                        'target' => 'field_doc_is_shown_by:url',
                        'unique' => FALSE,
                    ),
                    13 => array(
                        'source' => 'xpathparser:14',
                        'target' => 'field_doc_is_shown_at:url',
                        'unique' => FALSE,
                    ),
                    14 => array(
                        'source' => 'xpathparser:15',
                        'target' => 'field_doc_provider:label',
                        'unique' => FALSE,
                    ),
                    15 => array(
                        'source' => 'xpathparser:16',
                        'target' => 'field_doc_datepub:end',
                        'unique' => FALSE,
                    ),
                    16 => array(
                        'source' => 'xpathparser:17',
                        'target' => 'field_doc_creation_date:start',
                        'unique' => FALSE,
                    ),
                    17 => array(
                        'source' => 'xpathparser:18',
                        'target' => 'field_doc_creation_date:end',
                        'unique' => FALSE,
                    ),
                    18 => array(
                        'source' => 'xpathparser:19',
                        'target' => 'field_doc_subject',
                        'unique' => FALSE,
                    ),
                    19 => array(
                        'source' => 'xpathparser:20',
                        'target' => 'field_doc_creator:label',
                        'unique' => FALSE,
                    ),
                    20 => array(
                        'source' => 'xpathparser:21',
                        'target' => 'language',
                        'unique' => FALSE,
                    ),
                    21 => array(
                        'source' => 'xpathparser:22',
                        'target' => 'field_doc_geographic_region',
                        'unique' => FALSE,
                    ),
                    22 => array(
                        'source' => 'xpathparser:23',
                        'target' => 'field_doc_relation:url',
                        'unique' => FALSE,
                    ),
                    23 => array(
                        'source' => 'xpathparser:24',
                        'target' => 'field_doc_title',
                        'unique' => FALSE,
                    ),
                    24 => array(
                        'source' => 'xpathparser:25',
                        'target' => 'title_field:et:en',
                        'unique' => FALSE,
                    ),
                    25 => array(
                        'source' => 'xpathparser:26',
                        'target' => 'title',
                        'unique' => FALSE,
                    ),
                ),
                'update_existing' => '2',
                'input_format' => 'plain_text',
                'skip_hash_check' => 1,
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
    return $export;
}
