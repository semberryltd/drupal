<?php
/**
 * @file
 * landlibrary_importers_landcoalition.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function landlibrary_importers_landcoalition_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_landcoalition-events-feed:node/add/landcoalition-events-feed
  $menu_links['navigation_landcoalition-events-feed:node/add/landcoalition-events-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/landcoalition-events-feed',
    'router_path' => 'node/add/landcoalition-events-feed',
    'link_title' => 'LandCoalition Events feed',
    'options' => array(
      'attributes' => array(
        'title' => 'Import events from landcoalition : http://landcoalition.org/',
      ),
      'identifier' => 'navigation_landcoalition-events-feed:node/add/landcoalition-events-feed',
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
  // Exported menu link: navigation_landcoalition-rss-feed:node/add/landcoalition-rss-feed
  $menu_links['navigation_landcoalition-rss-feed:node/add/landcoalition-rss-feed'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/landcoalition-rss-feed',
    'router_path' => 'node/add/landcoalition-rss-feed',
    'link_title' => 'LandCoalition RSS feed',
    'options' => array(
      'attributes' => array(
        'title' => 'LandCoalition RSS feed',
      ),
      'identifier' => 'navigation_landcoalition-rss-feed:node/add/landcoalition-rss-feed',
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
  t('LandCoalition Events feed');
  t('LandCoalition RSS feed');

  return $menu_links;
}
