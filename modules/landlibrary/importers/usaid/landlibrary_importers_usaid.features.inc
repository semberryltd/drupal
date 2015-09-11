<?php
/**
 * @file
 * landlibrary_importers_usaid.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landlibrary_importers_usaid_ctools_plugin_api($module = NULL, $api = NULL) {
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
function landlibrary_importers_usaid_node_info() {
  $items = array(
    'rss_usaid_commentary_feed' => array(
      'name' => t('Rss usaid commentary feed'),
      'base' => 'node_content',
      'description' => t('A content type that used from RSS importer as fetcher from http://usaidlandtenure.net/commentary-feed'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
