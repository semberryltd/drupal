<?php
/**
 * @file
 * landlibrary_importers_landcoalition.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function landlibrary_importers_landcoalition_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_events_rss_import-description-html_entity_decode';
  $feeds_tamper->importer = 'landcoalition_events_rss_import';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'HTML entity decode';
  $export['landcoalition_events_rss_import-description-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_events_rss_import-description-required';
  $feeds_tamper->importer = 'landcoalition_events_rss_import';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Required field';
  $export['landcoalition_events_rss_import-description-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_events_rss_import-description-strip_tags';
  $feeds_tamper->importer = 'landcoalition_events_rss_import';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['landcoalition_events_rss_import-description-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-blank_source_1-default_value';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'Blank source 1';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'INTERNATIONAL LANDCOALITION',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value';
  $export['landcoalition_rss_import-blank_source_1-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-blank_source_2-default_value';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'Blank source 2';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'International Land Coalition (ILC)',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value International Land Coalition (ILC)';
  $export['landcoalition_rss_import-blank_source_2-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-blank_source_3-default_value';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'Blank source 3';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'en',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value en';
  $export['landcoalition_rss_import-blank_source_3-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-blank_source_4-default_value';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'Blank source 4';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'English',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set default value English';
  $export['landcoalition_rss_import-blank_source_4-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-description-html_entity_decode';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['landcoalition_rss_import-description-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-description-required';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Required field';
  $export['landcoalition_rss_import-description-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-description-strip_tags';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Strip tags';
  $export['landcoalition_rss_import-description-strip_tags'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-guid-explode';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'guid';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '%s',
    'limit' => '',
    'real_separator' => ' ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode %s';
  $export['landcoalition_rss_import-guid-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-guid-reduce_to_single_element';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'guid';
  $feeds_tamper->plugin_id = 'reduce_to_single_element';
  $feeds_tamper->settings = array(
    'reduce_method' => 'first',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Use the first array element';
  $export['landcoalition_rss_import-guid-reduce_to_single_element'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-parent_uid-copy';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'parent:uid';
  $feeds_tamper->plugin_id = 'copy';
  $feeds_tamper->settings = array(
    'to_from' => 'from',
    'source' => 'title',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Copy source value';
  $export['landcoalition_rss_import-parent_uid-copy'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-title-required';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Required field';
  $export['landcoalition_rss_import-title-required'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'landcoalition_rss_import-title-strip_tags';
  $feeds_tamper->importer = 'landcoalition_rss_import';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'strip_tags';
  $feeds_tamper->settings = array(
    'allowed_tags' => '',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Strip tags';
  $export['landcoalition_rss_import-title-strip_tags'] = $feeds_tamper;

  return $export;
}
