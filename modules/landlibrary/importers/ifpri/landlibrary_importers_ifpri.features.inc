<?php
/**
 * @file
 * landlibrary_importers_ifpri.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landlibrary_importers_ifpri_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function landlibrary_importers_ifpri_node_info() {
  $items = array(
    'ifpri_batch_file' => array(
      'name' => t('ifpri batch file'),
      'base' => 'node_content',
      'description' => t('A fetcher for IFPRI importer'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ifpri_content_ingest' => array(
      'name' => t('IFPRI content ingest'),
      'base' => 'node_content',
      'description' => t('IFPRI butch file upload from private://ifpri directory '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ifpri_creator_feed' => array(
      'name' => t('IFPRI creator feed'),
      'base' => 'node_content',
      'description' => t('This content type is the fetcher of ifpri creator preimporter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ifpri_file_upload' => array(
      'name' => t('ifpri file upload'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ifpri_ingestion' => array(
      'name' => t('Ifpri ingestion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
