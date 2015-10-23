<?php
/**
 * @file
 * importer_usaid.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function importer_usaid_feeds_tamper_default() {
    $export = array();

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_commentary_importer-blank_source_1-default_value';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'Blank source 1';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'USAID',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value USAID';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_commentary_importer-blank_source_2-default_value';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'Blank source 2';
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
    $feeds_tamper->id = 'rss_usaid_commentary_importer-blank_source_3-default_value';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'Blank source 3';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'Set default value commentary',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value Set default value commentary';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_commentary_importer-blank_source_4-default_value';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'Blank source 4';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'English',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value English';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_commentary_importer-description-html_entity_decode';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'description';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_commentary_importer-description-required';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'description';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_commentary_importer-description-strip_tags';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'description';
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
    $feeds_tamper->id = 'rss_usaid_commentary_importer-guid-explode';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'guid';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => '%s',
        'limit' => '',
        'real_separator' => ' ',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Explode %s';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_commentary_importer-guid-reduce_to_single_element';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'guid';
    $feeds_tamper->plugin_id = 'reduce_to_single_element';
    $feeds_tamper->settings = array(
        'reduce_method' => 'first',
    );
    $feeds_tamper->weight = 2;
    $feeds_tamper->description = ' Use the first array element';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_commentary_importer-guid-required';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'guid';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_commentary_importer-title-required';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'title';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_commentary_importer-title-strip_tags';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'title';
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
    $feeds_tamper->id = 'rss_usaid_commentary_importer-title-trim';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'title';
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
    $feeds_tamper->id = 'rss_usaid_commentary_importer-url-required';
    $feeds_tamper->importer = 'rss_usaid_commentary_importer';
    $feeds_tamper->source = 'url';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-blank_source_1-default_value';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'Blank source 1';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'USAID',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value USAID';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-blank_source_2-default_value';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'Blank source 2';
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
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-blank_source_3-default_value';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'Blank source 3';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'issue brief',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value issue brief';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-blank_source_4-default_value';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'Blank source 4';
    $feeds_tamper->plugin_id = 'default_value';
    $feeds_tamper->settings = array(
        'default_value' => 'English',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Set default value English';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-description-html_entity_decode';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'description';
    $feeds_tamper->plugin_id = 'html_entity_decode';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 5;
    $feeds_tamper->description = 'HTML entity decode';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-description-required';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'description';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 3;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-description-strip_tags';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'description';
    $feeds_tamper->plugin_id = 'strip_tags';
    $feeds_tamper->settings = array(
        'allowed_tags' => '',
    );
    $feeds_tamper->weight = 4;
    $feeds_tamper->description = 'Strip tags';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-description-trim';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'description';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 6;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-guid-explode';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'guid';
    $feeds_tamper->plugin_id = 'explode';
    $feeds_tamper->settings = array(
        'separator' => '%s',
        'limit' => '',
        'real_separator' => ' ',
    );
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Explode %s';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-guid-reduce_to_single_element';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'guid';
    $feeds_tamper->plugin_id = 'reduce_to_single_element';
    $feeds_tamper->settings = array(
        'reduce_method' => 'first',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Use the first array element';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-title-required';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'title';
    $feeds_tamper->plugin_id = 'required';
    $feeds_tamper->settings = array();
    $feeds_tamper->weight = 0;
    $feeds_tamper->description = 'Required field';

    $export[$feeds_tamper->id] = $feeds_tamper;

    $feeds_tamper = new stdClass();
    $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
    $feeds_tamper->api_version = 2;
    $feeds_tamper->id = 'rss_usaid_issue_briefs_importer_-title-trim';
    $feeds_tamper->importer = 'rss_usaid_issue_briefs_importer_';
    $feeds_tamper->source = 'title';
    $feeds_tamper->plugin_id = 'trim';
    $feeds_tamper->settings = array(
        'mask' => '',
        'side' => 'trim',
    );
    $feeds_tamper->weight = 1;
    $feeds_tamper->description = 'Trim';

    $export[$feeds_tamper->id] = $feeds_tamper;

    return $export;
}
