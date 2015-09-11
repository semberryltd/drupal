<?php
/**
 * @file
 * landlibrary_importers_agris.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landlibrary_importers_agris_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_agris_conference_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_agris_conference_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_agris_dump_file_upload_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_agris_dump_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_agris_conference_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_agris_conference_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_agris_dump_file_upload_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_agris_dump_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_agris_conference_feed';
  $strongarm->value = 1;
  $export['comment_form_location_agris_conference_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_agris_dump_file_upload_feed';
  $strongarm->value = 1;
  $export['comment_form_location_agris_dump_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_agris_conference_feed';
  $strongarm->value = '1';
  $export['comment_preview_agris_conference_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_agris_dump_file_upload_feed';
  $strongarm->value = '1';
  $export['comment_preview_agris_dump_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_agris_conference_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_agris_conference_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_agris_dump_file_upload_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_agris_dump_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_clone2';
  $strongarm->value = '0';
  $export['language_content_type_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_conference_';
  $strongarm->value = '0';
  $export['language_content_type_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_conference_feed';
  $strongarm->value = '0';
  $export['language_content_type_agris_conference_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_dump_file_upload_feed';
  $strongarm->value = '0';
  $export['language_content_type_agris_dump_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_file_upload_feed';
  $strongarm->value = '0';
  $export['language_content_type_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_publisher_file';
  $strongarm->value = '0';
  $export['language_content_type_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_agris_publisher_file_feeds';
  $strongarm->value = '0';
  $export['language_content_type_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_clone2';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_conference_';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_conference_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_conference_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_dump_file_upload_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_dump_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_file_upload_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_publisher_file';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_agris_publisher_file_feeds';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_clone2';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_conference_';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_conference_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_conference_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_dump_file_upload_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_dump_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_file_upload_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_publisher_file';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_agris_publisher_file_feeds';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_clone2';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_conference_';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_conference_feed';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_agris_conference_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_dump_file_upload_feed';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_agris_dump_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_file_upload_feed';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_publisher_file';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_agris_publisher_file_feeds';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_clone2';
  $strongarm->value = '1';
  $export['node_preview_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_conference_';
  $strongarm->value = '1';
  $export['node_preview_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_conference_feed';
  $strongarm->value = '1';
  $export['node_preview_agris_conference_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_dump_file_upload_feed';
  $strongarm->value = '1';
  $export['node_preview_agris_dump_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_file_upload_feed';
  $strongarm->value = '0';
  $export['node_preview_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_publisher_file';
  $strongarm->value = '1';
  $export['node_preview_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_agris_publisher_file_feeds';
  $strongarm->value = '1';
  $export['node_preview_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_clone2';
  $strongarm->value = 1;
  $export['node_submitted_agris_clone2'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_conference_';
  $strongarm->value = 1;
  $export['node_submitted_agris_conference_'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_conference_feed';
  $strongarm->value = 1;
  $export['node_submitted_agris_conference_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_dump_file_upload_feed';
  $strongarm->value = 1;
  $export['node_submitted_agris_dump_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_file_upload_feed';
  $strongarm->value = 1;
  $export['node_submitted_agris_file_upload_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_publisher_file';
  $strongarm->value = 1;
  $export['node_submitted_agris_publisher_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_agris_publisher_file_feeds';
  $strongarm->value = 1;
  $export['node_submitted_agris_publisher_file_feeds'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_agris_conference_feed_pattern';
  $strongarm->value = '';
  $export['pathauto_node_agris_conference_feed_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_agris_conference__pattern';
  $strongarm->value = '';
  $export['pathauto_node_agris_conference__pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_agris_dump_file_upload_feed_pattern';
  $strongarm->value = '';
  $export['pathauto_node_agris_dump_file_upload_feed_pattern'] = $strongarm;

  return $export;
}
