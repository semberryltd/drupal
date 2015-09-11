<?php
/**
 * @file
 * landlibrary_importers_usaid.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function landlibrary_importers_usaid_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_rss-usaid-commentary-feed:node/add/rss-usaid-commentary-feed
  $menu_links['navigation_rss-usaid-commentary-feed:node/add/rss-usaid-commentary-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/rss-usaid-commentary-feed',
    'router_path' => 'node/add/rss-usaid-commentary-feed',
    'link_title' => 'Rss usaid commentary feed',
    'options' => array(
      'attributes' => array(
        'title' => 'A content type that used from RSS importer as fetcher from http://usaidlandtenure.net/commentary-feed',
      ),
      'identifier' => 'navigation_rss-usaid-commentary-feed:node/add/rss-usaid-commentary-feed',
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
  t('Rss usaid commentary feed');

  return $menu_links;
}
