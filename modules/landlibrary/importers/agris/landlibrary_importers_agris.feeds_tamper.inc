<?php
/**
 * @file
 * landlibrary_importers_agris.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function landlibrary_importers_agris_feeds_tamper_default() {
    $export = array();

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-parent_taxonomy_languages-copy';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'parent:taxonomy:languages';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:4',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_0-find_replace';
    $feeds_tamper->importer = 'agris_filter';
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
    $feeds_tamper->weight = 6;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_0-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
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
    $feeds_tamper->weight = 7;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_0-find_replace_regex';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/^\\s*\\/\\/<!\\[CDATA\\[([\\s\\S]*)\\/\\/\\]\\]>\\s*\\z/',
        'replace' => '\\s',
        'limit' => '',
        'real_limit' => -1,
    );
    $feeds_tamper->weight = 12;
    $feeds_tamper->description = 'Find replace REGEX';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_0-find_replace_regex1';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/\\n/',
        'replace' => '',
        'limit' => '1',
        'real_limit' => '1',
    );
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Find replace new line /\\n/ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_0-html_entity_decode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 11;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_0-reduce_to_single_element';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'reduce_to_single_element';
    $feeds_tamper->settings = array(
        'reduce_method' => 'first',
    );
    $feeds_tamper->weight = 9;
    $feeds_tamper->description = 'Reduce to single element';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_0-required';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array(
        'invert' => 0,
        'log' => 0,
    );
    $feeds_tamper->weight = 13;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_0-strip_tags';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 10;
    $feeds_tamper->description = 'Strip tags';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_0-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 8;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_1-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:1';
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
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_1-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:1';
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
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_1-find_replace_regex';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/\\n/',
        'replace' => '',
        'limit' => '1',
        'real_limit' => '1',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace new line /\\n/ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_1-html_entity_decode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 6;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_1-reduce_to_single_element';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'reduce_to_single_element';
    $feeds_tamper->settings = array(
        'reduce_method' => 'first',
    );
    $feeds_tamper->weight = 8;
    $feeds_tamper->description = 'Use the first array element';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_1-required';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array(
        'invert' => 0,
        'log' => 0,
    );
    $feeds_tamper->weight = 9;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_1-strip_tags';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:1';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Strip tags';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_1-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:1';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_10-find_replace';
    $feeds_tamper->importer = 'agris_filter';
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
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_10-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
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
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_10-find_replace_regex';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:10';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/\\n/',
        'replace' => '',
        'limit' => '1',
        'real_limit' => '1',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Find replace REGEX /\\n/';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_10-html_entity_decode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:10';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 6;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_10-strip_tags';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:10';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 7;
    $feeds_tamper->description = 'Strip tags';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_10-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:10';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 8;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_11-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:11';
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
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_11-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:11';
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
    $feeds_tamper->description = 'Find replace ]]>';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_11-html_entity_decode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:11';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_11-implode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:11';
    $feeds_tamper->plugin_id = 'implode';
    $feeds_tamper->settings = array(
        'glue' => ',',
        'real_glue' => ',',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Implode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_11-truncate_text';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:11';
    $feeds_tamper->plugin_id = 'truncate_text';
    $feeds_tamper->settings = array(
        'num_char' => '100',
        'ellipses' => 0,
    );
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Truncate';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_12-default_value';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:12';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'AGRIS',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value AGRIS';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_12-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:12';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_14-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:14';
    $feeds_tamper->plugin_id = 'find_replace';
    $feeds_tamper->settings = array(
        'find' => '<![CDATA[',
        'replace' => '<![CDATA[',
        'case_sensitive' => 0,
        'word_boundaries' => 0,
        'whole' => 0,
        'regex' => FALSE,
        'func' => 'str_ireplace',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_14-find_replace1';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:14';
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
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_14-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:14';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_15-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:15';
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
    $feeds_tamper->description = 'Find replace <![CDATA[';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_15-find_replace1';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:15';
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
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_16-default_value';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:16';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_17-required';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:17';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_17-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:17';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_18-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:18';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_18-find_replacee';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:18';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_18-required';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:18';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array(
        'invert' => 0,
        'log' => 0,
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_18-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:18';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_19-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:19';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_19-find_replacew';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:19';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_19-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:19';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_2-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:2';
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
    $feeds_tamper->weight = 8;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_2-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:2';
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
    $feeds_tamper->weight = 9;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_2-find_replace_regex';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:2';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/^\\s*\\/\\/<!\\[CDATA\\[([\\s\\S]*)\\/\\/\\]\\]>\\s*\\z/',
        'replace' => '\\s',
        'limit' => '',
        'real_limit' => -1,
    );
    $feeds_tamper->weight = 11;
    $feeds_tamper->description = 'Find replace REGEX';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_2-html_entity_decode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:2';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 10;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_2-strip_tags';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:2';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 12;
    $feeds_tamper->description = 'Strip tags';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_2-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:2';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 13;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_20-find_replace';
    $feeds_tamper->importer = 'agris_filter';
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
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_20-find_replace1';
    $feeds_tamper->importer = 'agris_filter';
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
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_20-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_21-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:21';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_21-find_replace5';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:21';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_21-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:21';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_22-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:22';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_22-find_replacexxx';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:22';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_22-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:22';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_23-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:23';
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
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_23-find_replace0';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:23';
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
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_23-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:23';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_24-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:24';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_24-find_replace123';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:24';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_24-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:24';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_25-copy';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:25';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:18',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_26-copy';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:26';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:0',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_27-copy';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:27';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:0',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_3-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:3';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_3-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:3';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_3-html_entity_decode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_3-keyword_filter';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'keyword_filter';
    $feeds_tamper->settings = array(
        'words' => 'agrarian law
agrarian reform 
agrarian structure of land
Agricultural land management 
agricultural landscape
agroforestry systems
Agropastoralism 
Alienation of land
animal husbandry
aquaculture 
land alienation
alienated land 
Capital value of land
cadastre administration
CEDAW land
co-ownership rights
Common land 
common law on land
Common rights 
Communal territory 
community forestry
Conflict of interest 
contract farming 
CEDAW
Customary land rights 
customary rights
customary law on land
deforestation 
development agencies 
extensive land use
Farm tenancy 
farmers associations 
farmers organizations 
Forest law 
Geographical information systems
customary law
Grazing land rights 
grazing lands
indigenous land tenure 
indigenous lands
intensive land use
grazing rights
land access 
Land acquisition
land administration 
land area 
land cadastre
land clearing
land collective ownership 
land concentration 
access to land
land conflicts
land consolidation
land cover 
land cover mapping
land decentralization 
land degradation 
land development 
Land dispute 
land distribution 
land diversion
land Dowry  
land economics
land Eminent domain 
eminent domain
land environment
land expropriation 
land geomatics 
encroached land
land grabbing 
land green belts 
land improvement
land information systems
land grab
land inheritance rights
land investments
Land law
Land loans 
land management
land map Scale 
land markets
nature reserves  
land of Local community 
land policies 
land property rights 
land reform 
land registration 
Land rent 
land rights in divorce 
land rights of orphans
prescriptive rights
prescriptive property
land rural planning 
Land speculation
land suitability
land Surveyors 
land tax
land tenant
land tenant\'s rights 
land tenure
Land tenure system 
land Territory 
land transfers
land use mapping 
land use planning
land Use rights 
Willing seller 
landlessness
rural land use planning
landowners
Latifundium 
lineage
Lineage land 
land ownership
marital property rights about land
Matrilineal land
Negotiated land reform 
Notary 
Pastoral land rights 
Pastoral lands
Patrilineal land
Priest of the land
marital property rights
private ownership of land
Property law about land
protected land areas 
public ownership of land
rangelands
Regularization of land ownership 
right of land access 
Right of land clearance 
Right of first occupancy 
rural areas 
rural population 
Sacred woods 
scrublands
right of access
Security of land tenure 
security of tenure
State property 
Statute law
suburban agriculture 
sustainable land management 
Tenant farmer 
Title deed
Torrens cadastral system  
Torrens system
Unclaimed lands
urban areas 
urban land development 
water management
water rights 
zoning ',
        'word_boundaries' => 0,
        'exact' => 0,
        'case_sensitive' => 0,
        'invert' => 0,
        'word_list' => array(
            0 => 'agrarian law',
            1 => 'agrarian reform',
            2 => 'agrarian structure of land',
            3 => 'Agricultural land management',
            4 => 'agricultural landscape',
            5 => 'agroforestry systems',
            6 => 'Agropastoralism',
            7 => 'Alienation of land',
            8 => 'animal husbandry',
            9 => 'aquaculture',
            10 => 'land alienation',
            11 => 'alienated land',
            12 => 'Capital value of land',
            13 => 'cadastre administration',
            14 => 'CEDAW land',
            15 => 'co-ownership rights',
            16 => 'Common land',
            17 => 'common law on land',
            18 => 'Common rights',
            19 => 'Communal territory',
            20 => 'community forestry',
            21 => 'Conflict of interest',
            22 => 'contract farming',
            23 => 'CEDAW',
            24 => 'Customary land rights',
            25 => 'customary rights',
            26 => 'customary law on land',
            27 => 'deforestation',
            28 => 'development agencies',
            29 => 'extensive land use',
            30 => 'Farm tenancy',
            31 => 'farmers associations',
            32 => 'farmers organizations',
            33 => 'Forest law',
            34 => 'Geographical information systems',
            35 => 'customary law',
            36 => 'Grazing land rights',
            37 => 'grazing lands',
            38 => 'indigenous land tenure',
            39 => 'indigenous lands',
            40 => 'intensive land use',
            41 => 'grazing rights',
            42 => 'land access',
            43 => 'Land acquisition',
            44 => 'land administration',
            45 => 'land area',
            46 => 'land cadastre',
            47 => 'land clearing',
            48 => 'land collective ownership',
            49 => 'land concentration',
            50 => 'access to land',
            51 => 'land conflicts',
            52 => 'land consolidation',
            53 => 'land cover',
            54 => 'land cover mapping',
            55 => 'land decentralization',
            56 => 'land degradation',
            57 => 'land development',
            58 => 'Land dispute',
            59 => 'land distribution',
            60 => 'land diversion',
            61 => 'land Dowry',
            62 => 'land economics',
            63 => 'land Eminent domain',
            64 => 'eminent domain',
            65 => 'land environment',
            66 => 'land expropriation',
            67 => 'land geomatics',
            68 => 'encroached land',
            69 => 'land grabbing',
            70 => 'land green belts',
            71 => 'land improvement',
            72 => 'land information systems',
            73 => 'land grab',
            74 => 'land inheritance rights',
            75 => 'land investments',
            76 => 'Land law',
            77 => 'Land loans',
            78 => 'land management',
            79 => 'land map Scale',
            80 => 'land markets',
            81 => 'nature reserves',
            82 => 'land of Local community',
            83 => 'land policies',
            84 => 'land property rights',
            85 => 'land reform',
            86 => 'land registration',
            87 => 'Land rent',
            88 => 'land rights in divorce',
            89 => 'land rights of orphans',
            90 => 'prescriptive rights',
            91 => 'prescriptive property',
            92 => 'land rural planning',
            93 => 'Land speculation',
            94 => 'land suitability',
            95 => 'land Surveyors',
            96 => 'land tax',
            97 => 'land tenant',
            98 => 'land tenant\'s rights',
            99 => 'land tenure',
            100 => 'Land tenure system',
            101 => 'land Territory',
            102 => 'land transfers',
            103 => 'land use mapping',
            104 => 'land use planning',
            105 => 'land Use rights',
            106 => 'Willing seller',
            107 => 'landlessness',
            108 => 'rural land use planning',
            109 => 'landowners',
            110 => 'Latifundium',
            111 => 'lineage',
            112 => 'Lineage land',
            113 => 'land ownership',
            114 => 'marital property rights about land',
            115 => 'Matrilineal land',
            116 => 'Negotiated land reform',
            117 => 'Notary',
            118 => 'Pastoral land rights',
            119 => 'Pastoral lands',
            120 => 'Patrilineal land',
            121 => 'Priest of the land',
            122 => 'marital property rights',
            123 => 'private ownership of land',
            124 => 'Property law about land',
            125 => 'protected land areas',
            126 => 'public ownership of land',
            127 => 'rangelands',
            128 => 'Regularization of land ownership',
            129 => 'right of land access',
            130 => 'Right of land clearance',
            131 => 'Right of first occupancy',
            132 => 'rural areas',
            133 => 'rural population',
            134 => 'Sacred woods',
            135 => 'scrublands',
            136 => 'right of access',
            137 => 'Security of land tenure',
            138 => 'security of tenure',
            139 => 'State property',
            140 => 'Statute law',
            141 => 'suburban agriculture',
            142 => 'sustainable land management',
            143 => 'Tenant farmer',
            144 => 'Title deed',
            145 => 'Torrens cadastral system',
            146 => 'Torrens system',
            147 => 'Unclaimed lands',
            148 => 'urban areas',
            149 => 'urban land development',
            150 => 'water management',
            151 => 'water rights',
            152 => 'zoning',
        ),
        'regex' => FALSE,
        'func' => 'mb_stripos',
    );
    $feeds_tamper->weight = 7;
    $feeds_tamper->description = 'Keyword filter';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_3-reduce_to_single_element';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'reduce_to_single_element';
    $feeds_tamper->settings = array(
        'reduce_method' => 'first',
    );
    $feeds_tamper->weight = 6;
    $feeds_tamper->description = 'Use the first array element';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_3-required';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_3-strip_tags';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:3';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_3-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:3';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_4-default_value';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:4';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'English',
    );
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Set default value';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_4-default_value1';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:4';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'English',
    );
    $feeds_tamper->weight = 6;
    $feeds_tamper->description = 'Set default value English';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_4-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:4';
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
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_4-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:4';
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
    $feeds_tamper->description = 'Find replace ]]>';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_4-find_replace_regex';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:4';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/^\\s*\\/\\/<!\\[CDATA\\[([\\s\\S]*)\\/\\/\\]\\]>\\s*\\z/',
        'replace' => '\\s',
        'limit' => '',
        'real_limit' => -1,
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace REGEX';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_4-html_entity_decode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:4';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_4-strip_tags';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:4';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_5-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:5';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_5-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:5';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_5-html_entity_decode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:5';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_5-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:5';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_6-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:6';
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
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_6-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:6';
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
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_6-html_entity_decode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:6';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_6-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:6';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_7-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:7';
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
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_7-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:7';
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
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_7-sprintf';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:7';
    $feeds_tamper->plugin_id = 'sprintf';
    $feeds_tamper->settings = array(
        'format' => '%s',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Format string';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_8-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:8';
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
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Find replace ]]> with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_8-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:8';
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
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Find replace <![CDATA[ with space';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_8-html_entity_decode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:8';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_8-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:8';
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
    $feeds_tamper->id = 'agris_filter-xpathparser_9-explode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:9';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Explode ;';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_9-find_replace';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:9';
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
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_9-find_replaces';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:9';
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
    $feeds_tamper->weight = 6;
    $feeds_tamper->description = 'Find replace';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_9-find_replace_regex';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:9';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/^\\s*\\/\\/<!\\[CDATA\\[([\\s\\S]*)\\/\\/\\]\\]>\\s*\\z/',
        'replace' => '\\s',
        'limit' => '',
        'real_limit' => -1,
    );
    $feeds_tamper->weight = 10;
    $feeds_tamper->description = 'Find replace REGEX';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_9-find_replace_regexx';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:9';
    $feeds_tamper->plugin_id = 'find_replace_regex';
    $feeds_tamper->settings = array(
        'find' => '/\\n/',
        'replace' => '',
        'limit' => '1',
        'real_limit' => '1',
    );
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Find replace REGEX /\\n/';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_9-html_entity_decode';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:9';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 7;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_9-strip_tags';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:9';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 9;
    $feeds_tamper->description = 'Strip tags';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'agris_filter-xpathparser_9-trim';
    $feeds_tamper->importer = 'agris_filter';
    $feeds_tamper->source = 'xpathparser:9';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 8;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

  return $export;
}
