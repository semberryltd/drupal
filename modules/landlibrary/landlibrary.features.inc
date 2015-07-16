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
    'agris_clone2' => array(
      'name' => t('agris creator preimporter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_conference_' => array(
      'name' => t('agris conference'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_conference_feed' => array(
      'name' => t('agris conference  feed'),
      'base' => 'node_content',
      'description' => t('Agris Publisher file preimporter in order to be ingested later all agris content resource'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_dump_file_upload_feed' => array(
      'name' => t('Agris dump file upload feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_file_upload_feed' => array(
      'name' => t('Agris file upload feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_publisher_file' => array(
      'name' => t('Agris Publisher file'),
      'base' => 'node_content',
      'description' => t('Agris Publisher file preimporter in order to be ingested later all agris content resource'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_publisher_file_feeds' => array(
      'name' => t('Agris Publisher file feeds'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'general_feed' => array(
      'name' => t('general feed'),
      'base' => 'node_content',
      'description' => t('This content type support the fetching feed content in order to be processed and mapped to fields of a preferd-target content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
    'landcoalition_events_feed' => array(
      'name' => t('LandCoalition Events feed'),
      'base' => 'node_content',
      'description' => t('Import events from landcoalition : http://landcoalition.org/'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'landcoalition_rss_feed' => array(
      'name' => t('LandCoalition RSS feed'),
      'base' => 'node_content',
      'description' => t('LandCoalition RSS feed'),
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
    'oai_pmh_importer' => array(
      'name' => t('OAI PMH importer'),
      'base' => 'node_content',
      'description' => t('This content type is used as a fetcher from OAI-PM importer\'s configuration.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A basic page in the Landportal website'),
      'has_title' => '1',
      'title_label' => t('Title'),
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
    'rss_usaid_commentary_feed' => array(
      'name' => t('Rss usaid commentary feed'),
      'base' => 'node_content',
      'description' => t('A content type that used from RSS importer as fetcher from http://usaidlandtenure.net/commentary-feed'),
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
