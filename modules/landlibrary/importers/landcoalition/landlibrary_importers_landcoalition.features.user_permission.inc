<?php
/**
 * @file
 * landlibrary_importers_landcoalition.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landlibrary_importers_landcoalition_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear landcoalition_events_rss_import feeds'.
  $permissions['clear landcoalition_events_rss_import feeds'] = array(
    'name' => 'clear landcoalition_events_rss_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear landcoalition_rss_import feeds'.
  $permissions['clear landcoalition_rss_import feeds'] = array(
    'name' => 'clear landcoalition_rss_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create landcoalition_events_feed content'.
  $permissions['create landcoalition_events_feed content'] = array(
    'name' => 'create landcoalition_events_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create landcoalition_rss_feed content'.
  $permissions['create landcoalition_rss_feed content'] = array(
    'name' => 'create landcoalition_rss_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any landcoalition_events_feed content'.
  $permissions['delete any landcoalition_events_feed content'] = array(
    'name' => 'delete any landcoalition_events_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any landcoalition_rss_feed content'.
  $permissions['delete any landcoalition_rss_feed content'] = array(
    'name' => 'delete any landcoalition_rss_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own landcoalition_events_feed content'.
  $permissions['delete own landcoalition_events_feed content'] = array(
    'name' => 'delete own landcoalition_events_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own landcoalition_rss_feed content'.
  $permissions['delete own landcoalition_rss_feed content'] = array(
    'name' => 'delete own landcoalition_rss_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any landcoalition_events_feed content'.
  $permissions['edit any landcoalition_events_feed content'] = array(
    'name' => 'edit any landcoalition_events_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any landcoalition_rss_feed content'.
  $permissions['edit any landcoalition_rss_feed content'] = array(
    'name' => 'edit any landcoalition_rss_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own landcoalition_events_feed content'.
  $permissions['edit own landcoalition_events_feed content'] = array(
    'name' => 'edit own landcoalition_events_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own landcoalition_rss_feed content'.
  $permissions['edit own landcoalition_rss_feed content'] = array(
    'name' => 'edit own landcoalition_rss_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'import landcoalition_events_rss_import feeds'.
  $permissions['import landcoalition_events_rss_import feeds'] = array(
    'name' => 'import landcoalition_events_rss_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import landcoalition_rss_import feeds'.
  $permissions['import landcoalition_rss_import feeds'] = array(
    'name' => 'import landcoalition_rss_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper landcoalition_events_rss_import'.
  $permissions['tamper landcoalition_events_rss_import'] = array(
    'name' => 'tamper landcoalition_events_rss_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper landcoalition_rss_import'.
  $permissions['tamper landcoalition_rss_import'] = array(
    'name' => 'tamper landcoalition_rss_import',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock landcoalition_events_rss_import feeds'.
  $permissions['unlock landcoalition_events_rss_import feeds'] = array(
    'name' => 'unlock landcoalition_events_rss_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock landcoalition_rss_import feeds'.
  $permissions['unlock landcoalition_rss_import feeds'] = array(
    'name' => 'unlock landcoalition_rss_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
