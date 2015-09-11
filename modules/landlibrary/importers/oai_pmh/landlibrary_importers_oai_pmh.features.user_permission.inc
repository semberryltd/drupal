<?php
/**
 * @file
 * landlibrary_importers_oai_pmh.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landlibrary_importers_oai_pmh_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create oai_pmh_importer content'.
  $permissions['create oai_pmh_importer content'] = array(
    'name' => 'create oai_pmh_importer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any oai_pmh_importer content'.
  $permissions['delete any oai_pmh_importer content'] = array(
    'name' => 'delete any oai_pmh_importer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own oai_pmh_importer content'.
  $permissions['delete own oai_pmh_importer content'] = array(
    'name' => 'delete own oai_pmh_importer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any oai_pmh_importer content'.
  $permissions['edit any oai_pmh_importer content'] = array(
    'name' => 'edit any oai_pmh_importer content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own oai_pmh_importer content'.
  $permissions['edit own oai_pmh_importer content'] = array(
    'name' => 'edit own oai_pmh_importer content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
