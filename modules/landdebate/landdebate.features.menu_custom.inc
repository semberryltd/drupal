<?php
/**
 * @file
 * landdebate.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function landdebate_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: landdebate-menu.
  $menus['landdebate-menu'] = array(
    'menu_name' => 'landdebate-menu',
    'title' => 'Debate with others',
    'description' => 'Land debate serves to stimulate debate with others in the land community through sharing news and events, blog posts and online discussions.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Debate with others');
  t('Land debate serves to stimulate debate with others in the land community through sharing news and events, blog posts and online discussions.');


  return $menus;
}
