<?php
/**
 * FAO importer feeds
 *
 * Author: Jules Clement <jules@ker.bz>
 * Date: Oct. 2015
 */

function importer_fao_feeds_tamper_default() {
    $export = array();

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_preimport_authors-xpathparser_0-create_mul_nodes';
    $feeds_tamper->importer = 'fao_preimport_authors';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'create_mul_nodes';
    $feeds_tamper->settings = array(
        'default_value' => 'person',
    );
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Create multiple nodes set to person';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_preimport_authors-xpathparser_0-explode';
    $feeds_tamper->importer = 'fao_preimport_authors';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ',',
        'limit' => '',
        'real_separator' => ',',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Explode comma ,';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_preimport_authors-xpathparser_0-ffind_replace';
    $feeds_tamper->importer = 'fao_preimport_authors';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_preimport_authors-xpathparser_0-find_replace';
    $feeds_tamper->importer = 'fao_preimport_authors';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_preimport_authors-xpathparser_0-find_replacer';
    $feeds_tamper->importer = 'fao_preimport_authors';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ';',
        'replace' => ',',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace ; with comma ,';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_preimport_authors-xpathparser_0-trim';
    $feeds_tamper->importer = 'fao_preimport_authors';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;



    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_0-find_replace_regex';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/\\n/',
        'replace' => '',
        'limit' => '1',
        'real_limit' => '1',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace REGEX /\\n/';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_0-reduce_to_single_element';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'reduce_to_single_element';
    $feeds_tamper->settings = array(
        'reduce_method' => 'first',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Use the first array element';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_0-strip_tags';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Strip tags';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_0-trim';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_0-truncate_text';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'truncate_text';
    $feeds_tamper->settings = array(
        'num_char' => '200',
        'ellipses' => 0,
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Truncate';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_1-html_entity_decode';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_1-required';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_1-strip_tags';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Strip tags';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_1-trim';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_10-ddfind_replace';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:10';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ';',
        'replace' => ',',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace ; with comma ,';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_10-explode';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:10';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ',',
        'limit' => '',
        'real_separator' => ',',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Explode comma ,';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_10-find_replace';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:10';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_10-find_replacef';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:10';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_10-trim';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:10';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_14-default_value';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:14';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'Set default value Food and Agriculture Organization of the United Nations (FAO)',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value Set default value Food and Agriculture Organization of the United Nations (FAO)';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_19-default_value';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:19';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'en',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value en';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_2-timetodate';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:2';
    $feeds_tamper->plugin_id = 'timetodate';
    $feeds_tamper->settings = array(
        'date_format' => 'm-d-Y',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Unix timestamp to Date m-d-Y';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_20-copy';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:0',
    );
    $feeds_tamper->weight = 8;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_20-find_replace';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_20-find_replacef';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => ']]>',
        'replace' => '',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_20-find_replace_regex';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/\\n/',
        'replace' => '',
        'limit' => '1',
        'real_limit' => '1',
    );
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Find replace REGEX /\\n/';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_20-reduce_to_single_element';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'reduce_to_single_element';
    $feeds_tamper->settings = array(
        'reduce_method' => 'first',
    );
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Use the first array element';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_20-strip_tags';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Strip tags';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_20-trim';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 7;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_20-truncate_text';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'truncate_text';
    $feeds_tamper->settings = array(
        'num_char' => '200',
        'ellipses' => 0,
    );
    $feeds_tamper->weight = 6;
    $feeds_tamper->description = 'Truncate';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_21-copy';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:21';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:20',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_22-copy';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:22';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:20',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_3-find_replace';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => 'en',
        'replace' => 'English',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace en with English';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_6-trim';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:6';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'fao_importer-xpathparser_9-default_value';
    $feeds_tamper->importer = 'fao_importer';
    $feeds_tamper->source = 'xpathparser:9';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'Food and Agriculture Organization of the United Nations (FAO)',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value Food and Agriculture Organization of the United Nations (FAO)';

    $export[$feeds_tamper->id] = $feeds_tamper;

    return $export;
}
