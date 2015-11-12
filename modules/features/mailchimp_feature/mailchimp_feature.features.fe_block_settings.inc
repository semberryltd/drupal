<?php
/**
 * @file
 * mailchimp_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function mailchimp_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['mailchimp_lists-legend_bulletin'] = array(
    'cache' => 2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'legend_bulletin',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'mailchimp_lists',
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
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}