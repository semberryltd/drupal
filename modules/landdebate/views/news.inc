<?php

$view = new view();
$view->name = 'news';
$view->description = 'Overview of Landportal News';
$view->tag = 'landportal';
$view->base_table = 'node';
$view->human_name = 'News overview';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Land News';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'Read more';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class_special'] = FALSE;
$handler->display->display_options['row_plugin'] = 'entity';
$handler->display->display_options['row_options']['view_mode'] = 'teaser';
/* Header: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<h2>Lastest news on the Landportal</h2>';
$handler->display->display_options['header']['area']['format'] = 'filtered_html';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Post date */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'time ago';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Sort criterion: Content: Sticky */
$handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
$handler->display->display_options['sorts']['sticky']['table'] = 'node';
$handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  'news' => 'news',
);
/* Filter criterion: Content: Language */
$handler->display->display_options['filters']['language']['id'] = 'language';
$handler->display->display_options['filters']['language']['table'] = 'node';
$handler->display->display_options['filters']['language']['field'] = 'language';
$handler->display->display_options['filters']['language']['value'] = array(
  '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  'und' => 'und',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'debate/news';

/* Display: Block */
$handler = $view->new_display('block', 'Block', 'block_1');
$handler->display->display_options['defaults']['use_more'] = FALSE;
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_always'] = FALSE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['defaults']['use_more_text'] = FALSE;
$handler->display->display_options['use_more_text'] = 'Read more news';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '9';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['style_options']['columns'] = '3';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['block_description'] = 'None';

/* Display: News byC */
$handler = $view->new_display('block', 'News byC', 'block_2');
$handler->display->display_options['defaults']['header'] = FALSE;
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: Field: Geographical focus (field_geographical_focus) */
$handler->display->display_options['relationships']['field_geographical_focus_tid']['id'] = 'field_geographical_focus_tid';
$handler->display->display_options['relationships']['field_geographical_focus_tid']['table'] = 'field_data_field_geographical_focus';
$handler->display->display_options['relationships']['field_geographical_focus_tid']['field'] = 'field_geographical_focus_tid';
$handler->display->display_options['relationships']['field_geographical_focus_tid']['required'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: Taxonomy term: Name */
$handler->display->display_options['arguments']['name']['id'] = 'name';
$handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
$handler->display->display_options['arguments']['name']['field'] = 'name';
$handler->display->display_options['arguments']['name']['relationship'] = 'field_geographical_focus_tid';
$handler->display->display_options['arguments']['name']['default_action'] = 'default';
$handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
$handler->display->display_options['arguments']['name']['title'] = 'News for %1';
$handler->display->display_options['arguments']['name']['default_argument_type'] = 'raw';
$handler->display->display_options['arguments']['name']['default_argument_options']['index'] = '2';
$handler->display->display_options['arguments']['name']['default_argument_options']['use_alias'] = TRUE;
$handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['name']['limit'] = '0';
$handler->display->display_options['arguments']['name']['case'] = 'ucfirst';
$translatables['news'] = array(
  t('Master'),
  t('Land News'),
  t('Read more'),
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
  t('<h2>Lastest news on the Landportal</h2>'),
  t('Page'),
  t('more'),
  t('Block'),
  t('Read more news'),
  t('None'),
  t('News byC'),
  t('term from field_geographical_focus'),
  t('All'),
  t('News for %1'),
);
