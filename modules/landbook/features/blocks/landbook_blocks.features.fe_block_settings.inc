<?php
/**
 * @file
 * landbook_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function landbook_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['landbook-country_book'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'country_book',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'landbook',
    'node_types' => array(
      0 => 'landbook_country',
    ),
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
        'region' => 'content',
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
    'title' => '',
    'visibility' => 0,
  );

  $export['landbook-country_indicators_table'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'country_indicators_table',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'landbook',
    'node_types' => array(
      0 => 'landbook_country',
    ),
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
        'region' => 'content',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
