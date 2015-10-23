<?php
$view = new view();
$view->name = 'admin_views_taxonomy_term';
$view->description = 'Manage tagging, categorization, and classification of your content.';
$view->tag = 'admin';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Administration: Taxonomy terms';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Defaults */
$handler = $view->new_display('default', 'Defaults', 'default');
$handler->display->display_options['title'] = 'Terms';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'menu';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'name_1' => 'name_1',
  'name' => 'name',
  'tid' => 'tid',
);
$handler->display->display_options['style_options']['default'] = 'name';
$handler->display->display_options['style_options']['info'] = array(
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
  'tid' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
$handler->display->display_options['style_options']['sticky'] = TRUE;
/* Field: Bulk operations: Taxonomy term */
$handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
$handler->display->display_options['fields']['views_bulk_operations']['label'] = 'VBO';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
$handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
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
/* Field: Taxonomy term: Term ID */
$handler->display->display_options['fields']['tid']['id'] = 'tid';
$handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['tid']['field'] = 'tid';
$handler->display->display_options['fields']['tid']['label'] = 'Operations';
$handler->display->display_options['fields']['tid']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['tid']['alter']['text'] = 'edit';
$handler->display->display_options['fields']['tid']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['tid']['alter']['path'] = 'taxonomy/term/[tid]/edit';
$handler->display->display_options['fields']['tid']['separator'] = '';
/* Field: Taxonomy vocabulary: Name */
$handler->display->display_options['fields']['name_1']['id'] = 'name_1';
$handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['fields']['name_1']['field'] = 'name';
$handler->display->display_options['fields']['name_1']['label'] = '';
$handler->display->display_options['fields']['name_1']['exclude'] = TRUE;
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = 'Term';
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Field: Language */
$handler->display->display_options['fields']['field_language']['id'] = 'field_language';
$handler->display->display_options['fields']['field_language']['table'] = 'field_data_field_language';
$handler->display->display_options['fields']['field_language']['field'] = 'field_language';
/* Sort criterion: Taxonomy term: Weight */
$handler->display->display_options['sorts']['weight']['id'] = 'weight';
$handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['weight']['field'] = 'weight';
/* Sort criterion: Taxonomy term: Name */
$handler->display->display_options['sorts']['name']['id'] = 'name';
$handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['sorts']['name']['field'] = 'name';
/* Contextual filter: Taxonomy vocabulary: Machine name */
$handler->display->display_options['arguments']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['arguments']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['arguments']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['arguments']['machine_name']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['machine_name']['title'] = 'Terms in %1';
$handler->display->display_options['arguments']['machine_name']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['machine_name']['breadcrumb'] = '%1';
$handler->display->display_options['arguments']['machine_name']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['machine_name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['machine_name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['machine_name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['machine_name']['specify_validation'] = TRUE;
$handler->display->display_options['arguments']['machine_name']['validate']['fail'] = 'ignore';
$handler->display->display_options['arguments']['machine_name']['limit'] = '0';
/* Filter criterion: Taxonomy term: Name */
$handler->display->display_options['filters']['name']['id'] = 'name';
$handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['filters']['name']['field'] = 'name';
$handler->display->display_options['filters']['name']['operator'] = 'word';
$handler->display->display_options['filters']['name']['exposed'] = TRUE;
$handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
$handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
$handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
$handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
/* Filter criterion: Taxonomy term: ISO3 (field_iso3) */
$handler->display->display_options['filters']['field_iso3_value']['id'] = 'field_iso3_value';
$handler->display->display_options['filters']['field_iso3_value']['table'] = 'field_data_field_iso3';
$handler->display->display_options['filters']['field_iso3_value']['field'] = 'field_iso3_value';
$handler->display->display_options['filters']['field_iso3_value']['operator'] = 'starts';
$handler->display->display_options['filters']['field_iso3_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_iso3_value']['expose']['operator_id'] = 'field_iso3_value_op';
$handler->display->display_options['filters']['field_iso3_value']['expose']['label'] = 'ISO3 (field_iso3)';
$handler->display->display_options['filters']['field_iso3_value']['expose']['operator'] = 'field_iso3_value_op';
$handler->display->display_options['filters']['field_iso3_value']['expose']['identifier'] = 'field_iso3_value';
$handler->display->display_options['filters']['field_iso3_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Taxonomy term: Synonyms (synonyms_synonyms) */
$handler->display->display_options['filters']['synonyms_synonyms_value']['id'] = 'synonyms_synonyms_value';
$handler->display->display_options['filters']['synonyms_synonyms_value']['table'] = 'field_data_synonyms_synonyms';
$handler->display->display_options['filters']['synonyms_synonyms_value']['field'] = 'synonyms_synonyms_value';
$handler->display->display_options['filters']['synonyms_synonyms_value']['operator'] = 'contains';
$handler->display->display_options['filters']['synonyms_synonyms_value']['exposed'] = TRUE;
$handler->display->display_options['filters']['synonyms_synonyms_value']['expose']['operator_id'] = 'synonyms_synonyms_value_op';
$handler->display->display_options['filters']['synonyms_synonyms_value']['expose']['label'] = 'Synonyms (synonyms_synonyms)';
$handler->display->display_options['filters']['synonyms_synonyms_value']['expose']['operator'] = 'synonyms_synonyms_value_op';
$handler->display->display_options['filters']['synonyms_synonyms_value']['expose']['identifier'] = 'synonyms_synonyms_value';
$handler->display->display_options['filters']['synonyms_synonyms_value']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
/* Filter criterion: Field: Language (field_language) */
$handler->display->display_options['filters']['field_language_tid']['id'] = 'field_language_tid';
$handler->display->display_options['filters']['field_language_tid']['table'] = 'field_data_field_language';
$handler->display->display_options['filters']['field_language_tid']['field'] = 'field_language_tid';
$handler->display->display_options['filters']['field_language_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['field_language_tid']['expose']['operator_id'] = 'field_language_tid_op';
$handler->display->display_options['filters']['field_language_tid']['expose']['label'] = 'Language (field_language)';
$handler->display->display_options['filters']['field_language_tid']['expose']['operator'] = 'field_language_tid_op';
$handler->display->display_options['filters']['field_language_tid']['expose']['identifier'] = 'field_language_tid';
$handler->display->display_options['filters']['field_language_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);
$handler->display->display_options['filters']['field_language_tid']['type'] = 'select';
$handler->display->display_options['filters']['field_language_tid']['vocabulary'] = 'languages';

/* Display: System */
$handler = $view->new_display('system', 'System', 'system_1');
$handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
$handler->display->display_options['defaults']['access'] = FALSE;
$handler->display->display_options['path'] = 'admin/structure/taxonomy/%';
$translatables['admin_views_taxonomy_term'] = array(
  t('Defaults'),
  t('Terms'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('VBO'),
  t('- Choose an operation -'),
  t('Operations'),
  t('edit'),
  t('.'),
  t('Term'),
  t('Language'),
  t('All'),
  t('Terms in %1'),
  t('%1'),
  t('Name'),
  t('ISO3 (field_iso3)'),
  t('Synonyms (synonyms_synonyms)'),
  t('Language (field_language)'),
  t('System'),
);