<?php
/**
 * @file
 * landlibrary_importers_oai_pmh.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landlibrary_importers_oai_pmh_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function landlibrary_importers_oai_pmh_node_info() {
  $items = array(
    'oai_pmh_importer' => array(
      'name' => t('OAI PMH importer'),
      'base' => 'node_content',
      'description' => t('This content type is used as a fetcher from OAI-PM importer\'s configuration.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
