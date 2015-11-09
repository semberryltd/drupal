<?php
/**
 * @file
 * user_menu_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function user_menu_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-menu_mailing-lists:admin/mailchimp/user_lists.
  $menu_links['user-menu_mailing-lists:admin/mailchimp/user_lists'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'admin/mailchimp/user_lists',
    'router_path' => 'admin/mailchimp/user_lists',
    'link_title' => 'Mailing Lists',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_mailing-lists:admin/mailchimp/user_lists',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Mailing Lists');

  return $menu_links;
}
