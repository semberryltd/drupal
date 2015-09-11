<?php
/**
 * @file
 * landlibrary_importers_oai_pmh.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landlibrary_importers_oai_pmh_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_oai_pmh_importer';
  $strongarm->value = 0;
  $export['comment_anonymous_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_oai_pmh_importer';
  $strongarm->value = 1;
  $export['comment_default_mode_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_oai_pmh_importer';
  $strongarm->value = '50';
  $export['comment_default_per_page_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_oai_pmh_importer';
  $strongarm->value = 1;
  $export['comment_form_location_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_oai_pmh_importer';
  $strongarm->value = '2';
  $export['comment_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_oai_pmh_importer';
  $strongarm->value = '1';
  $export['comment_preview_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_oai_pmh_importer';
  $strongarm->value = 1;
  $export['comment_subject_field_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_oai_pmh_importer';
  $strongarm->value = '0';
  $export['language_content_type_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_oai_pmh_importer';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_oai_pmh_importer';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_oai_pmh_importer';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_oai_pmh_importer';
  $strongarm->value = '1';
  $export['node_preview_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_oai_pmh_importer';
  $strongarm->value = 1;
  $export['node_submitted_oai_pmh_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_oai_pmh_importer_pattern';
  $strongarm->value = '';
  $export['pathauto_node_oai_pmh_importer_pattern'] = $strongarm;

  return $export;
}
