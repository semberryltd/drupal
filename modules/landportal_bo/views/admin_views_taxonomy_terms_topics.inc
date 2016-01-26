<?php

$view = new view();
$view->name = 'topics_terms_management';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Topics terms management';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Topics terms management';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '100';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'draggableviews' => 'draggableviews',
  'views_bulk_operations' => 'views_bulk_operations',
  'name' => 'name',
  'tid' => 'tid',
  'field_id' => 'field_id',
  'weight' => 'weight',
  'nid' => 'nid',
  'field_language' => 'field_language',
  'edit_term' => 'edit_term',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'draggableviews' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'tid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'weight' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nid' => array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_language' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'edit_term' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* Relationship: Taxonomy term: Content using Related topics */
$handler->display->display_options['relationships']['reverse_field_related_topics_node']['id'] = 'reverse_field_related_topics_node';
$handler->display->display_options['relationships']['reverse_field_related_topics_node']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_related_topics_node']['field'] = 'reverse_field_related_topics_node';
/* Relationship: Taxonomy term: Profile using Related topics */
$handler->display->display_options['relationships']['reverse_field_related_topics_profile2']['id'] = 'reverse_field_related_topics_profile2';
$handler->display->display_options['relationships']['reverse_field_related_topics_profile2']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['reverse_field_related_topics_profile2']['field'] = 'reverse_field_related_topics_profile2';
/* Relationship: Taxonomy term: Parent term */
$handler->display->display_options['relationships']['parent']['id'] = 'parent';
$handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
$handler->display->display_options['relationships']['parent']['field'] = 'parent';
/* Field: Draggableviews: Taxonomy term */
$handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
$handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
$handler->display->display_options['fields']['draggableviews']['draggableviews']['hierarchy_handler'] = 'draggableviews_hierarchy_handler_native';
$handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Save order';
$handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
/* Field: Bulk operations: Taxonomy term */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_modify_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
    'settings' => array(
      'show_all_tokens' => 1,
      'display_values' => array(
        '_all_' => '_all_',
      ),
    ),
  ),
  'action::pathauto_taxonomy_term_update_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 1,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = 'TID';
$handler->display->display_options['fields']['tid']['exclude'] = TRUE;
/* Field: Field: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
$handler->display->display_options['fields']['field_id']['relationship'] = 'parent';
$handler->display->display_options['fields']['field_id']['label'] = 'PID';
$handler->display->display_options['fields']['field_id']['exclude'] = TRUE;
/* Field: Taxonomy term: Weight */
$handler->display->display_options['fields']['weight']['id'] = 'weight';
$handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['weight']['field'] = 'weight';
$handler->display->display_options['fields']['weight']['label'] = 'W';
$handler->display->display_options['fields']['weight']['exclude'] = TRUE;
/* Field: COUNT(DISTINCT Content: Nid) */
$handler->display->display_options['fields']['nid']['id'] = 'nid';
$handler->display->display_options['fields']['nid']['table'] = 'node';
$handler->display->display_options['fields']['nid']['field'] = 'nid';
$handler->display->display_options['fields']['nid']['relationship'] = 'reverse_field_related_topics_node';
$handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
$handler->display->display_options['fields']['nid']['label'] = 'NC';
/* Field: Field: Language */
$handler->display->display_options['fields']['field_language']['id'] = 'field_language';
$handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
$handler->display->display_options['fields']['field_language']['field'] = 'field_language';
$handler->display->display_options['fields']['field_language']['label'] = 'Lang';
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['label'] = 'Links';
/* Sort criterion: Taxonomy edge: taxonomy hierarchy order */
$handler->display->display_options['sorts']['term_sort_hierarchy']['id'] = 'term_sort_hierarchy';
$handler->display->display_options['sorts']['term_sort_hierarchy']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['term_sort_hierarchy']['field'] = 'term_sort_hierarchy';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'landportal_topics' => 'landportal_topics',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'admin/structure/taxonomy/terms/topics';
$translatables['topics_terms_management'] = array(
  t('Master'),
  t('Topics terms management'),
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
  t('field_related_topics'),
  t('Parent'),
  t('Taxonomy term'),
  t('- Choose an operation -'),
  t('Name'),
  t('TID'),
  t('.'),
  t(','),
  t('PID'),
  t('W'),
  t('NC'),
  t('Lang'),
  t('Links'),
  t('Page'),
);
