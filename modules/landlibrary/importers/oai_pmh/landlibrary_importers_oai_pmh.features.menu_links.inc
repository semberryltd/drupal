<?php
/**
 * @file
 * landlibrary_importers_oai_pmh.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function landlibrary_importers_oai_pmh_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_oai-pmh-importer:node/add/oai-pmh-importer
  $menu_links['navigation_oai-pmh-importer:node/add/oai-pmh-importer'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/oai-pmh-importer',
    'router_path' => 'node/add/oai-pmh-importer',
    'link_title' => 'OAI PMH importer',
    'options' => array(
      'attributes' => array(
        'title' => 'This content type is used as a fetcher from OAI-PM importer\'s configuration.',
      ),
      'identifier' => 'navigation_oai-pmh-importer:node/add/oai-pmh-importer',
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
  t('OAI PMH importer');

  return $menu_links;
}
