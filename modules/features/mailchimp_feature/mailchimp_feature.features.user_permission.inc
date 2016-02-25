<?php
/**
 * @file
 * mailchimp_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mailchimp_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access resource mailchimp_campaign'.
  $permissions['access resource mailchimp_campaign'] = array(
    'name' => 'access resource mailchimp_campaign',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource mailchimp_list'.
  $permissions['access resource mailchimp_list'] = array(
    'name' => 'access resource mailchimp_list',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'administer mailchimp'.
  $permissions['administer mailchimp'] = array(
    'name' => 'administer mailchimp',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'mailchimp',
  );

  // Exported permission: 'administer mailchimp campaigns'.
  $permissions['administer mailchimp campaigns'] = array(
    'name' => 'administer mailchimp campaigns',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'mailchimp_campaign',
  );

  // Exported permission: 'administer mailchimp user lists'.
  $permissions['administer mailchimp user lists'] = array(
    'name' => 'administer mailchimp user lists',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'mailchimp_user_list',
  );

  // Exported permission: 'use text format mailchimp_campaign'.
  $permissions['use text format mailchimp_campaign'] = array(
    'name' => 'use text format mailchimp_campaign',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
