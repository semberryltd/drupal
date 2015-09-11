<?php
/**
 * @file
 * landlibrary_importers_ifpri.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function landlibrary_importers_ifpri_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_ifpri-batch-file:node/add/ifpri-batch-file
  $menu_links['navigation_ifpri-batch-file:node/add/ifpri-batch-file'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ifpri-batch-file',
    'router_path' => 'node/add/ifpri-batch-file',
    'link_title' => 'ifpri batch file',
    'options' => array(
      'attributes' => array(
        'title' => 'A fetcher for IFPRI importer',
      ),
      'identifier' => 'navigation_ifpri-batch-file:node/add/ifpri-batch-file',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_ifpri-content-ingest:node/add/ifpri-content-ingest
  $menu_links['navigation_ifpri-content-ingest:node/add/ifpri-content-ingest'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ifpri-content-ingest',
    'router_path' => 'node/add/ifpri-content-ingest',
    'link_title' => 'IFPRI content ingest',
    'options' => array(
      'attributes' => array(
        'title' => 'IFPRI butch file upload from private://ifpri directory ',
      ),
      'identifier' => 'navigation_ifpri-content-ingest:node/add/ifpri-content-ingest',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_ifpri-creator-feed:node/add/ifpri-creator-feed
  $menu_links['navigation_ifpri-creator-feed:node/add/ifpri-creator-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ifpri-creator-feed',
    'router_path' => 'node/add/ifpri-creator-feed',
    'link_title' => 'IFPRI creator feed',
    'options' => array(
      'attributes' => array(
        'title' => 'This content type is the fetcher of ifpri creator preimporter',
      ),
      'identifier' => 'navigation_ifpri-creator-feed:node/add/ifpri-creator-feed',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_ifpri-file-upload:node/add/ifpri-file-upload
  $menu_links['navigation_ifpri-file-upload:node/add/ifpri-file-upload'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ifpri-file-upload',
    'router_path' => 'node/add/ifpri-file-upload',
    'link_title' => 'ifpri file upload',
    'options' => array(
      'identifier' => 'navigation_ifpri-file-upload:node/add/ifpri-file-upload',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Exported menu link: navigation_ifpri-ingestion:node/add/ifpri-ingestion
  $menu_links['navigation_ifpri-ingestion:node/add/ifpri-ingestion'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/ifpri-ingestion',
    'router_path' => 'node/add/ifpri-ingestion',
    'link_title' => 'Ifpri ingestion',
    'options' => array(
      'identifier' => 'navigation_ifpri-ingestion:node/add/ifpri-ingestion',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('IFPRI content ingest');
  t('IFPRI creator feed');
  t('Ifpri ingestion');
  t('ifpri batch file');
  t('ifpri file upload');

  return $menu_links;
}
