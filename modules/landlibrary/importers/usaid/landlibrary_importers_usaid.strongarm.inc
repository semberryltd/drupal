<?php
/**
 * @file
 * landlibrary_importers_usaid.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landlibrary_importers_usaid_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_rss_usaid_commentary_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_rss_usaid_commentary_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_rss_usaid_commentary_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_rss_usaid_commentary_feed';
  $strongarm->value = 1;
  $export['comment_form_location_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_rss_usaid_commentary_feed';
  $strongarm->value = '1';
  $export['comment_preview_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_rss_usaid_commentary_feed';
  $strongarm->value = '2';
  $export['comment_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_rss_usaid_commentary_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_rss_usaid_commentary_feed';
  $strongarm->value = '0';
  $export['language_content_type_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_rss_usaid_commentary_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_rss_usaid_commentary_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_rss_usaid_commentary_feed';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_rss_usaid_commentary_feed';
  $strongarm->value = '1';
  $export['node_preview_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_rss_usaid_commentary_feed';
  $strongarm->value = 1;
  $export['node_submitted_rss_usaid_commentary_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_rss_usaid_commentary_feed_pattern';
  $strongarm->value = '';
  $export['pathauto_node_rss_usaid_commentary_feed_pattern'] = $strongarm;

  return $export;
}
