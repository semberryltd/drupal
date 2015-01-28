<?php
/**
 * @file
 * landportal_extra.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function landportal_extra_user_default_roles() {
  $roles = array();

  // Exported role: landportal admin.
  $roles['landportal admin'] = array(
    'name' => 'landportal admin',
    'weight' => 4,
    'machine_name' => 'landportal_admin',
  );

  // Exported role: landportal editor.
  $roles['landportal editor'] = array(
    'name' => 'landportal editor',
    'weight' => 3,
    'machine_name' => 'landportal_editor',
  );

  return $roles;
}
