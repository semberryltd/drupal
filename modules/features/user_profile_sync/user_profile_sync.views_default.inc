<?php
/**
 * @file
 * user_profile_sync.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function user_profile_sync_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'create_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Create Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Create Profile';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['required'] = TRUE;
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['relationship'] = 'profile';
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Field: Bulk operations: Profile */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'profile';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
  );
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Profile: Profile ID */
  $handler->display->display_options['filters']['pid']['id'] = 'pid';
  $handler->display->display_options['filters']['pid']['table'] = 'profile';
  $handler->display->display_options['filters']['pid']['field'] = 'pid';
  $handler->display->display_options['filters']['pid']['relationship'] = 'profile';
  $handler->display->display_options['filters']['pid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['pid']['expose']['operator_id'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['label'] = 'Profile ID';
  $handler->display->display_options['filters']['pid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['pid']['expose']['operator'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['identifier'] = 'pid';
  $handler->display->display_options['filters']['pid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Field: Description (field_description) */
  $handler->display->display_options['filters']['field_description_value']['id'] = 'field_description_value';
  $handler->display->display_options['filters']['field_description_value']['table'] = 'field_data_field_description';
  $handler->display->display_options['filters']['field_description_value']['field'] = 'field_description_value';
  $handler->display->display_options['filters']['field_description_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_description_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_description_value']['expose']['operator_id'] = 'field_description_value_op';
  $handler->display->display_options['filters']['field_description_value']['expose']['label'] = 'Profile Description (field_description)';
  $handler->display->display_options['filters']['field_description_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_description_value']['expose']['operator'] = 'field_description_value_op';
  $handler->display->display_options['filters']['field_description_value']['expose']['identifier'] = 'field_description_value';
  $handler->display->display_options['filters']['field_description_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Field: First name (field_firstname) */
  $handler->display->display_options['filters']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['filters']['field_firstname_value']['field'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_firstname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_firstname_value']['expose']['operator_id'] = 'field_firstname_value_op';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['label'] = 'Profile First name (field_firstname)';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_firstname_value']['expose']['operator'] = 'field_firstname_value_op';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['identifier'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Field: Geographical focus (field_geographical_focus) */
  $handler->display->display_options['filters']['field_geographical_focus_tid']['id'] = 'field_geographical_focus_tid';
  $handler->display->display_options['filters']['field_geographical_focus_tid']['table'] = 'field_data_field_geographical_focus';
  $handler->display->display_options['filters']['field_geographical_focus_tid']['field'] = 'field_geographical_focus_tid';
  $handler->display->display_options['filters']['field_geographical_focus_tid']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_geographical_focus_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator_id'] = 'field_geographical_focus_tid_op';
  $handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['label'] = 'Profile Geographical focus (field_geographical_focus)';
  $handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['operator'] = 'field_geographical_focus_tid_op';
  $handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['identifier'] = 'field_geographical_focus_tid';
  $handler->display->display_options['filters']['field_geographical_focus_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  $handler->display->display_options['filters']['field_geographical_focus_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_geographical_focus_tid']['vocabulary'] = 'regions';
  $handler->display->display_options['filters']['field_geographical_focus_tid']['hierarchy'] = 1;
  /* Filter criterion: Field: Interests (field_interests) */
  $handler->display->display_options['filters']['field_interests_tid']['id'] = 'field_interests_tid';
  $handler->display->display_options['filters']['field_interests_tid']['table'] = 'field_data_field_interests';
  $handler->display->display_options['filters']['field_interests_tid']['field'] = 'field_interests_tid';
  $handler->display->display_options['filters']['field_interests_tid']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_interests_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_interests_tid']['expose']['operator_id'] = 'field_interests_tid_op';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['label'] = 'Profile Interests (field_interests)';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_interests_tid']['expose']['operator'] = 'field_interests_tid_op';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['identifier'] = 'field_interests_tid';
  $handler->display->display_options['filters']['field_interests_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  $handler->display->display_options['filters']['field_interests_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_interests_tid']['vocabulary'] = 'interests';
  $handler->display->display_options['filters']['field_interests_tid']['hierarchy'] = 1;
  /* Filter criterion: Field: Last name (field_lastname) */
  $handler->display->display_options['filters']['field_lastname_value']['id'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['filters']['field_lastname_value']['field'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['relationship'] = 'profile';
  $handler->display->display_options['filters']['field_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator_id'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['label'] = 'Profile Last name (field_lastname)';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_lastname_value']['expose']['operator'] = 'field_lastname_value_op';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['identifier'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Field: Description (field_description) */
  $handler->display->display_options['filters']['field_description_value_1']['id'] = 'field_description_value_1';
  $handler->display->display_options['filters']['field_description_value_1']['table'] = 'field_data_field_description';
  $handler->display->display_options['filters']['field_description_value_1']['field'] = 'field_description_value';
  $handler->display->display_options['filters']['field_description_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_description_value_1']['expose']['operator_id'] = 'field_description_value_1_op';
  $handler->display->display_options['filters']['field_description_value_1']['expose']['label'] = 'Account Description (field_description)';
  $handler->display->display_options['filters']['field_description_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_description_value_1']['expose']['operator'] = 'field_description_value_1_op';
  $handler->display->display_options['filters']['field_description_value_1']['expose']['identifier'] = 'field_description_value_1';
  $handler->display->display_options['filters']['field_description_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Field: First name (field_firstname) */
  $handler->display->display_options['filters']['field_firstname_value_1']['id'] = 'field_firstname_value_1';
  $handler->display->display_options['filters']['field_firstname_value_1']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['filters']['field_firstname_value_1']['field'] = 'field_firstname_value';
  $handler->display->display_options['filters']['field_firstname_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_firstname_value_1']['expose']['operator_id'] = 'field_firstname_value_1_op';
  $handler->display->display_options['filters']['field_firstname_value_1']['expose']['label'] = 'Account Firstname (field_firstname)';
  $handler->display->display_options['filters']['field_firstname_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_firstname_value_1']['expose']['operator'] = 'field_firstname_value_1_op';
  $handler->display->display_options['filters']['field_firstname_value_1']['expose']['identifier'] = 'field_firstname_value_1';
  $handler->display->display_options['filters']['field_firstname_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  /* Filter criterion: Field: Geographical focus (field_geographical_focus) */
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['id'] = 'field_geographical_focus_tid_1';
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['table'] = 'field_data_field_geographical_focus';
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['field'] = 'field_geographical_focus_tid';
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['expose']['operator_id'] = 'field_geographical_focus_tid_1_op';
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['expose']['label'] = 'Account Geographical focus (field_geographical_focus)';
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['expose']['operator'] = 'field_geographical_focus_tid_1_op';
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['expose']['identifier'] = 'field_geographical_focus_tid_1';
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['vocabulary'] = 'regions';
  $handler->display->display_options['filters']['field_geographical_focus_tid_1']['hierarchy'] = 1;
  /* Filter criterion: Field: Interests (field_interests) */
  $handler->display->display_options['filters']['field_interests_tid_1']['id'] = 'field_interests_tid_1';
  $handler->display->display_options['filters']['field_interests_tid_1']['table'] = 'field_data_field_interests';
  $handler->display->display_options['filters']['field_interests_tid_1']['field'] = 'field_interests_tid';
  $handler->display->display_options['filters']['field_interests_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_interests_tid_1']['expose']['operator_id'] = 'field_interests_tid_1_op';
  $handler->display->display_options['filters']['field_interests_tid_1']['expose']['label'] = 'Account Interests (field_interests)';
  $handler->display->display_options['filters']['field_interests_tid_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_interests_tid_1']['expose']['operator'] = 'field_interests_tid_1_op';
  $handler->display->display_options['filters']['field_interests_tid_1']['expose']['identifier'] = 'field_interests_tid_1';
  $handler->display->display_options['filters']['field_interests_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );
  $handler->display->display_options['filters']['field_interests_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_interests_tid_1']['vocabulary'] = 'interests';
  $handler->display->display_options['filters']['field_interests_tid_1']['hierarchy'] = 1;
  /* Filter criterion: Field: Last name (field_lastname) */
  $handler->display->display_options['filters']['field_lastname_value_1']['id'] = 'field_lastname_value_1';
  $handler->display->display_options['filters']['field_lastname_value_1']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['filters']['field_lastname_value_1']['field'] = 'field_lastname_value';
  $handler->display->display_options['filters']['field_lastname_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lastname_value_1']['expose']['operator_id'] = 'field_lastname_value_1_op';
  $handler->display->display_options['filters']['field_lastname_value_1']['expose']['label'] = 'Account Last name (field_lastname)';
  $handler->display->display_options['filters']['field_lastname_value_1']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_lastname_value_1']['expose']['operator'] = 'field_lastname_value_1_op';
  $handler->display->display_options['filters']['field_lastname_value_1']['expose']['identifier'] = 'field_lastname_value_1';
  $handler->display->display_options['filters']['field_lastname_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/structure/create-profile';
  $translatables['create_profile'] = array(
    t('Master'),
    t('Create Profile'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Profile'),
    t('Name'),
    t('Profile ID'),
    t('.'),
    t('- Choose an operation -'),
    t('Profile Description (field_description)'),
    t('Profile First name (field_firstname)'),
    t('Profile Geographical focus (field_geographical_focus)'),
    t('Profile Interests (field_interests)'),
    t('Profile Last name (field_lastname)'),
    t('Account Description (field_description)'),
    t('Account Firstname (field_firstname)'),
    t('Account Geographical focus (field_geographical_focus)'),
    t('Account Interests (field_interests)'),
    t('Account Last name (field_lastname)'),
    t('Page'),
  );
  $export['create_profile'] = $view;

  $view = new view();
  $view->name = 'user_profile';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Accounts with Empty Profile';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Accounts With Empty Profile';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    30037204 => '30037204',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'main' => 'main',
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
  );
  /* Field: Profile: Profile ID */
  $handler->display->display_options['fields']['pid']['id'] = 'pid';
  $handler->display->display_options['fields']['pid']['table'] = 'profile';
  $handler->display->display_options['fields']['pid']['field'] = 'pid';
  $handler->display->display_options['fields']['pid']['relationship'] = 'profile';
  $handler->display->display_options['fields']['pid']['separator'] = '';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Profile: Profile ID */
  $handler->display->display_options['filters']['pid']['id'] = 'pid';
  $handler->display->display_options['filters']['pid']['table'] = 'profile';
  $handler->display->display_options['filters']['pid']['field'] = 'pid';
  $handler->display->display_options['filters']['pid']['relationship'] = 'profile';
  $handler->display->display_options['filters']['pid']['operator'] = 'empty';
  $handler->display->display_options['filters']['pid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['pid']['expose']['operator_id'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['label'] = 'Profile ID';
  $handler->display->display_options['filters']['pid']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['pid']['expose']['operator'] = 'pid_op';
  $handler->display->display_options['filters']['pid']['expose']['identifier'] = 'pid';
  $handler->display->display_options['filters']['pid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    111903911 => 0,
    111903912 => 0,
    25521343 => 0,
    111903910 => 0,
    30037204 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/structure/user-account-update';
  $translatables['user_profile'] = array(
    t('Master'),
    t('User Accounts With Empty Profile'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Profile'),
    t('Name'),
    t('User'),
    t('- Choose an operation -'),
    t('Profile ID'),
    t('.'),
    t('Page'),
  );
  $export['user_profile'] = $view;

  return $export;
}
