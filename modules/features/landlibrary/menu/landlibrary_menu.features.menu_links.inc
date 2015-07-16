<?php
/**
 * @file
 * landlibrary_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function landlibrary_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_landlibrary:node/10150
  $menu_links['main-menu_landlibrary:node/10150'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/10150',
    'router_path' => 'node/%',
    'link_title' => 'Landlibrary',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'node_type' => 'page',
      'identifier' => 'main-menu_landlibrary:node/10150',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Landlibrary');


  return $menu_links;
}
