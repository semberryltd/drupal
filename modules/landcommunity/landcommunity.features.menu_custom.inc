<?php
/**
 * @file
 * landcommunity.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function landcommunity_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: user-signin.
  $menus['user-signin'] = array(
    'menu_name' => 'user-signin',
    'title' => 'Join us',
    'description' => 'Welcome to the Land Portal! Fill out this form to create an account. Once you submit, we will receive a notification to approve your account.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Join us');
  t('Welcome to the Land Portal! Fill out this form to create an account. Once you submit, we will receive a notification to approve your account.');

  return $menus;
}
