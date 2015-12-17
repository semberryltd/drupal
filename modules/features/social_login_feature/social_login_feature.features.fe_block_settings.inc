<?php
/**
 * @file
 * social_login_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function social_login_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['hybridauth-hybridauth'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 'hybridauth',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'hybridauth',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'landportal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'landportal',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => -1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
