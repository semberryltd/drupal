<?php
/**
 * @file
 * user_menu_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function user_menu_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user-menu-context';
  $context->description = 'Defines the top right user menu';
  $context->tag = 'menus';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~user/login' => '~user/login',
        '~user/password' => '~user/password',
        '~user/register' => '~user/register',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nice_menus-1' => array(
          'module' => 'nice_menus',
          'delta' => '1',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Defines the top right user menu');
  t('menus');
  $export['user-menu-context'] = $context;

  return $export;
}
