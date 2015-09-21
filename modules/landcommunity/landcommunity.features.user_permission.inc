<?php
/**
 * @file
 * landcommunity.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landcommunity_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create organization content'.
  $permissions['create organization content'] = array(
    'name' => 'create organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any organization content'.
  $permissions['delete any organization content'] = array(
    'name' => 'delete any organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own organization content'.
  $permissions['delete own organization content'] = array(
    'name' => 'delete own organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in organization_types'.
  $permissions['delete terms in organization_types'] = array(
    'name' => 'delete terms in organization_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any organization content'.
  $permissions['edit any organization content'] = array(
    'name' => 'edit any organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own organization content'.
  $permissions['edit own organization content'] = array(
    'name' => 'edit own organization content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in organization_types'.
  $permissions['edit terms in organization_types'] = array(
    'name' => 'edit terms in organization_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
