<?php
/**
 * @file
 * landlibrary_importers_agris.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landlibrary_importers_agris_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear agris_conference_preimporter feeds'.
  $permissions['clear agris_conference_preimporter feeds'] = array(
    'name' => 'clear agris_conference_preimporter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear agris_filter feeds'.
  $permissions['clear agris_filter feeds'] = array(
    'name' => 'clear agris_filter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear agris_organization_preimporter feeds'.
  $permissions['clear agris_organization_preimporter feeds'] = array(
    'name' => 'clear agris_organization_preimporter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear clone2_agris_file feeds'.
  $permissions['clear clone2_agris_file feeds'] = array(
    'name' => 'clear clone2_agris_file feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create agris_clone2 content'.
  $permissions['create agris_clone2 content'] = array(
    'name' => 'create agris_clone2 content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create agris_conference_ content'.
  $permissions['create agris_conference_ content'] = array(
    'name' => 'create agris_conference_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create agris_conference_feed content'.
  $permissions['create agris_conference_feed content'] = array(
    'name' => 'create agris_conference_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create agris_dump_file_upload_feed content'.
  $permissions['create agris_dump_file_upload_feed content'] = array(
    'name' => 'create agris_dump_file_upload_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create agris_file_upload_feed content'.
  $permissions['create agris_file_upload_feed content'] = array(
    'name' => 'create agris_file_upload_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create agris_publisher_file content'.
  $permissions['create agris_publisher_file content'] = array(
    'name' => 'create agris_publisher_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create agris_publisher_file_feeds content'.
  $permissions['create agris_publisher_file_feeds content'] = array(
    'name' => 'create agris_publisher_file_feeds content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any agris_clone2 content'.
  $permissions['delete any agris_clone2 content'] = array(
    'name' => 'delete any agris_clone2 content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any agris_conference_ content'.
  $permissions['delete any agris_conference_ content'] = array(
    'name' => 'delete any agris_conference_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any agris_conference_feed content'.
  $permissions['delete any agris_conference_feed content'] = array(
    'name' => 'delete any agris_conference_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any agris_dump_file_upload_feed content'.
  $permissions['delete any agris_dump_file_upload_feed content'] = array(
    'name' => 'delete any agris_dump_file_upload_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any agris_file_upload_feed content'.
  $permissions['delete any agris_file_upload_feed content'] = array(
    'name' => 'delete any agris_file_upload_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any agris_publisher_file content'.
  $permissions['delete any agris_publisher_file content'] = array(
    'name' => 'delete any agris_publisher_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any agris_publisher_file_feeds content'.
  $permissions['delete any agris_publisher_file_feeds content'] = array(
    'name' => 'delete any agris_publisher_file_feeds content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own agris_clone2 content'.
  $permissions['delete own agris_clone2 content'] = array(
    'name' => 'delete own agris_clone2 content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own agris_conference_ content'.
  $permissions['delete own agris_conference_ content'] = array(
    'name' => 'delete own agris_conference_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own agris_conference_feed content'.
  $permissions['delete own agris_conference_feed content'] = array(
    'name' => 'delete own agris_conference_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own agris_dump_file_upload_feed content'.
  $permissions['delete own agris_dump_file_upload_feed content'] = array(
    'name' => 'delete own agris_dump_file_upload_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own agris_file_upload_feed content'.
  $permissions['delete own agris_file_upload_feed content'] = array(
    'name' => 'delete own agris_file_upload_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own agris_publisher_file content'.
  $permissions['delete own agris_publisher_file content'] = array(
    'name' => 'delete own agris_publisher_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own agris_publisher_file_feeds content'.
  $permissions['delete own agris_publisher_file_feeds content'] = array(
    'name' => 'delete own agris_publisher_file_feeds content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any agris_clone2 content'.
  $permissions['edit any agris_clone2 content'] = array(
    'name' => 'edit any agris_clone2 content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any agris_conference_ content'.
  $permissions['edit any agris_conference_ content'] = array(
    'name' => 'edit any agris_conference_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any agris_conference_feed content'.
  $permissions['edit any agris_conference_feed content'] = array(
    'name' => 'edit any agris_conference_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any agris_dump_file_upload_feed content'.
  $permissions['edit any agris_dump_file_upload_feed content'] = array(
    'name' => 'edit any agris_dump_file_upload_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any agris_file_upload_feed content'.
  $permissions['edit any agris_file_upload_feed content'] = array(
    'name' => 'edit any agris_file_upload_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any agris_publisher_file content'.
  $permissions['edit any agris_publisher_file content'] = array(
    'name' => 'edit any agris_publisher_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any agris_publisher_file_feeds content'.
  $permissions['edit any agris_publisher_file_feeds content'] = array(
    'name' => 'edit any agris_publisher_file_feeds content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own agris_clone2 content'.
  $permissions['edit own agris_clone2 content'] = array(
    'name' => 'edit own agris_clone2 content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own agris_conference_ content'.
  $permissions['edit own agris_conference_ content'] = array(
    'name' => 'edit own agris_conference_ content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own agris_conference_feed content'.
  $permissions['edit own agris_conference_feed content'] = array(
    'name' => 'edit own agris_conference_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own agris_dump_file_upload_feed content'.
  $permissions['edit own agris_dump_file_upload_feed content'] = array(
    'name' => 'edit own agris_dump_file_upload_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own agris_file_upload_feed content'.
  $permissions['edit own agris_file_upload_feed content'] = array(
    'name' => 'edit own agris_file_upload_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own agris_publisher_file content'.
  $permissions['edit own agris_publisher_file content'] = array(
    'name' => 'edit own agris_publisher_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own agris_publisher_file_feeds content'.
  $permissions['edit own agris_publisher_file_feeds content'] = array(
    'name' => 'edit own agris_publisher_file_feeds content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'import agris_conference_preimporter feeds'.
  $permissions['import agris_conference_preimporter feeds'] = array(
    'name' => 'import agris_conference_preimporter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import agris_filter feeds'.
  $permissions['import agris_filter feeds'] = array(
    'name' => 'import agris_filter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import agris_organization_preimporter feeds'.
  $permissions['import agris_organization_preimporter feeds'] = array(
    'name' => 'import agris_organization_preimporter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import clone2_agris_file feeds'.
  $permissions['import clone2_agris_file feeds'] = array(
    'name' => 'import clone2_agris_file feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper agris_conference_preimporter'.
  $permissions['tamper agris_conference_preimporter'] = array(
    'name' => 'tamper agris_conference_preimporter',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper agris_filter'.
  $permissions['tamper agris_filter'] = array(
    'name' => 'tamper agris_filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper agris_organization_preimporter'.
  $permissions['tamper agris_organization_preimporter'] = array(
    'name' => 'tamper agris_organization_preimporter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper clone2_agris_file'.
  $permissions['tamper clone2_agris_file'] = array(
    'name' => 'tamper clone2_agris_file',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock agris_conference_preimporter feeds'.
  $permissions['unlock agris_conference_preimporter feeds'] = array(
    'name' => 'unlock agris_conference_preimporter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock agris_filter feeds'.
  $permissions['unlock agris_filter feeds'] = array(
    'name' => 'unlock agris_filter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock agris_organization_preimporter feeds'.
  $permissions['unlock agris_organization_preimporter feeds'] = array(
    'name' => 'unlock agris_organization_preimporter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock clone2_agris_file feeds'.
  $permissions['unlock clone2_agris_file feeds'] = array(
    'name' => 'unlock clone2_agris_file feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
