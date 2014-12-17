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
  foreach ($sections as $s) {
    $items['book/' . $s] = array(
      'title'           => ucfirst($s),
      'menu_name'       => $GLOBALS['landbook_menu'],
      'access callback'	=> TRUE,
      'type'            => MENU_NORMAL_ITEM,
      'page callback'   => 'landbook_' . $s,
      'page arguments'  => array(),
      'file'            => $s . '.inc',
      'file path'       => drupal_get_path('module', 'landbook').'/modules',
    );
    $items['book/' . $s . '/%'] = array(
      'title'           => $s.' details',
      'access callback'	=> TRUE,
      'page callback'   => 'landbook_' . $s,
      'page arguments'  => array(1),
      'file'            => $s . '.inc',
      'file path'       => drupal_get_path('module', 'landbook').'/modules',
    );
  }
}

/* function landbook_page_callback($name='default') { */
/*   drupal_set_message("Landbook ".$name." called"); */
/*   if ($params) { dpm($params); } */
/*   return theme('landbook', '-HELO pcallback-'); */
/* } */
