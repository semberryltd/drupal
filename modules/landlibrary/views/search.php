<?php
/**
 * Landlibrary views: Search
 *
 * View name: landlibrary_search
 * View URL: http://landportal.info/admin/structure/views/view/library_search/
 */

// Just copy/past http://landportal.info/admin/structure/views/view/library_search/export
function landlibrary_views_search() {
    $view = new view();
$view->name = 'library_search';
$view->description = '';
$view->tag = 'landlibrary';
$view->base_table = 'apachesolr__landlibrary_search';
$view->human_name = 'Library Search';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Library Search';
$handler->display->display_options['use_ajax'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['style_options']['row_class'] = 'list-group-item';
$handler->display->display_options['row_plugin'] = 'fields';
/* Header: Global: Result summary */
$handler->display->display_options['header']['result']['id'] = 'result';
$handler->display->display_options['header']['result']['table'] = 'views';
$handler->display->display_options['header']['result']['field'] = 'result';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'No results found.';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
/* Field: Apache Solr: sm_field_doc_provider */
$handler->display->display_options['fields']['sm_field_doc_provider']['id'] = 'sm_field_doc_provider';
$handler->display->display_options['fields']['sm_field_doc_provider']['table'] = 'apachesolr__landlibrary_search';
$handler->display->display_options['fields']['sm_field_doc_provider']['field'] = 'sm_field_doc_provider';
$handler->display->display_options['fields']['sm_field_doc_provider']['label'] = '';
$handler->display->display_options['fields']['sm_field_doc_provider']['exclude'] = TRUE;
$handler->display->display_options['fields']['sm_field_doc_provider']['element_label_colon'] = FALSE;
/* Field: Apache Solr: url */
$handler->display->display_options['fields']['url']['id'] = 'url';
$handler->display->display_options['fields']['url']['table'] = 'apachesolr__landlibrary_search';
$handler->display->display_options['fields']['url']['field'] = 'url';
$handler->display->display_options['fields']['url']['label'] = '';
$handler->display->display_options['fields']['url']['exclude'] = TRUE;
$handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
/* Field: Global: PHP */
$handler->display->display_options['fields']['php_1']['id'] = 'php_1';
$handler->display->display_options['fields']['php_1']['table'] = 'views';
$handler->display->display_options['fields']['php_1']['field'] = 'php';
$handler->display->display_options['fields']['php_1']['label'] = '';
$handler->display->display_options['fields']['php_1']['element_type'] = 'span';
$handler->display->display_options['fields']['php_1']['element_class'] = 'search-block-provider';
$handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_1']['php_output'] = '<?php 
$node_id = str_replace(\'node:\', \'\', $row->sm_field_doc_provider[0]);
$node  = node_load($node_id);
$file = file_load($node->field_image[\'und\'][0][\'fid\']);
print \'<a href="/node/\'.$node_id.\'"><img src="\'.file_create_url($file->uri).\'"/></a>\';
?>';
$handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
/* Field: Apache Solr: label */
$handler->display->display_options['fields']['label']['id'] = 'label';
$handler->display->display_options['fields']['label']['table'] = 'apachesolr__landlibrary_search';
$handler->display->display_options['fields']['label']['field'] = 'label';
$handler->display->display_options['fields']['label']['label'] = '';
$handler->display->display_options['fields']['label']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['label']['alter']['path'] = '[url]';
$handler->display->display_options['fields']['label']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
/* Field: Apache Solr: teaser */
$handler->display->display_options['fields']['teaser']['id'] = 'teaser';
$handler->display->display_options['fields']['teaser']['table'] = 'apachesolr__landlibrary_search';
$handler->display->display_options['fields']['teaser']['field'] = 'teaser';
$handler->display->display_options['fields']['teaser']['label'] = '';
$handler->display->display_options['fields']['teaser']['exclude'] = TRUE;
$handler->display->display_options['fields']['teaser']['element_label_colon'] = FALSE;
/* Field: Global: PHP */
$handler->display->display_options['fields']['php_2']['id'] = 'php_2';
$handler->display->display_options['fields']['php_2']['table'] = 'views';
$handler->display->display_options['fields']['php_2']['field'] = 'php';
$handler->display->display_options['fields']['php_2']['label'] = '';
$handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php_2']['php_output'] = '<?php 
$desc = str_replace(\'Description:\',\'<b>Description:</b>\',$row->teaser);
print $desc;
print(\'...\');
?>';
$handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
/* Field: Apache Solr: im_field_doc_keyword */
$handler->display->display_options['fields']['im_field_doc_keyword']['id'] = 'im_field_doc_keyword';
$handler->display->display_options['fields']['im_field_doc_keyword']['table'] = 'apachesolr__landlibrary_search';
$handler->display->display_options['fields']['im_field_doc_keyword']['field'] = 'im_field_doc_keyword';
$handler->display->display_options['fields']['im_field_doc_keyword']['label'] = '';
$handler->display->display_options['fields']['im_field_doc_keyword']['exclude'] = TRUE;
$handler->display->display_options['fields']['im_field_doc_keyword']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['im_field_doc_keyword']['element_type'] = 'h3';
$handler->display->display_options['fields']['im_field_doc_keyword']['element_label_colon'] = FALSE;
/* Field: Global: PHP */
$handler->display->display_options['fields']['php']['id'] = 'php';
$handler->display->display_options['fields']['php']['table'] = 'views';
$handler->display->display_options['fields']['php']['field'] = 'php';
$handler->display->display_options['fields']['php']['label'] = 'Keywords';
$handler->display->display_options['fields']['php']['element_type'] = 'span';
$handler->display->display_options['fields']['php']['element_class'] = 'search-block-keyword';
$handler->display->display_options['fields']['php']['element_label_type'] = 'strong';
$handler->display->display_options['fields']['php']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['php']['use_php_setup'] = 0;
$handler->display->display_options['fields']['php']['php_output'] = '<?php
$termList = \'\';
$terms = taxonomy_term_load_multiple($row->im_field_doc_keyword);
$prefix = \'\';
foreach ($terms as $term)
{
    $termList .= $prefix . \'<a href="/library/search?keyword=\'.$term->name.\'">\' . $term->name . \'</a>\' ;
    $prefix = \', \';
}
 $termList = rtrim($termList, ",");
if ($termList == \'\')
 print "-";
else {
print $termList;
}
?>';
$handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
$handler->display->display_options['fields']['php']['php_click_sortable'] = '';
/* Filter criterion: Apache Solr: Search */
$handler->display->display_options['filters']['keyword']['id'] = 'keyword';
$handler->display->display_options['filters']['keyword']['table'] = 'apachesolr__landlibrary_search';
$handler->display->display_options['filters']['keyword']['field'] = 'keyword';
$handler->display->display_options['filters']['keyword']['exposed'] = TRUE;
$handler->display->display_options['filters']['keyword']['expose']['operator_id'] = '';
$handler->display->display_options['filters']['keyword']['expose']['operator'] = 'keyword_op';
$handler->display->display_options['filters']['keyword']['expose']['identifier'] = 'keyword';
$handler->display->display_options['filters']['keyword']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  111731461 => 0,
  25521343 => 0,
  111903910 => 0,
  30037204 => 0,
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['path'] = 'library/search';
$translatables['library_search'] = array(
  t('Master'),
  t('Library Search'),
  t('more'),
  t('Search'),
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
  t('No results found.'),
  t('Keywords'),
  t('Page'),
);


    return $view;
}
