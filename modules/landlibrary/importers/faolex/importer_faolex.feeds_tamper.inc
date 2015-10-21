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
    $feeds_tamper->id = 'faolex_importer-blank_source_1-rewrite';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'Blank source 1';
    $feeds_tamper->plugin_id = 'rewrite';
    $feeds_tamper->settings = array(
        'text' => 'http://faolex.fao.org/cgi-bin/faolex.exe?database=faolex&table=result&search_type=query&lang=eng&format_name=@ERALL&query=ID:[xpathparser:2]',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Rewrite';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'faolex_importer-blank_source_2-default_value';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'Blank source 2';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'FAOLEX',
        'only_if_empty' => 0,
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Set value or default value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'faolex_importer-blank_source_2-efq_finder';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'Blank source 2';
    $feeds_tamper->plugin_id = 'efq_finder';
    $feeds_tamper->settings = array(
        'update' => 'Update',
        'entity_type' => 'node',
        'bundle' => 'organization',
        'field' => 'title',
        'property' => TRUE,
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Entity Field Query finder';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'faolex_importer-blank_source_3-default_value';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'Blank source 3';
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
    $feeds_tamper->id = 'faolex_importer-xpathparser_5-explode';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'xpathparser:5';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'faolex_importer-xpathparser_6-find_replace';
    $feeds_tamper->importer = 'faolex_importer';
    $feeds_tamper->source = 'xpathparser:6';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => 'E',
        'replace' => 'English',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    return $export;
}