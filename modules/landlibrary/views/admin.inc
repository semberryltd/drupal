<?php
/**
 * Landlibrary views: Admin
 *
 * View name: landlibrary_search
 * View URL: http://landportal.info/admin/structure/views/view/library_search/
 * View BO: http://landportal.ker/admin/structure/views/view/administration_library/export
 */
$view = new view();
$view->name = 'admin_view_library';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Administration: Library';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Administration: Library';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '50';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '25';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'nid' => 'nid',
  'path' => 'path',
  'title' => 'title',
  'title_field' => 'title_field',
  'field_doc_title' => 'field_doc_title',
  'field_doc_provider' => 'field_doc_provider',
  'field_doc_data_provider' => 'field_doc_data_provider',
  'language' => 'language',
  'field_doc_language' => 'field_doc_language',
  'created' => 'created',
  'field_doc_creation_date' => 'field_doc_creation_date',
  'edit_node' => 'edit_node',
);
$handler->display->display_options['style_options']['default'] = 'nid';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'path' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title_field' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_title' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_provider' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_data_provider' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_language' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'created' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_doc_creation_date' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_node' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
$handler->display->display_options['header']['result']['empty'] = TRUE;
/* Field: Bulk operations: Content */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
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
  'action::node_promote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_publish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpromote_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::node_unpublish_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Content: Nid */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
/* Field: Content: Edit link */
$handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
$handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
/* Field: Content: Path */
$handler->display->display_options['fields']['path']['id'] = 'path';
$handler->display->display_options['fields']['path']['table'] = 'node';
$handler->display->display_options['fields']['path']['field'] = 'path';
$handler->display->display_options['fields']['path']['exclude'] = TRUE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title_field']['id'] = 'title_field';
$handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
$handler->display->display_options['fields']['title_field']['field'] = 'title_field';
$handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
/* Field: Content: Title */
$handler->display->display_options['fields']['field_doc_title']['id'] = 'field_doc_title';
$handler->display->display_options['fields']['field_doc_title']['table'] = 'field_data_field_doc_title';
$handler->display->display_options['fields']['field_doc_title']['field'] = 'field_doc_title';
$handler->display->display_options['fields']['field_doc_title']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['field_doc_title']['alter']['path'] = '[path]';
$handler->display->display_options['fields']['field_doc_title']['delta_offset'] = '0';
/* Field: Content: Resource type */
$handler->display->display_options['fields']['field_doc_type']['id'] = 'field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['table'] = 'field_data_field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['field'] = 'field_doc_type';
$handler->display->display_options['fields']['field_doc_type']['type'] = 'taxonomy_term_reference_plain';
$handler->display->display_options['fields']['field_doc_type']['delta_offset'] = '0';
/* Field: Content: Provider */
$handler->display->display_options['fields']['field_doc_provider']['id'] = 'field_doc_provider';
$handler->display->display_options['fields']['field_doc_provider']['table'] = 'field_data_field_doc_provider';
$handler->display->display_options['fields']['field_doc_provider']['field'] = 'field_doc_provider';
$handler->display->display_options['fields']['field_doc_provider']['relationship'] = 'reverse_field_doc_provider_node';
$handler->display->display_options['fields']['field_doc_provider']['settings'] = array(
  'link' => 1,
);
/* Field: Content: Data Provider */
$handler->display->display_options['fields']['field_doc_data_provider']['id'] = 'field_doc_data_provider';
$handler->display->display_options['fields']['field_doc_data_provider']['table'] = 'field_data_field_doc_data_provider';
$handler->display->display_options['fields']['field_doc_data_provider']['field'] = 'field_doc_data_provider';
$handler->display->display_options['fields']['field_doc_data_provider']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_doc_data_provider']['settings'] = array(
  'link' => 1,
);
/* Field: Content: Language */
$handler->display->display_options['fields']['language']['id'] = 'language';
$handler->display->display_options['fields']['language']['table'] = 'node';
$handler->display->display_options['fields']['language']['field'] = 'language';
/* Field: Content: Language */
$handler->display->display_options['fields']['field_doc_language']['id'] = 'field_doc_language';
$handler->display->display_options['fields']['field_doc_language']['table'] = 'field_data_field_doc_language';
$handler->display->display_options['fields']['field_doc_language']['field'] = 'field_doc_language';
$handler->display->display_options['fields']['field_doc_language']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_doc_language']['delta_offset'] = '0';
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['date_format'] = 'month_and_year';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Field: Content: Publication date */
$handler->display->display_options['fields']['field_doc_creation_date']['id'] = 'field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['table'] = 'field_data_field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['field'] = 'field_doc_creation_date';
$handler->display->display_options['fields']['field_doc_creation_date']['settings'] = array(
  'format_type' => 'month_and_year',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
  'show_repeat_rule' => 'show',
);
/* Field: Content: Publisher */
$handler->display->display_options['fields']['field_doc_publisher']['id'] = 'field_doc_publisher';
$handler->display->display_options['fields']['field_doc_publisher']['table'] = 'field_data_field_doc_publisher';
$handler->display->display_options['fields']['field_doc_publisher']['field'] = 'field_doc_publisher';
$handler->display->display_options['fields']['field_doc_publisher']['settings'] = array(
  'link' => 0,
);
$handler->display->display_options['fields']['field_doc_publisher']['delta_offset'] = '0';
/* Field: Content: Format */
$handler->display->display_options['fields']['field_format']['id'] = 'field_format';
$handler->display->display_options['fields']['field_format']['table'] = 'field_data_field_format';
$handler->display->display_options['fields']['field_format']['field'] = 'field_format';
/* Field: Content: Geographic Region */
$handler->display->display_options['fields']['field_doc_geographic_region']['id'] = 'field_doc_geographic_region';
$handler->display->display_options['fields']['field_doc_geographic_region']['table'] = 'field_data_field_doc_geographic_region';
$handler->display->display_options['fields']['field_doc_geographic_region']['field'] = 'field_doc_geographic_region';
/* Field: Content: Keyword */
$handler->display->display_options['fields']['field_doc_keyword']['id'] = 'field_doc_keyword';
$handler->display->display_options['fields']['field_doc_keyword']['table'] = 'field_data_field_doc_keyword';
$handler->display->display_options['fields']['field_doc_keyword']['field'] = 'field_doc_keyword';
$handler->display->display_options['fields']['field_doc_keyword']['delta_offset'] = '0';
/* Field: Content: Subject */
$handler->display->display_options['fields']['field_doc_subject']['id'] = 'field_doc_subject';
$handler->display->display_options['fields']['field_doc_subject']['table'] = 'field_data_field_doc_subject';
$handler->display->display_options['fields']['field_doc_subject']['field'] = 'field_doc_subject';
$handler->display->display_options['fields']['field_doc_subject']['delta_offset'] = '0';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
$handler->display->display_options['filter_groups']['groups'] = array(
  1 => 'AND',
  2 => 'AND',
);
/* Filter criterion: Content: Title (title_field) */
$handler->display->display_options['filters']['title_field_value']['id'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['table'] = 'field_data_title_field';
$handler->display->display_options['filters']['title_field_value']['field'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['operator'] = 'contains';
$handler->display->display_options['filters']['title_field_value']['group'] = 1;
$handler->display->display_options['filters']['title_field_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['title_field_value']['expose']['operator_id'] = 'title_field_value_op';
$handler->display->display_options['filters']['title_field_value']['expose']['label'] = 'Title (title_field)';
$handler->display->display_options['filters']['title_field_value']['expose']['operator'] = 'title_field_value_op';
$handler->display->display_options['filters']['title_field_value']['expose']['identifier'] = 'title_field_value';
$handler->display->display_options['filters']['title_field_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  '***DEFAULT_LANGUAGE***' => '***DEFAULT_LANGUAGE***',
  'und' => 'und',
  'en' => 'en',
  'fr' => 'fr',
  'es' => 'es',
);
$handler->display->display_options['filters']['language']['group'] = 1;
$handler->display->display_options['filters']['language']['exposed'] = TRUE;
$handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
$handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
$handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
$handler->display->display_options['filters']['language']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['exposed'] = TRUE;
$handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
$handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
$handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
$handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  111903911 => 0,
  111903912 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'landlibrary_resource' => 'landlibrary_resource',
);
$handler->display->display_options['filters']['type']['group'] = 2;

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/content/library';
$translatables['admin_view_library'] = array(
  t('Master'),
  t('Administration: Library'),
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
  t('Displaying @start - @end of @total'),
  t('Content'),
  t('- Choose an operation -'),
  t('Nid'),
  t('Edit link'),
  t('Path'),
  t('Title'),
  t('Resource type'),
  t('Provider'),
  t('Data Provider'),
  t('Language'),
  t('Post date'),
  t('Publication date'),
  t('Publisher'),
  t('Format'),
  t('Geographic Region'),
  t('Keyword'),
  t('Subject'),
  t('Title (title_field)'),
  t('Published'),
  t('System'),
);
