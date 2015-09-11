<?php
/**
 * @file
 * landlibrary.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landlibrary_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "apachesolr" && $api == "apachesolr_environments") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "elysia_cron" && $api == "default_elysia_cron_rules") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function landlibrary_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function landlibrary_node_info() {
  $items = array(
    'general_feed' => array(
      'name' => t('general feed'),
      'base' => 'node_content',
      'description' => t('This content type support the fetching feed content in order to be processed and mapped to fields of a preferd-target content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'landlibrary_resource' => array(
      'name' => t('LandLibrary Resource'),
      'base' => 'node_content',
      'description' => t('The main LandLibrary resource which can be a country report, a peer-reviewed publication, a policy document, an analytical study, a map, a high quality blog post, a video or other multimedia content.'),
      'has_title' => '1',
      'title_label' => t('Node Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rss_issue_briefs_feed' => array(
      'name' => t('Rss issue briefs feed'),
      'base' => 'node_content',
      'description' => t('A content type that used from RSS  issue briefs feed importer as fetcher from http://usaidlandtenure.net/issue-briefs-feed'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'subject_browse' => array(
      'name' => t('Subject Browse'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'type_browse' => array(
      'name' => t('Type Browse'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'worldbank_feed' => array(
      'name' => t('Worldbank feed'),
      'base' => 'node_content',
      'description' => t('Worldbank feed content type for fetcher'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
