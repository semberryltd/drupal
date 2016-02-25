<?php

$view = new view();
$view->name = 'domains';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'taxonomy_term_data';
$view->human_name = 'Domains';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Domains';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '25';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: Taxonomy term: Related themes (field_related_themes) */
$handler->display->display_options['relationships']['field_related_themes_tid']['id'] = 'field_related_themes_tid';
$handler->display->display_options['relationships']['field_related_themes_tid']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['relationships']['field_related_themes_tid']['field'] = 'field_related_themes_tid';
/* Field: Taxonomy term: Name */
$handler->display->display_options['fields']['name']['id'] = 'name';
$handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['fields']['name']['field'] = 'name';
$handler->display->display_options['fields']['name']['label'] = '';
$handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
/* Field: Taxonomy term: Related themes */
$handler->display->display_options['fields']['field_related_themes']['id'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['table'] = 'field_data_field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['field'] = 'field_related_themes';
$handler->display->display_options['fields']['field_related_themes']['delta_offset'] = '0';
/* Field: Field: Related topics */
$handler->display->display_options['fields']['field_related_topics']['id'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['field'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics']['delta_offset'] = '0';
/* Field: Field: Related topics */
$handler->display->display_options['fields']['field_related_topics_1']['id'] = 'field_related_topics_1';
$handler->display->display_options['fields']['field_related_topics_1']['table'] = 'field_data_field_related_topics';
$handler->display->display_options['fields']['field_related_topics_1']['field'] = 'field_related_topics';
$handler->display->display_options['fields']['field_related_topics_1']['relationship'] = 'field_related_themes_tid';
$handler->display->display_options['fields']['field_related_topics_1']['label'] = 'Extended topics';
$handler->display->display_options['fields']['field_related_topics_1']['delta_offset'] = '0';
/* Filter criterion: Taxonomy vocabulary: Machine name */
$handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
$handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
$handler->display->display_options['filters']['machine_name']['value'] = array(
  'domains' => 'domains',
);

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block');
$translatables['domains'] = array(
  t('Master'),
  t('Domains'),
  t('more'),
  t('Apply'),
  t('Reset'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('term from field_related_themes'),
  t('Related themes'),
  t('Related topics'),
  t('Extended topics'),
  t('Block'),
);
