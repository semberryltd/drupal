<?php
/**
 * @file
 * landportal_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function landportal_permissions_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 7,
    'machine_name' => '',
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 3,
    'machine_name' => '',
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 4,
    'machine_name' => '',
  );

  // Exported role: landportal admin.
  $roles['landportal admin'] = array(
    'name' => 'landportal admin',
    'weight' => 6,
    'machine_name' => 'landportal_admin',
  );

  // Exported role: landportal editor.
  $roles['landportal editor'] = array(
    'name' => 'landportal editor',
    'weight' => 5,
    'machine_name' => 'landportal_editor',
  );

  return $roles;
}
