<?php
/**
 * @file
 * landlibrary_importers_usaid.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landlibrary_importers_usaid_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear rss_usaid_commentary_importer feeds'.
  $permissions['clear rss_usaid_commentary_importer feeds'] = array(
    'name' => 'clear rss_usaid_commentary_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear rss_usaid_issue_briefs_importer_ feeds'.
  $permissions['clear rss_usaid_issue_briefs_importer_ feeds'] = array(
    'name' => 'clear rss_usaid_issue_briefs_importer_ feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create rss_usaid_commentary_feed content'.
  $permissions['create rss_usaid_commentary_feed content'] = array(
    'name' => 'create rss_usaid_commentary_feed content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any rss_usaid_commentary_feed content'.
  $permissions['delete any rss_usaid_commentary_feed content'] = array(
    'name' => 'delete any rss_usaid_commentary_feed content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own rss_usaid_commentary_feed content'.
  $permissions['delete own rss_usaid_commentary_feed content'] = array(
    'name' => 'delete own rss_usaid_commentary_feed content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any rss_usaid_commentary_feed content'.
  $permissions['edit any rss_usaid_commentary_feed content'] = array(
    'name' => 'edit any rss_usaid_commentary_feed content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own rss_usaid_commentary_feed content'.
  $permissions['edit own rss_usaid_commentary_feed content'] = array(
    'name' => 'edit own rss_usaid_commentary_feed content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'import rss_usaid_commentary_importer feeds'.
  $permissions['import rss_usaid_commentary_importer feeds'] = array(
    'name' => 'import rss_usaid_commentary_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import rss_usaid_issue_briefs_importer_ feeds'.
  $permissions['import rss_usaid_issue_briefs_importer_ feeds'] = array(
    'name' => 'import rss_usaid_issue_briefs_importer_ feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper rss_usaid_commentary_importer'.
  $permissions['tamper rss_usaid_commentary_importer'] = array(
    'name' => 'tamper rss_usaid_commentary_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper rss_usaid_issue_briefs_importer_'.
  $permissions['tamper rss_usaid_issue_briefs_importer_'] = array(
    'name' => 'tamper rss_usaid_issue_briefs_importer_',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock rss_usaid_commentary_importer feeds'.
  $permissions['unlock rss_usaid_commentary_importer feeds'] = array(
    'name' => 'unlock rss_usaid_commentary_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock rss_usaid_issue_briefs_importer_ feeds'.
  $permissions['unlock rss_usaid_issue_briefs_importer_ feeds'] = array(
    'name' => 'unlock rss_usaid_issue_briefs_importer_ feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
