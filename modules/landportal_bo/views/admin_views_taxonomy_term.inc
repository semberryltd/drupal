<?php

$view = new view();
$view->name = 'admin_views_taxonomy_term';
$view->description = 'Manage tagging, categorization, and classification of your content.';
$view->tag = 'admin';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Administration: Taxonomy terms management';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Terms management';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'menu';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '250';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'views_bulk_operations' => 'views_bulk_operations',
  'name_1' => 'name_1',
  'name' => 'name',
  'name_field_et' => 'name_field_et',
  'name_field_et_1' => 'name_field_et',
  'name_field_et_2' => 'name_field_et',
  'field_iso3' => 'field_iso3',
  'field_machine_name_2' => 'field_iso3',
  'field_agrovoc_uri' => 'field_iso3',
  'field_linked_uris' => 'field_iso3',
  'title' => 'title',
  'field_id' => 'field_id',
  'edit_term' => 'edit_term',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'views_bulk_operations' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
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
  'name_field_et' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => ', ',
    'empty_column' => 0,
  ),
  'name_field_et_1' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'name_field_et_2' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_iso3' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '<br />',
    'empty_column' => 0,
  ),
  'field_machine_name_2' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_agrovoc_uri' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_linked_uris' => array(
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
  'field_id' => array(
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
/* Relationship: Taxonomy term: Representative node */
$handler->display->display_options['relationships']['tid_representative']['id'] = 'tid_representative';
$handler->display->display_options['relationships']['tid_representative']['table'] = 'taxonomy_term_data';
$handler->display->display_options['relationships']['tid_representative']['field'] = 'tid_representative';
$handler->display->display_options['relationships']['tid_representative']['subquery_sort'] = 'node.nid';
$handler->display->display_options['relationships']['tid_representative']['subquery_order'] = 'ASC';
$handler->display->display_options['relationships']['tid_representative']['subquery_view'] = '';
$handler->display->display_options['relationships']['tid_representative']['subquery_namespace'] = '';
/* Field: Bulk operations: Taxonomy term */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
$handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
  'action::views_bulk_operations_delete_item' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
  'action::views_bulk_operations_script_action' => array(
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
  'action::pathauto_taxonomy_term_update_action' => array(
    'selected' => 1,
    'postpone_processing' => 0,
    'skip_confirmation' => 0,
    'override_label' => 0,
    'label' => '',
  ),
);
/* Field: Taxonomy vocabulary: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = 'Voc';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et']['id'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et']['label'] = 'Name EN';
$handler->display->display_options['fields']['name_field_et']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name_field_et']['alter']['text'] = 'EN:[name_field_et]';
$handler->display->display_options['fields']['name_field_et']['empty'] = 'EN:NONE';
$handler->display->display_options['fields']['name_field_et']['language'] = 'en';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_1']['id'] = 'name_field_et_1';
$handler->display->display_options['fields']['name_field_et_1']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_1']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_1']['label'] = 'Name: FR';
$handler->display->display_options['fields']['name_field_et_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name_field_et_1']['alter']['text'] = 'FR:[name_field_et_1]';
$handler->display->display_options['fields']['name_field_et_1']['empty'] = 'FR:NONE';
$handler->display->display_options['fields']['name_field_et_1']['language'] = 'fr';
/* Field: Entity translation: Name: translated */
$handler->display->display_options['fields']['name_field_et_2']['id'] = 'name_field_et_2';
$handler->display->display_options['fields']['name_field_et_2']['table'] = 'field_data_name_field';
$handler->display->display_options['fields']['name_field_et_2']['field'] = 'name_field_et';
$handler->display->display_options['fields']['name_field_et_2']['label'] = 'Name: ES';
$handler->display->display_options['fields']['name_field_et_2']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['name_field_et_2']['alter']['text'] = 'ES:[name_field_et_2]';
$handler->display->display_options['fields']['name_field_et_2']['empty'] = 'ES:NONE';
$handler->display->display_options['fields']['name_field_et_2']['language'] = 'es';
/* Field: Taxonomy term: ISO3 */
$handler->display->display_options['fields']['field_iso3']['id'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['table'] = 'field_data_field_iso3';
$handler->display->display_options['fields']['field_iso3']['field'] = 'field_iso3';
$handler->display->display_options['fields']['field_iso3']['label'] = 'Codes, URIs';
$handler->display->display_options['fields']['field_iso3']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Taxonomy term: Machine name (ISO 639-2) */
$handler->display->display_options['fields']['field_machine_name_2']['id'] = 'field_machine_name_2';
$handler->display->display_options['fields']['field_machine_name_2']['table'] = 'field_data_field_machine_name_2';
$handler->display->display_options['fields']['field_machine_name_2']['field'] = 'field_machine_name_2';
$handler->display->display_options['fields']['field_machine_name_2']['label'] = 'ISO 639-2';
$handler->display->display_options['fields']['field_machine_name_2']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Taxonomy term: AGROVOC URI */
$handler->display->display_options['fields']['field_agrovoc_uri']['id'] = 'field_agrovoc_uri';
$handler->display->display_options['fields']['field_agrovoc_uri']['table'] = 'field_data_field_agrovoc_uri';
$handler->display->display_options['fields']['field_agrovoc_uri']['field'] = 'field_agrovoc_uri';
$handler->display->display_options['fields']['field_agrovoc_uri']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_agrovoc_uri']['type'] = 'link_url';
$handler->display->display_options['fields']['field_agrovoc_uri']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Taxonomy term: Linked URI */
$handler->display->display_options['fields']['field_linked_uris']['id'] = 'field_linked_uris';
$handler->display->display_options['fields']['field_linked_uris']['table'] = 'field_data_field_linked_uris';
$handler->display->display_options['fields']['field_linked_uris']['field'] = 'field_linked_uris';
$handler->display->display_options['fields']['field_linked_uris']['label'] = 'Geopolitical Ontology URI';
$handler->display->display_options['fields']['field_linked_uris']['click_sort_column'] = 'url';
$handler->display->display_options['fields']['field_linked_uris']['type'] = 'link_url';
$handler->display->display_options['fields']['field_linked_uris']['settings'] = array(
  'conditions' => array(
    0 => array(
      'condition' => '',
    ),
  ),
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'tid_representative';
$handler->display->display_options['fields']['title']['label'] = 'One node';
/* Field: Field: ID */
$handler->display->display_options['fields']['field_id']['id'] = 'field_id';
$handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
$handler->display->display_options['fields']['field_id']['field'] = 'field_id';
/* Field: Taxonomy term: Term edit link */
$handler->display->display_options['fields']['edit_term']['id'] = 'edit_term';
$handler->display->display_options['fields']['edit_term']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['edit_term']['field'] = 'edit_term';
/* Sort criterion: Taxonomy vocabulary: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name_1']['id'] = 'name_1';
$handler->display->display_options['sorts']['name_1']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name_1']['field'] = 'name';
/* Filter criterion: Taxonomy term: Vocabulary */
$handler->display->display_options['filters']['vid']['id'] = 'vid';
$handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['vid']['field'] = 'vid';
$handler->display->display_options['filters']['vid']['exposed'] = TRUE;
$handler->display->display_options['filters']['vid']['expose']['operator_id'] = 'vid_op';
$handler->display->display_options['filters']['vid']['expose']['label'] = 'Vocabulary';
$handler->display->display_options['filters']['vid']['expose']['operator'] = 'vid_op';
$handler->display->display_options['filters']['vid']['expose']['identifier'] = 'vid';
$handler->display->display_options['filters']['vid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['vid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Taxonomy term: AGROVOC URI (field_agrovoc_uri:url) */
$handler->display->display_options['filters']['field_agrovoc_uri_url']['id'] = 'field_agrovoc_uri_url';
$handler->display->display_options['filters']['field_agrovoc_uri_url']['table'] = 'field_data_field_agrovoc_uri';
$handler->display->display_options['filters']['field_agrovoc_uri_url']['field'] = 'field_agrovoc_uri_url';
$handler->display->display_options['filters']['field_agrovoc_uri_url']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['operator_id'] = 'field_agrovoc_uri_url_op';
$handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['label'] = 'AGROVOC URI';
$handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['operator'] = 'field_agrovoc_uri_url_op';
$handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['identifier'] = 'field_agrovoc_uri_url';
$handler->display->display_options['filters']['field_agrovoc_uri_url']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Taxonomy term: Linked URI (field_linked_uris:url) */
$handler->display->display_options['filters']['field_linked_uris_url']['id'] = 'field_linked_uris_url';
$handler->display->display_options['filters']['field_linked_uris_url']['table'] = 'field_data_field_linked_uris';
$handler->display->display_options['filters']['field_linked_uris_url']['field'] = 'field_linked_uris_url';
$handler->display->display_options['filters']['field_linked_uris_url']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_linked_uris_url']['expose']['operator_id'] = 'field_linked_uris_url_op';
$handler->display->display_options['filters']['field_linked_uris_url']['expose']['label'] = 'Geopolitical URI';
$handler->display->display_options['filters']['field_linked_uris_url']['expose']['use_operator'] = TRUE;
$handler->display->display_options['filters']['field_linked_uris_url']['expose']['operator'] = 'field_linked_uris_url_op';
$handler->display->display_options['filters']['field_linked_uris_url']['expose']['identifier'] = 'field_linked_uris_url';
$handler->display->display_options['filters']['field_linked_uris_url']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Taxonomy term: Name (name_field) */
$handler->display->display_options['filters']['name_field_value']['id'] = 'name_field_value';
$handler->display->display_options['filters']['name_field_value']['table'] = 'field_data_name_field';
$handler->display->display_options['filters']['name_field_value']['field'] = 'name_field_value';
$handler->display->display_options['filters']['name_field_value']['operator'] = 'contains';
$handler->display->display_options['filters']['name_field_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['name_field_value']['expose']['operator_id'] = 'name_field_value_op';
$handler->display->display_options['filters']['name_field_value']['expose']['label'] = 'Search';
$handler->display->display_options['filters']['name_field_value']['expose']['operator'] = 'name_field_value_op';
$handler->display->display_options['filters']['name_field_value']['expose']['identifier'] = 'name_field_value';
$handler->display->display_options['filters']['name_field_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/structure/taxonomy/terms';
$translatables['admin_views_taxonomy_terms'] = array(
  t('Defaults'),
  t('Terms management'),
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
  t('Representative node'),
  t('- Choose an operation -'),
  t('Voc'),
  t('Name EN'),
  t('EN:[name_field_et]'),
  t('EN:NONE'),
  t('Name: FR'),
  t('FR:[name_field_et_1]'),
  t('FR:NONE'),
  t('Name: ES'),
  t('ES:[name_field_et_2]'),
  t('ES:NONE'),
  t('Codes, URIs'),
  t('ISO 639-2'),
  t('AGROVOC URI'),
  t('Geopolitical Ontology URI'),
  t('One node'),
  t('ID'),
  t('Term edit link'),
  t('Vocabulary'),
  t('Geopolitical URI'),
  t('Search'),
  t('System'),
);
