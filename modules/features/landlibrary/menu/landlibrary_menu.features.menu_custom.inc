<?php
/**
 * @file
 * landlibrary_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function landlibrary_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-landlibrary-menu.
  $menus['menu-landlibrary-menu'] = array(
    'menu_name' => 'menu-landlibrary-menu',
    'title' => 'Consult the Library',
    'description' => 'The Land Library is the authoritative virtual repository of land-related information, including peer-reviewed publications, policies, maps, and multimedia content.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Consult the Library');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The Land Library is the authoritative virtual repository of land-related information, including peer-reviewed publications, policies, maps, and multimedia content.');


  return $menus;
}
