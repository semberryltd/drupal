<?php
/**
 * FAOLEX importer feeds
 *
 * Author: Jules Clement <jules@ker.bz>
 * Date: Oct. 2015
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function importer_faolex_feeds_tamper_default() {
    $export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'faolex_importer-xpathparser_3-truncate_text';
$feeds_tamper->importer = 'faolex_importer';
$feeds_tamper->source = 'xpathparser:3';
$feeds_tamper->plugin_id = 'truncate_text';
$feeds_tamper->settings = array(
  'num_char' => '250',
  'ellipses' => 1,
  'wordsafe' => 1,
);
$feeds_tamper->weight = 0;
$feeds_tamper->description = 'Truncate';

$export[$feeds_tamper->id] = $feeds_tamper;

    /* Country mapping from ISO3 */
$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'faolex_importer-xpathparser_5-php';
$feeds_tamper->importer = 'faolex_importer';
$feeds_tamper->source = 'xpathparser:5';
$feeds_tamper->plugin_id = 'php';
$feeds_tamper->settings = array(
  'php' => '$vocabulary_name=\'countries\';
$vocab = taxonomy_vocabulary_machine_name_load($vocabulary_name);
$query = new EntityFieldQuery();
$query->entityCondition(\'entity_type\', \'taxonomy_term\')->entityCondition(\'bundle\', $vocabulary_name)->propertyCondition(\'vid\', $vocab->vid)->fieldCondition(\'field_iso3\', \'value\', strtoupper($field), \'=\');
$results = $query->execute();
$doc_countries = \'\';
if (!empty($results[\'taxonomy_term\'])) {
  foreach($results[\'taxonomy_term\'] as $tid) {
    $term = taxonomy_term_load($tid->tid);
    $doc_countries .= ($doc_countries? \';\':\'\').$term->name;
  }
}
return $doc_countries;',
);
$feeds_tamper->weight = 2;
$feeds_tamper->description = 'Execute php code';

$export[$feeds_tamper->id] = $feeds_tamper;

    /**
     * FAOLEX generated values
     */
    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'faolex_importer-blank_source_1-rewrite';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'FAOLEXuri';
    $feeds_tamper->plugin_id = 'rewrite';
    $feeds_tamper->settings = array(
        'text' => 'http://faolex.fao.org/cgi-bin/faolex.exe?database=faolex&table=result&search_type=query&lang=eng&format_name=@ERALL&query=ID:[xpathparser:0]',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Rewrite';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE;
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'faolex_importer-docId-rewrite';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'FAOLEXdocId';
    $feeds_tamper->plugin_id = 'rewrite';
    $feeds_tamper->settings = array(
        'text' => '[xpathparser:0]',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'FAOLEX rec ID';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE;
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'faolex_importer-blank_source_2-default_value';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'FAOLEXorg';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'FAO Legal Office',//FAOLEX',
        'only_if_empty' => 0,
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Set value or default value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'faolex_importer-blank_source_3-default_value';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'FAOLEXowner';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => '1',
        'only_if_empty' => 0,
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set value or default value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'faolex_importer-xpathparser_6-find_replace_lang';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'xpathparser:6';
    $feeds_tamper->plugin_id = 'find_replace_multiple';
    $feeds_tamper->settings = array(
        'pairs' => array(
            0 => array(
                'source' => 'E',
                'target' => 'en',
            ),
            1 => array(
                'source' => 'F',
                'target' => 'fr',
            ),
            2 => array(
                'source' => 'S',
                'target' => 'es',
            ),
        ),
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Replace FAO Lang code by Lang';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'faolex_importer-xpathparser_3-find_replace_faolextype';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'xpathparser:4';
    $feeds_tamper->plugin_id = 'find_replace_multiple';
    $feeds_tamper->settings = array(
        'pairs' => array(
            0 => array(
                'source' => 'C',
                'target' => 'Constitution',
            ),
            1 => array(
                'source' => 'A',
                'target' => 'Ammendments',
            ),
            2 => array(
                'source' => 'L',
                'target' => 'Legislation',
            ),
            3 => array(
                'source' => 'M',
                'target' => 'Publication',
            ),
            4 => array(
                'source' => 'R',
                'target' => 'Regulation',
            ),
            5 => array(
                'source' => 'P',
                'target' => 'Policy document',
            ),
        ),
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Replace FAOLEX doc type by LP ones';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'faolex_importer-FAOLEXcopy-default_value';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'FAOLEXcopy';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'The content of the record or set of records may be used, reproduced, downloaded and printed in an unaltered form solely for personal study and non-commercial purposes, provided that FAO copyright is properly ackowledged. Any other use is strictly prohibited without the prior written permission of the FAO Legal Office. Any requests for permission should be directed to the FAO Legal Office at: www.fao.org.',
        'only_if_empty' => 0,
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'FAOLEX Copyright';

    $export[$feeds_tamper->id] = $feeds_tamper;

    return $export;
}
