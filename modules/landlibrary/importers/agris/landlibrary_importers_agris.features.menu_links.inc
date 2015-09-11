<?php
/**
 * @file
 * landlibrary_importers_agris.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function landlibrary_importers_agris_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_agris-conference--feed:node/add/agris-conference-feed
  $menu_links['navigation_agris-conference--feed:node/add/agris-conference-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/agris-conference-feed',
    'router_path' => 'node/add/agris-conference-feed',
    'link_title' => 'agris conference  feed',
    'options' => array(
      'attributes' => array(
        'title' => 'Agris Publisher file preimporter in order to be ingested later all agris content resource',
      ),
      'identifier' => 'navigation_agris-conference--feed:node/add/agris-conference-feed',
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
  // Exported menu link: navigation_agris-conference:node/add/agris-conference-
  $menu_links['navigation_agris-conference:node/add/agris-conference-'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/agris-conference-',
    'router_path' => 'node/add/agris-conference-',
    'link_title' => 'agris conference',
    'options' => array(
      'identifier' => 'navigation_agris-conference:node/add/agris-conference-',
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
  // Exported menu link: navigation_agris-creator-preimporter:node/add/agris-clone2
  $menu_links['navigation_agris-creator-preimporter:node/add/agris-clone2'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/agris-clone2',
    'router_path' => 'node/add/agris-clone2',
    'link_title' => 'agris creator preimporter',
    'options' => array(
      'identifier' => 'navigation_agris-creator-preimporter:node/add/agris-clone2',
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
  // Exported menu link: navigation_agris-dump-file-upload-feed:node/add/agris-dump-file-upload-feed
  $menu_links['navigation_agris-dump-file-upload-feed:node/add/agris-dump-file-upload-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/agris-dump-file-upload-feed',
    'router_path' => 'node/add/agris-dump-file-upload-feed',
    'link_title' => 'Agris dump file upload feed',
    'options' => array(
      'identifier' => 'navigation_agris-dump-file-upload-feed:node/add/agris-dump-file-upload-feed',
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
  // Exported menu link: navigation_agris-file-upload-feed:node/add/agris-file-upload-feed
  $menu_links['navigation_agris-file-upload-feed:node/add/agris-file-upload-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/agris-file-upload-feed',
    'router_path' => 'node/add/agris-file-upload-feed',
    'link_title' => 'Agris file upload feed',
    'options' => array(
      'identifier' => 'navigation_agris-file-upload-feed:node/add/agris-file-upload-feed',
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
  // Exported menu link: navigation_agris-publisher-file-feeds:node/add/agris-publisher-file-feeds
  $menu_links['navigation_agris-publisher-file-feeds:node/add/agris-publisher-file-feeds'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/agris-publisher-file-feeds',
    'router_path' => 'node/add/agris-publisher-file-feeds',
    'link_title' => 'Agris Publisher file feeds',
    'options' => array(
      'identifier' => 'navigation_agris-publisher-file-feeds:node/add/agris-publisher-file-feeds',
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
  // Exported menu link: navigation_agris-publisher-file:node/add/agris-publisher-file
  $menu_links['navigation_agris-publisher-file:node/add/agris-publisher-file'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/agris-publisher-file',
    'router_path' => 'node/add/agris-publisher-file',
    'link_title' => 'Agris Publisher file',
    'options' => array(
      'attributes' => array(
        'title' => 'Agris Publisher file preimporter in order to be ingested later all agris content resource',
      ),
      'identifier' => 'navigation_agris-publisher-file:node/add/agris-publisher-file',
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
  t('Agris Publisher file');
  t('Agris Publisher file feeds');
  t('Agris dump file upload feed');
  t('Agris file upload feed');
  t('agris conference');
  t('agris conference  feed');
  t('agris creator preimporter');

  return $menu_links;
}
