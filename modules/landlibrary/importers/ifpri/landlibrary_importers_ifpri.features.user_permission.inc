<?php
/**
 * @file
 * landlibrary_importers_ifpri.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landlibrary_importers_ifpri_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear ifpri_batch_file_importer feeds'.
  $permissions['clear ifpri_batch_file_importer feeds'] = array(
    'name' => 'clear ifpri_batch_file_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear ifpri_creator_preimporter feeds'.
  $permissions['clear ifpri_creator_preimporter feeds'] = array(
    'name' => 'clear ifpri_creator_preimporter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create ifpri_batch_file content'.
  $permissions['create ifpri_batch_file content'] = array(
    'name' => 'create ifpri_batch_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create ifpri_content_ingest content'.
  $permissions['create ifpri_content_ingest content'] = array(
    'name' => 'create ifpri_content_ingest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create ifpri_creator_feed content'.
  $permissions['create ifpri_creator_feed content'] = array(
    'name' => 'create ifpri_creator_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create ifpri_file_upload content'.
  $permissions['create ifpri_file_upload content'] = array(
    'name' => 'create ifpri_file_upload content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'create ifpri_ingestion content'.
  $permissions['create ifpri_ingestion content'] = array(
    'name' => 'create ifpri_ingestion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ifpri_batch_file content'.
  $permissions['delete any ifpri_batch_file content'] = array(
    'name' => 'delete any ifpri_batch_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ifpri_content_ingest content'.
  $permissions['delete any ifpri_content_ingest content'] = array(
    'name' => 'delete any ifpri_content_ingest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ifpri_creator_feed content'.
  $permissions['delete any ifpri_creator_feed content'] = array(
    'name' => 'delete any ifpri_creator_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ifpri_file_upload content'.
  $permissions['delete any ifpri_file_upload content'] = array(
    'name' => 'delete any ifpri_file_upload content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any ifpri_ingestion content'.
  $permissions['delete any ifpri_ingestion content'] = array(
    'name' => 'delete any ifpri_ingestion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ifpri_batch_file content'.
  $permissions['delete own ifpri_batch_file content'] = array(
    'name' => 'delete own ifpri_batch_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ifpri_content_ingest content'.
  $permissions['delete own ifpri_content_ingest content'] = array(
    'name' => 'delete own ifpri_content_ingest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ifpri_creator_feed content'.
  $permissions['delete own ifpri_creator_feed content'] = array(
    'name' => 'delete own ifpri_creator_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ifpri_file_upload content'.
  $permissions['delete own ifpri_file_upload content'] = array(
    'name' => 'delete own ifpri_file_upload content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own ifpri_ingestion content'.
  $permissions['delete own ifpri_ingestion content'] = array(
    'name' => 'delete own ifpri_ingestion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ifpri_batch_file content'.
  $permissions['edit any ifpri_batch_file content'] = array(
    'name' => 'edit any ifpri_batch_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ifpri_content_ingest content'.
  $permissions['edit any ifpri_content_ingest content'] = array(
    'name' => 'edit any ifpri_content_ingest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ifpri_creator_feed content'.
  $permissions['edit any ifpri_creator_feed content'] = array(
    'name' => 'edit any ifpri_creator_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ifpri_file_upload content'.
  $permissions['edit any ifpri_file_upload content'] = array(
    'name' => 'edit any ifpri_file_upload content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any ifpri_ingestion content'.
  $permissions['edit any ifpri_ingestion content'] = array(
    'name' => 'edit any ifpri_ingestion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ifpri_batch_file content'.
  $permissions['edit own ifpri_batch_file content'] = array(
    'name' => 'edit own ifpri_batch_file content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ifpri_content_ingest content'.
  $permissions['edit own ifpri_content_ingest content'] = array(
    'name' => 'edit own ifpri_content_ingest content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ifpri_creator_feed content'.
  $permissions['edit own ifpri_creator_feed content'] = array(
    'name' => 'edit own ifpri_creator_feed content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ifpri_file_upload content'.
  $permissions['edit own ifpri_file_upload content'] = array(
    'name' => 'edit own ifpri_file_upload content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own ifpri_ingestion content'.
  $permissions['edit own ifpri_ingestion content'] = array(
    'name' => 'edit own ifpri_ingestion content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'import ifpri_batch_file_importer feeds'.
  $permissions['import ifpri_batch_file_importer feeds'] = array(
    'name' => 'import ifpri_batch_file_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import ifpri_creator_preimporter feeds'.
  $permissions['import ifpri_creator_preimporter feeds'] = array(
    'name' => 'import ifpri_creator_preimporter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper ifpri_batch_file_importer'.
  $permissions['tamper ifpri_batch_file_importer'] = array(
    'name' => 'tamper ifpri_batch_file_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper ifpri_creator_preimporter'.
  $permissions['tamper ifpri_creator_preimporter'] = array(
    'name' => 'tamper ifpri_creator_preimporter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock ifpri_batch_file_importer feeds'.
  $permissions['unlock ifpri_batch_file_importer feeds'] = array(
    'name' => 'unlock ifpri_batch_file_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock ifpri_creator_preimporter feeds'.
  $permissions['unlock ifpri_creator_preimporter feeds'] = array(
    'name' => 'unlock ifpri_creator_preimporter feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
