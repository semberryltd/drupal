<?php
/**
 * @file
 * landlibrary_importers_ifpri.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landlibrary_importers_ifpri_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ifpri_content_ingest';
  $strongarm->value = 0;
  $export['comment_anonymous_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_ifpri_creator_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ifpri_content_ingest';
  $strongarm->value = 1;
  $export['comment_default_mode_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_ifpri_creator_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ifpri_content_ingest';
  $strongarm->value = '50';
  $export['comment_default_per_page_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_ifpri_creator_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ifpri_content_ingest';
  $strongarm->value = 1;
  $export['comment_form_location_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_ifpri_creator_feed';
  $strongarm->value = 1;
  $export['comment_form_location_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ifpri_content_ingest';
  $strongarm->value = '2';
  $export['comment_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_ifpri_creator_feed';
  $strongarm->value = '2';
  $export['comment_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ifpri_content_ingest';
  $strongarm->value = '1';
  $export['comment_preview_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_ifpri_creator_feed';
  $strongarm->value = '1';
  $export['comment_preview_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ifpri_content_ingest';
  $strongarm->value = 1;
  $export['comment_subject_field_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_ifpri_creator_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ifpri_batch_file';
  $strongarm->value = '0';
  $export['language_content_type_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ifpri_content_ingest';
  $strongarm->value = '0';
  $export['language_content_type_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ifpri_creator_feed';
  $strongarm->value = '0';
  $export['language_content_type_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ifpri_file_upload';
  $strongarm->value = '0';
  $export['language_content_type_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ifpri_ingestion';
  $strongarm->value = '0';
  $export['language_content_type_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ifpri_batch_file';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ifpri_content_ingest';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ifpri_creator_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ifpri_file_upload';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ifpri_ingestion';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ifpri_batch_file';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ifpri_content_ingest';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ifpri_creator_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ifpri_file_upload';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ifpri_ingestion';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ifpri_batch_file';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ifpri_content_ingest';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ifpri_creator_feed';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ifpri_file_upload';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ifpri_ingestion';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ifpri_batch_file';
  $strongarm->value = '1';
  $export['node_preview_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ifpri_content_ingest';
  $strongarm->value = '1';
  $export['node_preview_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ifpri_creator_feed';
  $strongarm->value = '1';
  $export['node_preview_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ifpri_file_upload';
  $strongarm->value = '1';
  $export['node_preview_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ifpri_ingestion';
  $strongarm->value = '1';
  $export['node_preview_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ifpri_batch_file';
  $strongarm->value = 1;
  $export['node_submitted_ifpri_batch_file'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ifpri_content_ingest';
  $strongarm->value = 1;
  $export['node_submitted_ifpri_content_ingest'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ifpri_creator_feed';
  $strongarm->value = 1;
  $export['node_submitted_ifpri_creator_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ifpri_file_upload';
  $strongarm->value = 1;
  $export['node_submitted_ifpri_file_upload'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ifpri_ingestion';
  $strongarm->value = 1;
  $export['node_submitted_ifpri_ingestion'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ifpri_batch_file_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ifpri_batch_file_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ifpri_content_ingest_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ifpri_content_ingest_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ifpri_creator_feed_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ifpri_creator_feed_pattern'] = $strongarm;

  return $export;
}
