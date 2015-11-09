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
  $context->name = 'editor-menu-context';
  $context->description = 'region assignment for user and editor menu blocks';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'access API' => 'access API',
        'administrator' => 'administrator',
        'landportal admin' => 'landportal admin',
        'landportal editor' => 'landportal editor',
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
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'masquerade-masquerade' => array(
          'module' => 'masquerade',
          'delta' => 'masquerade',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('region assignment for user and editor menu blocks');
  $export['editor-menu-context'] = $context;

  return $export;
}
