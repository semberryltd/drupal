<?php
/**
 * @file
 * Landbook menu
 *
 * The Landportal landbook
 *
 * Original work by: WESO
 * Drupal refactoring: Jules <jules@ker.bz>
 */

/*
 ** Landbook subsections
 */
function landbook_menu_build(&$items) {
  $sections = array('catalog', 'countries', 'indicators', 'regions', 'reuse', 'sources', 'widgets');

  foreach ($sections as $i=>$s) {
    $items['book/' . $s] = array(
      'title'           => ucfirst($s),
      'menu_name'       => $GLOBALS['landbook_menu'],
      'access callback'	=> TRUE,
      //'type'            => MENU_NORMAL_ITEM,
      'page callback'   => 'landbook_' . $s,
      //'page arguments'  => array(),
      'file'            => $s . '.inc',
      'file path'       => drupal_get_path('module', 'landbook').'/modules',
    );
    $translatables['book'][] = t($items['book/' . $s]['title']);

    $items['book/' . $s . '/%'] = array(
      'title'           => preg_replace('/s$/', '', str_replace('ies', 'y', $s)).' details',
      'access callback'	=> TRUE,
      'page callback'   => 'landbook_' . $s,
      'page arguments'  => array(2),
      'file'            => $s . '.inc',
      'file path'       => drupal_get_path('module', 'landbook').'/modules',
    );

  }
}


function landbook_menu_admin(&$items) {
  // Admin section
  $items['admin/config/landbook'] = array(
    'title'             => 'Landbook',
    'description'       => 'Configure the landbook',
    'postition'         => 'right',
    'weight'            => -4,
    'page callback'	=> 'system_admin_menu_block_page',
    'access arguments'  => array('administer site configuration'),
    'file'              => 'system.admin.inc',
    'file path'         => drupal_get_path('module', 'system'),
  );
  $items['admin/config/landbook/settings'] = array(
    'title'             => 'Landbook settings',
    'description'       => 'Base landbook configuration',
    'page callback'	=> 'drupal_get_form',
    'page arguments'	=> array('landbook_admin_settings'),
    'access arguments'  => array('administer site configuration'),
    'type'              => MENU_NORMAL_ITEM,
    'file'              => 'landbook.admin.inc',
    'file path'         => drupal_get_path('module', 'landbook').'/includes'
  );

}

/* function landbook_page_callback($name='default') { */
/*   drupal_set_message("Landbook ".$name." called"); */
/*   if ($params) { dpm($params); } */
/*   return theme('landbook', '-HELO pcallback-'); */
/* } */
