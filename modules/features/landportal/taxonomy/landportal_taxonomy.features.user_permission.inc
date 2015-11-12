<?php
/**
 * @file
 * landportal_taxonomy.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function landportal_taxonomy_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access resource taxonomy_term'.
  $permissions['access resource taxonomy_term'] = array(
    'name' => 'access resource taxonomy_term',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'access resource taxonomy_vocabulary'.
  $permissions['access resource taxonomy_vocabulary'] = array(
    'name' => 'access resource taxonomy_vocabulary',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'restws',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in continents'.
  $permissions['delete terms in continents'] = array(
    'name' => 'delete terms in continents',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in countries'.
  $permissions['delete terms in countries'] = array(
    'name' => 'delete terms in countries',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in debate_status'.
  $permissions['delete terms in debate_status'] = array(
    'name' => 'delete terms in debate_status',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in format'.
  $permissions['delete terms in format'] = array(
    'name' => 'delete terms in format',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in interests'.
  $permissions['delete terms in interests'] = array(
    'name' => 'delete terms in interests',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in keywords'.
  $permissions['delete terms in keywords'] = array(
    'name' => 'delete terms in keywords',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in landlibrary_resource_type'.
  $permissions['delete terms in landlibrary_resource_type'] = array(
    'name' => 'delete terms in landlibrary_resource_type',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in landportal_topics'.
  $permissions['delete terms in landportal_topics'] = array(
    'name' => 'delete terms in landportal_topics',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in languages'.
  $permissions['delete terms in languages'] = array(
    'name' => 'delete terms in languages',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in licences'.
  $permissions['delete terms in licences'] = array(
    'name' => 'delete terms in licences',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organization_relation'.
  $permissions['delete terms in organization_relation'] = array(
    'name' => 'delete terms in organization_relation',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in organization_types'.
  $permissions['delete terms in organization_types'] = array(
    'name' => 'delete terms in organization_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in regions'.
  $permissions['delete terms in regions'] = array(
    'name' => 'delete terms in regions',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in terms_of_use'.
  $permissions['delete terms in terms_of_use'] = array(
    'name' => 'delete terms in terms_of_use',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in continents'.
  $permissions['edit terms in continents'] = array(
    'name' => 'edit terms in continents',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in countries'.
  $permissions['edit terms in countries'] = array(
    'name' => 'edit terms in countries',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in debate_status'.
  $permissions['edit terms in debate_status'] = array(
    'name' => 'edit terms in debate_status',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in format'.
  $permissions['edit terms in format'] = array(
    'name' => 'edit terms in format',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in interests'.
  $permissions['edit terms in interests'] = array(
    'name' => 'edit terms in interests',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in keywords'.
  $permissions['edit terms in keywords'] = array(
    'name' => 'edit terms in keywords',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in landlibrary_resource_type'.
  $permissions['edit terms in landlibrary_resource_type'] = array(
    'name' => 'edit terms in landlibrary_resource_type',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in landportal_topics'.
  $permissions['edit terms in landportal_topics'] = array(
    'name' => 'edit terms in landportal_topics',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in languages'.
  $permissions['edit terms in languages'] = array(
    'name' => 'edit terms in languages',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in licences'.
  $permissions['edit terms in licences'] = array(
    'name' => 'edit terms in licences',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organization_relation'.
  $permissions['edit terms in organization_relation'] = array(
    'name' => 'edit terms in organization_relation',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in organization_types'.
  $permissions['edit terms in organization_types'] = array(
    'name' => 'edit terms in organization_types',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in regions'.
  $permissions['edit terms in regions'] = array(
    'name' => 'edit terms in regions',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in terms_of_use'.
  $permissions['edit terms in terms_of_use'] = array(
    'name' => 'edit terms in terms_of_use',
    'roles' => array(
      'administrator' => 'administrator',
      'landportal admin' => 'landportal admin',
      'landportal editor' => 'landportal editor',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
