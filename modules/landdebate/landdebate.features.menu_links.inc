<?php
/**
 * @file
 * landdebate.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function landdebate_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: landdebate-menu_blog:debate/blog
  $menu_links['landdebate-menu_blog:debate/blog'] = array(
    'menu_name' => 'landdebate-menu',
    'link_path' => 'debate/blog',
    'router_path' => 'debate/blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'landdebate-menu_blog:debate/blog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Blog');

  return $menu_links;
}
