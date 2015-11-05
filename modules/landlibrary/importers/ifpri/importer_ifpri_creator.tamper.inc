<?php

$export = array();

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer_creator-xpathparser_0-create_mul_nodes';
$feeds_tamper->importer = 'ifpri_importer_creator';
$feeds_tamper->source = 'xpathparser:0';
$feeds_tamper->plugin_id = 'create_mul_nodes';
$feeds_tamper->settings = array(
  'default_value' => 'person',
);
$feeds_tamper->weight = 10;
$feeds_tamper->description = 'Create multiple nodes set to person';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer_creator-xpathparser_0-explode';
$feeds_tamper->importer = 'ifpri_importer_creator';
$feeds_tamper->source = 'xpathparser:0';
$feeds_tamper->plugin_id = 'explode';
$feeds_tamper->settings = array(
  'separator' => ';',
  'limit' => '',
  'real_separator' => ';',
);
$feeds_tamper->weight = 9;
$feeds_tamper->description = 'Explode ;';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer_creator-xpathparser_0-find_replace';
$feeds_tamper->importer = 'ifpri_importer_creator';
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
$feeds_tamper->weight = 7;
$feeds_tamper->description = 'Find replace <![CDATA[ with space';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer_creator-xpathparser_0-find_replacef';
$feeds_tamper->importer = 'ifpri_importer_creator';
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
$feeds_tamper->weight = 8;
$feeds_tamper->description = 'Find replace ]]> with space';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer_creator-xpathparser_0-trim';
$feeds_tamper->importer = 'ifpri_importer_creator';
$feeds_tamper->source = 'xpathparser:0';
$feeds_tamper->plugin_id = 'trim';
$feeds_tamper->settings = array(
  'mask' => '',
  'side' => 'trim',
);
$feeds_tamper->weight = 11;
$feeds_tamper->description = 'Trim';

$export[$feeds_tamper->id] = $feeds_tamper;

$feeds_tamper = new stdClass();
$feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
$feeds_tamper->api_version = 2;
$feeds_tamper->id = 'ifpri_importer_creator-xpathparser_1-find_replace';
$feeds_tamper->importer = 'ifpri_importer_creator';
$feeds_tamper->source = 'xpathparser:1';
$feeds_tamper->plugin_id = 'find_replace';
$feeds_tamper->settings = array(
  'find' => ';',
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
