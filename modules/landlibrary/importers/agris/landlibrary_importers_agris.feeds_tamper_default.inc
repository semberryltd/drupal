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
  $feeds_tamper->id = 'agris_conference_preimporter-xpathparser_0-find_replace';
  $feeds_tamper->importer = 'agris_conference_preimporter';
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
  $export['agris_conference_preimporter-xpathparser_0-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_conference_preimporter-xpathparser_0-find_replacee';
  $feeds_tamper->importer = 'agris_conference_preimporter';
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
  $export['agris_conference_preimporter-xpathparser_0-find_replacee'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_conference_preimporter-xpathparser_0-trim';
  $feeds_tamper->importer = 'agris_conference_preimporter';
  $feeds_tamper->source = 'xpathparser:0';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['agris_conference_preimporter-xpathparser_0-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_0-find_replace_regex1'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_0-reduce_to_single_element'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_0-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_1-reduce_to_single_element'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_1-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_10-find_replace_regex'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_10-strip_tags'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_10-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_12-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_14-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_16-default_value'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_17-required'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_17-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_18-find_replace'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_18-find_replacee'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_18-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_19-find_replace'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_19-find_replacew'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_19-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_2-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_20-find_replace'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_20-find_replace1'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_20-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_21-find_replace'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_21-find_replace5'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_21-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_22-find_replace'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_22-find_replacexxx'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_22-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_23-find_replace'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_23-find_replace0'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_23-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_24-find_replace'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_24-find_replace123'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_24-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_25-copy'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_26-copy'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_27-copy'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_3-reduce_to_single_element'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_3-required'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_3-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_4-default_value1'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_5-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_6-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_8-trim'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_9-find_replace_regexx'] = $feeds_tamper;

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
  $export['agris_filter-xpathparser_9-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_organization_preimporter-xpathparser_1-find_replace';
  $feeds_tamper->importer = 'agris_organization_preimporter';
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
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace <![CDATA[ with space';
  $export['agris_organization_preimporter-xpathparser_1-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_organization_preimporter-xpathparser_1-find_replace1';
  $feeds_tamper->importer = 'agris_organization_preimporter';
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
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace ]]>';
  $export['agris_organization_preimporter-xpathparser_1-find_replace1'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'agris_organization_preimporter-xpathparser_1-trim';
  $feeds_tamper->importer = 'agris_organization_preimporter';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['agris_organization_preimporter-xpathparser_1-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'clone2_agris_file-xpathparser_1-create_mul_nodes';
  $feeds_tamper->importer = 'clone2_agris_file';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'create_mul_nodes';
  $feeds_tamper->settings = array(
    'default_value' => 'person',
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Create multiple nodes set to person';
  $export['clone2_agris_file-xpathparser_1-create_mul_nodes'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'clone2_agris_file-xpathparser_1-explode';
  $feeds_tamper->importer = 'clone2_agris_file';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ';',
    'limit' => '',
    'real_separator' => ';',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Explode';
  $export['clone2_agris_file-xpathparser_1-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'clone2_agris_file-xpathparser_1-find_replace';
  $feeds_tamper->importer = 'clone2_agris_file';
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
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Find replace <![CDATA[ with space';
  $export['clone2_agris_file-xpathparser_1-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'clone2_agris_file-xpathparser_1-find_replace_regex';
  $feeds_tamper->importer = 'clone2_agris_file';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'find_replace_regex';
  $feeds_tamper->settings = array(
    'find' => '/\\n/',
    'replace' => '',
    'limit' => '1',
    'real_limit' => '1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace REGEX /\\n/';
  $export['clone2_agris_file-xpathparser_1-find_replace_regex'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'clone2_agris_file-xpathparser_1-find_replaceq';
  $feeds_tamper->importer = 'clone2_agris_file';
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
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Find replace ]]> with space';
  $export['clone2_agris_file-xpathparser_1-find_replaceq'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'clone2_agris_file-xpathparser_1-trim';
  $feeds_tamper->importer = 'clone2_agris_file';
  $feeds_tamper->source = 'xpathparser:1';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Trim';
  $export['clone2_agris_file-xpathparser_1-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'clone2_agris_file-xpathparser_5-copy';
  $feeds_tamper->importer = 'clone2_agris_file';
  $feeds_tamper->source = 'xpathparser:5';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'from',
    'source' => 'xpathparser:1',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['clone2_agris_file-xpathparser_5-copy'] = $feeds_tamper;

  return $export;
}
