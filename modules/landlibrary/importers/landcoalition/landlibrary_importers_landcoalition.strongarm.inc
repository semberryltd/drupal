<?php
/**
 * @file
 * landlibrary_importers_landcoalition.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landlibrary_importers_landcoalition_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_landcoalition_events_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_landcoalition_rss_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_landcoalition_events_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_landcoalition_rss_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_landcoalition_events_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_landcoalition_rss_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_landcoalition_events_feed';
  $strongarm->value = 1;
  $export['comment_form_location_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_landcoalition_rss_feed';
  $strongarm->value = 1;
  $export['comment_form_location_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_landcoalition_events_feed';
  $strongarm->value = '2';
  $export['comment_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_landcoalition_rss_feed';
  $strongarm->value = '2';
  $export['comment_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_landcoalition_events_feed';
  $strongarm->value = '1';
  $export['comment_preview_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_landcoalition_rss_feed';
  $strongarm->value = '1';
  $export['comment_preview_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_landcoalition_events_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_landcoalition_rss_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_landcoalition_events_feed';
  $strongarm->value = '0';
  $export['language_content_type_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_landcoalition_rss_feed';
  $strongarm->value = '0';
  $export['language_content_type_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_landcoalition_events_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_landcoalition_rss_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_landcoalition_events_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_landcoalition_rss_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_landcoalition_events_feed';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_landcoalition_rss_feed';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_landcoalition_events_feed';
  $strongarm->value = '1';
  $export['node_preview_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_landcoalition_rss_feed';
  $strongarm->value = '1';
  $export['node_preview_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_landcoalition_events_feed';
  $strongarm->value = 1;
  $export['node_submitted_landcoalition_events_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_landcoalition_rss_feed';
  $strongarm->value = 1;
  $export['node_submitted_landcoalition_rss_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_landcoalition_events_feed_pattern';
  $strongarm->value = '';
  $export['pathauto_node_landcoalition_events_feed_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_landcoalition_rss_feed_pattern';
  $strongarm->value = '';
  $export['pathauto_node_landcoalition_rss_feed_pattern'] = $strongarm;

  return $export;
}
