<?php
/**
 * @file
 * This provide menus for the landdebate section of the Landportal.
 *
 * The Landportal landdebate
 *
 * Original work by: WESO
 * Drupal refactoring: Jules <jules@ker.bz>
 */

function landdebate_menu_build(&$items) {
  foreach ($GLOBALS['landdebate_content_types'] as $i => $s) {
    $items['debate/' . $s] = array(
      'title'           => ucfirst(str_replace('_', ' ', $s)),
      'menu_name'       => $GLOBALS['landdebate_menu'],
      'access callback' => TRUE,
      'weight'          => $i,
      'page callback'   => 'landdebate_vcb',
      'page arguments'  => array(1),
    );

    // TODO
    $translatables['debate'][] = t($items['debate/' . $s]['title']);
  }
}

function landdebate_menu_admin(&$items) {
  // Admin section
  $items['admin/config/landdebate'] = array(
    'title'             => 'Landdebate',
    'description'       => 'Configure the landdebate',
    'postition'         => 'right',
    'weight'            => -4,
    'page callback'	=> 'system_admin_menu_block_page',
    'access arguments'  => array('administer site configuration'),
    'file'              => 'system.admin.inc',
    'file path'         => drupal_get_path('module', 'system'),
  );
  $items['admin/config/landdebate/settings'] = array(
    'title'             => 'Landdebate settings',
    'description'       => 'Base landdebate configuration',
    'page callback'	=> 'drupal_get_form',
    'page arguments'	=> array('landdebate_admin_settings'),
    'access arguments'  => array('administer site configuration'),
    'type'              => MENU_NORMAL_ITEM,
    'file'              => 'landdebate.admin.inc',
  );
  $items['admin/config/landdebate/social'] = array(
    'title'             => 'Social networks',
    'description'       => 'Landdebate social network configurations',
    'page callback'	=> 'drupal_get_form',
    'page arguments'	=> array('landdebate_admin_social'),
    'access arguments'  => array('administer site configuration'),
    'type'              => MENU_NORMAL_ITEM,
    'file'              => 'landdebate.admin.inc',
  );
}

/**
 * Simple callback to 'debate' conditionnal view (see: landdebate.view_default.inc , for more details)
 */
function landdebate_vcb($args) {
  return views_page('debate', 'page', $args);
}
