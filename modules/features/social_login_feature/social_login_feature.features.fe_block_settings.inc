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

  $export['pcp-pcp_profile2_main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'pcp_profile2_main',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'pcp',
    'node_types' => array(),
    'pages' => 'user
users/*',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'landportal' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'landportal',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Complete Profile',
    'visibility' => 1,
  );

  return $export;
}
