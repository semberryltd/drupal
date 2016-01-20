<?php
/**
 * LP Organizations view
 *
 * Copy/paste from:
 * http://landportal.info/admin/structure/views/view/organizations_overview/export
 */

$view = new view();
$view->name = 'organizations_overview';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Organizations overview';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Organizations';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '32';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['style_options']['uses_fields'] = TRUE;
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Sort criterion: Content: Title */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'node';
$handler->display->display_options['sorts']['title']['field'] = 'title';
/* Contextual filter: Content: Title */
$handler->display->display_options['arguments']['title']['id'] = 'title';
$handler->display->display_options['arguments']['title']['table'] = 'node';
$handler->display->display_options['arguments']['title']['field'] = 'title';
$handler->display->display_options['arguments']['title']['default_action'] = 'default';
$handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'all';
$handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['title']['summary_options']['count'] = FALSE;
$handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['title']['glossary'] = TRUE;
$handler->display->display_options['arguments']['title']['limit'] = '1';
$handler->display->display_options['arguments']['title']['break_phrase'] = TRUE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'organizations';

/* Display: Alpha filter */
$handler = $view->new_display('attachment', 'Alpha filter', 'attachment_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Title */
$handler->display->display_options['arguments']['title']['id'] = 'title';
$handler->display->display_options['arguments']['title']['table'] = 'node';
$handler->display->display_options['arguments']['title']['field'] = 'title';
$handler->display->display_options['arguments']['title']['default_action'] = 'summary';
$handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
$handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
$handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
$handler->display->display_options['arguments']['title']['glossary'] = TRUE;
$handler->display->display_options['arguments']['title']['limit'] = '1';
$handler->display->display_options['arguments']['title']['case'] = 'upper';
$handler->display->display_options['arguments']['title']['path_case'] = 'lower';
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
  'block_2' => 0,
  'page_1' => 0,
);
$handler->display->display_options['attachment_position'] = 'after';
$handler->display->display_options['inherit_arguments'] = FALSE;

/* Display: Block by country */
$handler = $view->new_display('block', 'Block by country', 'block_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Organizations';
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['relationship'] = 'field_geographical_focus_tid';
$handler->display->display_options['arguments']['name']['default_action'] = 'default';
$handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['title'] = 'Organizations working in %1';
$handler->display->display_options['arguments']['name']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['breadcrumb'] = '%1';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
$handler->display->display_options['arguments']['name']['default_argument_options']['use_alias'] = TRUE;
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['case'] = 'ucfirst';

/* Display: Page community */
$handler = $view->new_display('page', 'Page community', 'page_1');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Land Portal Community';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Organization type (field_organization_type) */
$handler->display->display_options['filters']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
$handler->display->display_options['filters']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
$handler->display->display_options['filters']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
$handler->display->display_options['filters']['field_organization_type_tid']['value'] = array(
  0 => '1272',
);
$handler->display->display_options['filters']['field_organization_type_tid']['vocabulary'] = 'organization_types';
$handler->display->display_options['path'] = 'debate/community';

/* Display: Alpha filter community */
$handler = $view->new_display('attachment', 'Alpha filter community', 'attachment_2');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'title' => 'title',
);
$handler->display->display_options['style_options']['default'] = 'title';
$handler->display->display_options['style_options']['info'] = array(
  'title' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Content: Title */
$handler->display->display_options['arguments']['title']['id'] = 'title';
$handler->display->display_options['arguments']['title']['table'] = 'node';
$handler->display->display_options['arguments']['title']['field'] = 'title';
$handler->display->display_options['arguments']['title']['default_action'] = 'summary';
$handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['title']['default_argument_options']['argument'] = 'a';
$handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['title']['summary']['format'] = 'unformatted_summary';
$handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['title']['summary_options']['inline'] = TRUE;
$handler->display->display_options['arguments']['title']['glossary'] = TRUE;
$handler->display->display_options['arguments']['title']['limit'] = '1';
$handler->display->display_options['arguments']['title']['case'] = 'upper';
$handler->display->display_options['arguments']['title']['path_case'] = 'lower';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'organization' => 'organization',
);
/* Filter criterion: Content: Organization type (field_organization_type) */
$handler->display->display_options['filters']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
$handler->display->display_options['filters']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
$handler->display->display_options['filters']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
$handler->display->display_options['filters']['field_organization_type_tid']['value'] = array(
  0 => '1272',
);
$handler->display->display_options['filters']['field_organization_type_tid']['vocabulary'] = 'organization_types';
$handler->display->display_options['displays'] = array(
  'page_1' => 'page_1',
  'default' => 0,
  'page' => 0,
  'block_2' => 0,
);
$handler->display->display_options['attachment_position'] = 'after';
$handler->display->display_options['inherit_arguments'] = FALSE;
$translatables['organizations_overview'] = array(
  t('Master'),
  t('Organizations'),
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
  t('All'),
  t('Page'),
  t('Alpha filter'),
  t('Block by country'),
  t('Organizations working in %1'),
  t('%1'),
  t('Page community'),
  t('Land Portal Community'),
  t('Alpha filter community'),
);
