<?php
/**
 * @file
 * landlibrary_importers_ifpri.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function landlibrary_importers_ifpri_feeds_tamper_default() {
    $export = array();

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_0-required';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Required field';
    $export['ifpri_importer-xpathparser_0-required'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_0-trim';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';
    $export['ifpri_importer-xpathparser_0-trim'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_0-truncate_text';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:0';
    $feeds_tamper->plugin_id = 'truncate_text';
    $feeds_tamper->settings = array(
        'num_char' => '200',
        'ellipses' => 0,
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Truncate';
    $export['ifpri_importer-xpathparser_0-truncate_text'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_13-explode';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:13';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode ;';
    $export['ifpri_importer-xpathparser_13-explode'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_14-explode';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:14';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode ;';
    $export['ifpri_importer-xpathparser_14-explode'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_19-explode';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:19';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode ';
    $export['ifpri_importer-xpathparser_19-explode'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_2-find_replace';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:2';
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
    $feeds_tamper->description = 'Find replace ; with space';
    $export['ifpri_importer-xpathparser_2-find_replace'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_20-explode';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Explode ;';
    $export['ifpri_importer-xpathparser_20-explode'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_20-strip_tags';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Strip tags';
    $export['ifpri_importer-xpathparser_20-strip_tags'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_20-trim';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:20';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Trim';
    $export['ifpri_importer-xpathparser_20-trim'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_21-default_value';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:21';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'en',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value en';
    $export['ifpri_importer-xpathparser_21-default_value'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_22-explode';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:22';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode ;';
    $export['ifpri_importer-xpathparser_22-explode'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_23-explode';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:23';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode';
    $export['ifpri_importer-xpathparser_23-explode'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_24-copy';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:24';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:0',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';
    $export['ifpri_importer-xpathparser_24-copy'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_24-required';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:24';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Required field';
    $export['ifpri_importer-xpathparser_24-required'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_25-copy';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:25';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:24',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';
    $export['ifpri_importer-xpathparser_25-copy'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_26-copy';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:26';
    $feeds_tamper->plugin_id = 'copy';
    $feeds_tamper->settings = array(
        'to_from' => 'from',
        'source' => 'xpathparser:24',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Copy source value';
    $export['ifpri_importer-xpathparser_26-copy'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_3-find_replace';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:3';
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
    $feeds_tamper->description = 'Find replace ; with space';
    $export['ifpri_importer-xpathparser_3-find_replace'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_4-explode';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:4';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode ; ';
    $export['ifpri_importer-xpathparser_4-explode'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_6-required';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:6';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Required field';
    $export['ifpri_importer-xpathparser_6-required'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_6-strip_tags';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:6';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Strip tags';
    $export['ifpri_importer-xpathparser_6-strip_tags'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_6-trim';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:6';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Trim';
    $export['ifpri_importer-xpathparser_6-trim'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_7-default_value';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:7';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'English',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value English';
    $export['ifpri_importer-xpathparser_7-default_value'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_8-explode';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:8';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => ';',
        'limit' => '',
        'real_separator' => ';',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode ;';
    $export['ifpri_importer-xpathparser_8-explode'] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'ifpri_importer-xpathparser_8-required';
    $feeds_tamper->importer = 'ifpri_importer';
    $feeds_tamper->source = 'xpathparser:8';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Required field';
    $export['ifpri_importer-xpathparser_8-required'] = $feeds_tamper;

    /**
     * IFPRI Importer Creator tamper
     */
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
    $export['ifpri_importer_creator-xpathparser_0-explode'] = $feeds_tamper;

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
    $export['ifpri_importer_creator-xpathparser_0-find_replacef'] = $feeds_tamper;

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
    $export['ifpri_importer_creator-xpathparser_0-trim'] = $feeds_tamper;

    return $export;
}
