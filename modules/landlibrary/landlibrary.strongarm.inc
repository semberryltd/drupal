<?php
/**
 * @file
 * landlibrary.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landlibrary_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_general_feed';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_landlibrary_resource';
  $strongarm->value = 'edit-auto-nodetitle';
  $export['additional_settings__active_tab_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_organization';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_person';
  $strongarm->value = 'edit-comment';
  $export['additional_settings__active_tab_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_subject_browse';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_subject_browse_item';
  $strongarm->value = 'edit-workflow';
  $export['additional_settings__active_tab_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_general_feed';
  $strongarm->value = '0';
  $export['ant_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_landlibrary_resource';
  $strongarm->value = '0';
  $export['ant_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_organization';
  $strongarm->value = '0';
  $export['ant_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_general_feed';
  $strongarm->value = '';
  $export['ant_pattern_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_landlibrary_resource';
  $strongarm->value = '[node:field_doc_title]';
  $export['ant_pattern_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_organization';
  $strongarm->value = '';
  $export['ant_pattern_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_person';
  $strongarm->value = '';
  $export['ant_pattern_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_subject_browse';
  $strongarm->value = '';
  $export['ant_pattern_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_pattern_subject_browse_item';
  $strongarm->value = '';
  $export['ant_pattern_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_person';
  $strongarm->value = '0';
  $export['ant_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_general_feed';
  $strongarm->value = 0;
  $export['ant_php_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_landlibrary_resource';
  $strongarm->value = 0;
  $export['ant_php_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_organization';
  $strongarm->value = 0;
  $export['ant_php_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_person';
  $strongarm->value = 0;
  $export['ant_php_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_subject_browse';
  $strongarm->value = 0;
  $export['ant_php_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_php_subject_browse_item';
  $strongarm->value = 0;
  $export['ant_php_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_subject_browse';
  $strongarm->value = '0';
  $export['ant_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_subject_browse_item';
  $strongarm->value = '0';
  $export['ant_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_default_environment';
  $strongarm->value = 'solr';
  $export['apachesolr_default_environment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_mlt_blocks';
  $strongarm->value = array(
    'mlt-001' => array(
      'name' => 'Read more content like this',
      'mlt_env_id' => 'solr',
      'num_results' => '5',
      'mlt_fl' => array(
        'label' => 'label',
        'taxonomy_names' => 'taxonomy_names',
        'tm_vid_3_names' => 'tm_vid_3_names',
        'tm_vid_5_names' => 'tm_vid_5_names',
        'tm_vid_7_names' => 'tm_vid_7_names',
      ),
      'mlt_mintf' => '1',
      'mlt_mindf' => '1',
      'mlt_minwl' => '3',
      'mlt_maxwl' => '15',
      'mlt_maxqt' => '20',
      'mlt_type_filters' => array(
        'landlibrary_resource' => 'landlibrary_resource',
        'page' => 'page',
        'blog_post' => 'blog_post',
        'debate' => 'debate',
        'event' => 'event',
        'news' => 'news',
        'organization' => 'organization',
      ),
      'mlt_custom_filters' => '',
      'delta' => 'mlt-001',
    ),
  );
  $export['apachesolr_search_mlt_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_site_hash';
  $strongarm->value = 'fdaebq';
  $export['apachesolr_site_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_page';
  $strongarm->value = 0;
  $export['comment_anonymous_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_rss_issue_briefs_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_type_browse';
  $strongarm->value = 0;
  $export['comment_anonymous_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_worldbank_feed';
  $strongarm->value = 0;
  $export['comment_anonymous_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_page';
  $strongarm->value = 0;
  $export['comment_default_mode_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_rss_issue_briefs_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_type_browse';
  $strongarm->value = 1;
  $export['comment_default_mode_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_worldbank_feed';
  $strongarm->value = 1;
  $export['comment_default_mode_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_page';
  $strongarm->value = '50';
  $export['comment_default_per_page_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_rss_issue_briefs_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_type_browse';
  $strongarm->value = '50';
  $export['comment_default_per_page_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_worldbank_feed';
  $strongarm->value = '50';
  $export['comment_default_per_page_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_page';
  $strongarm->value = 1;
  $export['comment_form_location_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_rss_issue_briefs_feed';
  $strongarm->value = 1;
  $export['comment_form_location_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_type_browse';
  $strongarm->value = 1;
  $export['comment_form_location_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_worldbank_feed';
  $strongarm->value = 1;
  $export['comment_form_location_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_page';
  $strongarm->value = '1';
  $export['comment_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_rss_issue_briefs_feed';
  $strongarm->value = '1';
  $export['comment_preview_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_type_browse';
  $strongarm->value = '1';
  $export['comment_preview_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_worldbank_feed';
  $strongarm->value = '1';
  $export['comment_preview_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_rss_issue_briefs_feed';
  $strongarm->value = '2';
  $export['comment_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_landlibrary_resource';
  $strongarm->value = 1;
  $export['comment_subject_field_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_page';
  $strongarm->value = 0;
  $export['comment_subject_field_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_rss_issue_briefs_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_type_browse';
  $strongarm->value = 1;
  $export['comment_subject_field_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_worldbank_feed';
  $strongarm->value = 1;
  $export['comment_subject_field_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_type_browse';
  $strongarm->value = '2';
  $export['comment_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_worldbank_feed';
  $strongarm->value = '2';
  $export['comment_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_block_rebuild_needed';
  $strongarm->value = TRUE;
  $export['context_block_rebuild_needed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_key';
  $strongarm->value = '-eBZw9qC7ECXzjmM-QPU8EFEKOtB1PEOaN7m9vsGOfM';
  $export['cron_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_last';
  $strongarm->value = 1441969450;
  $export['cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cron_safe_threshold';
  $strongarm->value = '3600';
  $export['cron_safe_threshold'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'css_js_query_string';
  $strongarm->value = 'nuicqo';
  $export['css_js_query_string'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ctools_last_cron';
  $strongarm->value = 1441942933;
  $export['ctools_last_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_api_version';
  $strongarm->value = '7.2';
  $export['date_api_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'Europe/Rome';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_day_format_without_year';
  $strongarm->value = 'l, F j';
  $export['date_views_day_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_day_format_with_year';
  $strongarm->value = 'l, F j, Y';
  $export['date_views_day_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_month_format_without_year';
  $strongarm->value = 'F';
  $export['date_views_month_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_month_format_with_year';
  $strongarm->value = 'F Y';
  $export['date_views_month_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_week_format_without_year';
  $strongarm->value = 'F j';
  $export['date_views_week_format_without_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_views_week_format_with_year';
  $strongarm->value = 'F j, Y';
  $export['date_views_week_format_with_year'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dblog_row_limit';
  $strongarm->value = '1000';
  $export['dblog_row_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_importer';
  $strongarm->value = array(
    'agris_conference_preimporter' => FALSE,
    'agris_filter' => FALSE,
    'agris_organization_preimporter' => FALSE,
    'clone2_agris_file' => FALSE,
    'countries_taxonomy_iso_and_external_uris_importer' => FALSE,
    'fao_importer' => FALSE,
    'fao_preimport_authors' => FALSE,
    'fao_pub_importer' => TRUE,
    'ifpri_batch_file_importer' => FALSE,
    'ifpri_creator_preimporter' => FALSE,
    'landcoalition_events_rss_import' => FALSE,
    'landcoalition_rss_import' => FALSE,
    'rss_usaid_commentary_importer' => FALSE,
    'rss_usaid_issue_briefs_importer_' => FALSE,
    'topic_taxonomy_land_terms_importer' => FALSE,
    'node' => FALSE,
    'user' => FALSE,
    'feed' => FALSE,
    'opml' => FALSE,
  );
  $export['default_feeds_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_feeds_tamper';
  $strongarm->value = array(
    'ifpri_ingestion-xpathparser_6-implode' => TRUE,
    'ifpri_ingestion-xpathparser_8-html_entity_decode' => FALSE,
    'ifpri_ingestion-xpathparser_3-html_entity_decode' => FALSE,
    'ifpri_ingestion-xpathparser_6-find_replace' => TRUE,
    'ifpri_ingestion-xpathparser_6-implode_questionmark' => TRUE,
    'ifpri_ingestion-xpathparser_6-explode' => FALSE,
    'ifpri_ingestion-xpathparser_6-reduce_to_single_element' => TRUE,
    'ifpri_ingestion-xpathparser_14-reduce_to_single_element' => TRUE,
    'ifpri_set_p15738coll3-xpathparser_14-reduce_to_single_element' => FALSE,
    'ifpri_set_p15738coll3-xpathparser_6-efq_finder' => TRUE,
    'ifpri_set_p15738coll3-xpathparser_6-reduce_to_single_element' => FALSE,
    'ifpri_ingestion-xpathparser_6-reduce_to_single_element1' => TRUE,
    'agris-xpathparser_0-strip_tags' => FALSE,
    'agris-xpathparser_0-html_entity_decode' => FALSE,
    'agris-xpathparser_1-html_entity_decode' => FALSE,
    'agris-xpathparser_1-strip_tags' => FALSE,
    'agris-xpathparser_2-strip_tags' => FALSE,
    'agris-xpathparser_0-find_replace_regex' => FALSE,
    'agris-xpathparser_1-find_replace_regex' => FALSE,
    'agris-xpathparser_2-find_replace_regex' => FALSE,
    'agris-xpathparser_3-strip_tags' => FALSE,
    'agris-xpathparser_3-html_entity_decode' => FALSE,
    'agris-xpathparser_4-strip_tags' => FALSE,
    'agris-xpathparser_4-html_entity_decode' => FALSE,
    'agris-xpathparser_4-find_replace_regex' => FALSE,
    'agris-xpathparser_5-hash' => TRUE,
    'ifpri_ingestion-xpathparser_9-strip_tags' => FALSE,
    'ifpri_ingestion-xpathparser_9-html_entity_decode' => FALSE,
    'ifpri_ingestion-xpathparser_12-strip_tags' => TRUE,
    'ifpri_ingestion-xpathparser_11-strip_tags' => TRUE,
    'agris-xpathparser_13-required' => TRUE,
    'ifpri_ingestion-xpathparser_0-html_entity_decode' => FALSE,
    'ifpri_ingestion-xpathparser_1-html_entity_decode' => FALSE,
    'ifpri_ingestion-xpathparser_12-strip_tags12' => FALSE,
    'ifpri_ingestion-xpathparser_21-explode' => TRUE,
    'ifpri_ingestion-xpathparser_21-implode' => TRUE,
    'ifpri_ingestion-xpathparser_22-explode' => TRUE,
    'ifpri_ingestion-xpathparser_23-sprintf' => FALSE,
    'agris-xpathparser_18-strip_tags' => FALSE,
    'agris-xpathparser_18-find_replace_regex' => FALSE,
    'agris-xpathparser_18-explode' => FALSE,
    'agris-xpathparser_15-sprintf' => FALSE,
    'agris_filter-xpathparser_0-strip_tags' => TRUE,
    'agris_filter-xpathparser_0-html_entity_decode' => TRUE,
    'agris_filter-xpathparser_0-find_replace_regex' => TRUE,
    'agris_filter-xpathparser_1-strip_tags' => TRUE,
    'agris_filter-xpathparser_1-html_entity_decode' => TRUE,
    'agris_filter-xpathparser_1-find_replace_regex' => FALSE,
    'agris_filter-xpathparser_3-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_2-find_replace_regex' => TRUE,
    'agris_filter-xpathparser_2-strip_tags' => TRUE,
    'agris_filter-xpathparser_3-strip_tags' => FALSE,
    'agris_filter-xpathparser_4-find_replace_regex' => TRUE,
    'agris_filter-xpathparser_4-strip_tags' => TRUE,
    'agris_filter-xpathparser_7-sprintf' => TRUE,
    'agris_filter-xpathparser_9-strip_tags' => TRUE,
    'agris_filter-xpathparser_9-find_replace_regex' => TRUE,
    'agris_filter-xpathparser_9-explode' => FALSE,
    'clone_agris_file-xpathparser_9-strip_tags' => FALSE,
    'clone_agris_file-xpathparser_0-strip_tags' => FALSE,
    'clone_agris_file-xpathparser_0-html_entity_decode' => FALSE,
    'clone_agris_file-xpathparser_1-strip_tags' => FALSE,
    'clone_agris_file-xpathparser_1-html_entity_decode' => FALSE,
    'clone_agris_file-xpathparser_9-string2id' => FALSE,
    'clone2_agris_file-xpathparser_0-strip_tags' => TRUE,
    'clone2_agris_file-xpathparser_0-html_entity_decode' => FALSE,
    'clone2_agris_file-xpathparser_1-strip_tags' => TRUE,
    'clone2_agris_file-xpathparser_2-strip_tags' => FALSE,
    'clone2_agris_file-xpathparser_3-hash' => FALSE,
    'clone2_agris_file-xpathparser_3-strip_tags' => TRUE,
    'clone2_agris_file-xpathparser_2-hash' => TRUE,
    'clone2_agris_file-xpathparser_5-strip_tags' => TRUE,
    'clone_agris_file-xpathparser_8-find_replace_regex' => FALSE,
    'clone2_agris_file-xpathparser_1-explode' => FALSE,
    'clone2_agris_file-xpathparser_5-explode' => TRUE,
    'clone2_agris_file-xpathparser_1-reduce_to_single_element' => TRUE,
    'clone2_agris_file-xpathparser_5-reduce_to_single_element' => TRUE,
    'clone2_agris_file-xpathparser_1-find_replace' => FALSE,
    'clone_agris_file-xpathparser_10-strip_tags' => FALSE,
    'clone_agris_file-xpathparser_10-string2id' => FALSE,
    'agris_organization_preimporter-xpathparser_0-strip_tags' => TRUE,
    'agris_organization_preimporter-xpathparser_0-html_entity_decode' => TRUE,
    'agris_organization_preimporter-xpathparser_0-find_replace' => TRUE,
    'agris_organization_preimporter-xpathparser_1-strip_tags' => TRUE,
    'agris_organization_preimporter-xpathparser_1-html_entity_decode' => FALSE,
    'agris_organization_preimporter-xpathparser_0-copy' => FALSE,
    'agris_organization_preimporter-xpathparser_1-copy' => TRUE,
    'agris_organization_preimporter-xpathparser_1-required' => TRUE,
    'agris_organization_preimporter-xpathparser_1-rewrite' => TRUE,
    'agris_organization_preimporter-xpathparser_0-rewrite' => TRUE,
    'agris_organization_preimporter-xpathparser_0-find_replace_regex' => TRUE,
    'agris_organization_preimporter-xpathparser_0-strip_tags2' => TRUE,
    'agris_organization_preimporter-xpathparser_0-find_replaces' => TRUE,
    'agris_organization_preimporter-xpathparser_1-find_replace' => FALSE,
    'agris_organization_preimporter-xpathparser_1-find_replaces' => FALSE,
    'agris_filter-xpathparser_0-find_replace' => FALSE,
    'agris_filter-xpathparser_1-find_replace' => FALSE,
    'agris_filter-xpathparser_2-find_replace' => FALSE,
    'agris_filter-xpathparser_3-find_replace' => FALSE,
    'agris_filter-xpathparser_4-find_replace' => TRUE,
    'agris_filter-xpathparser_5-find_replace' => FALSE,
    'agris_filter-xpathparser_5-find_replaces' => FALSE,
    'agris_filter-xpathparser_6-find_replace' => FALSE,
    'agris_filter-xpathparser_6-find_replaces' => FALSE,
    'agris_filter-xpathparser_7-find_replace' => TRUE,
    'agris_filter-xpathparser_7-find_replaces' => TRUE,
    'agris_filter-xpathparser_8-find_replace' => FALSE,
    'agris_filter-xpathparser_8-find_replaces' => FALSE,
    'agris_filter-xpathparser_9-find_replace' => FALSE,
    'agris_filter-xpathparser_9-find_replaces' => FALSE,
    'agris_filter-xpathparser_10-find_replace' => FALSE,
    'agris_filter-xpathparser_10-find_replaces' => FALSE,
    'agris_filter-xpathparser_0-find_replaces' => FALSE,
    'agris_filter-xpathparser_1-find_replaces' => FALSE,
    'agris_filter-xpathparser_2-find_replaces' => FALSE,
    'agris_filter-xpathparser_3-find_replaces' => FALSE,
    'agris_filter-xpathparser_4-find_replaces' => TRUE,
    'agris_filter-xpathparser_6-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_2-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_8-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_4-html_entity_decode' => TRUE,
    'agris_filter-xpathparser_5-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_9-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_10-html_entity_decode' => FALSE,
    'clone2_agris_file-xpathparser_0-find_replace' => FALSE,
    'clone2_agris_file-xpathparser_0-find_replaces' => FALSE,
    'clone2_agris_file-xpathparser_5-find_replace' => FALSE,
    'clone2_agris_file-xpathparser_1-find_replacea' => FALSE,
    'clone2_agris_file-xpathparser_5-find_replaces' => FALSE,
    'clone2_agris_file-xpathparser_1-find_replaces' => FALSE,
    'clone2_agris_file-xpathparser_5-html_entity_decode' => FALSE,
    'clone2_agris_file-xpathparser_1-html_entity_decode' => FALSE,
    'agris_filter-xpathparser_11-find_replace' => TRUE,
    'agris_filter-xpathparser_11-find_replaces' => TRUE,
    'agris_filter-xpathparser_11-html_entity_decode' => TRUE,
    'agris_conference_preimporter-xpathparser_0-find_replace' => FALSE,
    'agris_conference_preimporter-xpathparser_0-find_replaces' => FALSE,
    'agris_conference_preimporter-xpathparser_0-html_entity_decode' => TRUE,
    'agris_filter-xpathparser_4-default_value' => TRUE,
    'clone2_agris_file-xpathparser_0-implode' => FALSE,
    'clone2_agris_file-xpathparser_1-implode' => FALSE,
    'clone2_agris_file-xpathparser_5-implode' => FALSE,
    'clone2_agris_file-xpathparser_0-truncate_text' => FALSE,
    'clone2_agris_file-xpathparser_1-truncate_text' => FALSE,
    'agris_filter-xpathparser_11-implode' => TRUE,
    'agris_filter-xpathparser_11-truncate_text' => TRUE,
    'clone2_agris_file-xpathparser_5-truncate_text' => FALSE,
    'agris_conference_preimporter-xpathparser_0-truncate_text' => FALSE,
    'agris_filter-parent_taxonomy_languages-copy' => TRUE,
    'agris_filter-xpathparser_12-default_value' => FALSE,
    'ifpri_ingestion-xpathparser_26-default_value' => FALSE,
    'ifpri_batch_file_importer-xpathparser_0-html_entity_decode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_1-html_entity_decode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_5-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_15-default_value' => FALSE,
    'ifpri_batch_file_importer-xpathparser_6-html_entity_decode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_16-sprintf' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-find_replace' => FALSE,
    'ifpri_creator_preimporter-xpathparser_1-find_replace' => TRUE,
    'agris_filter-xpathparser_14-find_replace' => FALSE,
    'agris_filter-xpathparser_14-find_replace1' => FALSE,
    'agris_filter-xpathparser_15-find_replace' => TRUE,
    'agris_filter-xpathparser_15-find_replace1' => TRUE,
    'agris_filter-xpathparser_12-default_valuefao' => TRUE,
    'agris_filter-xpathparser_2-explode' => FALSE,
    'agris_filter-xpathparser_2-array_filter' => FALSE,
    'agris_filter-xpathparser_6-array_filter' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-explode' => FALSE,
    'ifpri_creator_preimporter-xpathparser_1-explode' => FALSE,
    'agris_filter-xpathparser_2-php_code' => TRUE,
    'agris_filter-xpathparser_2-find_replace1' => TRUE,
    'agris_filter-xpathparser_4-required' => FALSE,
    'agris_filter-xpathparser_3-required' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-reduce_to_single_element' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-keyword_filter' => FALSE,
    'ifpri_batch_file_importer-xpathparser_6-keyword_filter' => TRUE,
    'ifpri_batch_file_importer-xpathparser_6-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_7-strip_tags' => FALSE,
    'ifpri_batch_file_importer-xpathparser_7-html_entity_decode' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_0-explode' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_0-reduce_to_single_element' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_0-keyword_filter' => TRUE,
    'ifpri_creator_preimporter2-xpathparser_0-find_replace' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_2-find_replace' => FALSE,
    'ifpri_batch_file_importer-xpathparser_13-keyword_filter' => FALSE,
    'ifpri_batch_file_importer-xpathparser_14-keyword_filter' => FALSE,
    'ifpri_batch_file_importer-xpathparser_19-required' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_2-find_replace1' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_2-find_replace3' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_2-explode' => FALSE,
    'ifpri_creator_preimporter2-xpathparser_2-reduce_to_single_element' => FALSE,
    'ifpri_batch_file_importer-xpathparser_7-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_12-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_12-reduce_to_single_element' => FALSE,
    'ifpri_batch_file_importer-xpathparser_20-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_20-reduce_to_single_element' => FALSE,
    'ifpri_batch_file_importer-xpathparser_4-find_replace' => FALSE,
    'ifpri_batch_file_importer-xpathparser_4-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_4-reduce_to_single_element' => FALSE,
    'legacy_ll_crawler-xpathparser_9-strip_tags' => FALSE,
    'legacy_ll_crawler-xpathparser_9-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_4-strip_tags' => FALSE,
    'legacy_ll_crawler-xpathparser_5-find_replace' => FALSE,
    'legacy_ll_crawler-xpathparser_6-find_replace' => FALSE,
    'legacy_ll_crawler-xpathparser_5-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_6-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_8-html_entity_encode' => FALSE,
    'legacy_ll_crawler-xpathparser_3-strip_tags' => FALSE,
    'legacy_ll_crawler-xpathparser_3-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_4-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_7-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_8-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_11-html_entity_decode' => FALSE,
    'legacy_ll_crawler-xpathparser_11-strtotime' => FALSE,
    'ifpri_batch_file_importer-xpathparser_21-strip_tags' => FALSE,
    'ifpri_batch_file_importer-xpathparser_21-html_entity_decode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_21-required' => FALSE,
    'ingest_from_oai_data_source-language-required' => FALSE,
    'ingest_from_oai_data_source-description-required' => FALSE,
    'ingest_from_oai_data_source-title-required' => FALSE,
    'agris_organization_preimporter-xpathparser_1-find_replace1' => FALSE,
    'agris_filter-xpathparser_0-find_replace_regex1' => FALSE,
    'agris_filter-xpathparser_0-trim' => FALSE,
    'agris_filter-xpathparser_1-trim' => FALSE,
    'agris_filter-xpathparser_2-trim' => FALSE,
    'agris_filter-xpathparser_3-trim' => FALSE,
    'agris_filter-xpathparser_4-default_value1' => FALSE,
    'agris_filter-xpathparser_5-trim' => FALSE,
    'agris_filter-xpathparser_6-trim' => FALSE,
    'agris_filter-xpathparser_7-trim' => FALSE,
    'agris_filter-xpathparser_8-trim' => FALSE,
    'agris_filter-xpathparser_9-find_replace_regexx' => FALSE,
    'agris_filter-xpathparser_9-trim' => FALSE,
    'agris_filter-xpathparser_10-find_replace_regex' => FALSE,
    'agris_filter-xpathparser_10-strip_tags' => FALSE,
    'agris_filter-xpathparser_10-trim' => FALSE,
    'agris_filter-xpathparser_11-trim' => FALSE,
    'agris_filter-xpathparser_12-trim' => FALSE,
    'agris_filter-xpathparser_13-default_value' => FALSE,
    'agris_filter-xpathparser_14-trim' => FALSE,
    'agris_filter-xpathparser_16-default_value' => FALSE,
    'agris_filter-xpathparser_17-required' => FALSE,
    'agris_filter-xpathparser_17-trim' => FALSE,
    'agris_filter-xpathparser_18-find_replace' => FALSE,
    'agris_filter-xpathparser_18-find_replacee' => FALSE,
    'agris_filter-xpathparser_18-trim' => FALSE,
    'agris_filter-xpathparser_19-find_replace' => FALSE,
    'agris_filter-xpathparser_19-find_replacew' => FALSE,
    'agris_filter-xpathparser_19-trim' => FALSE,
    'agris_filter-xpathparser_20-find_replace' => FALSE,
    'agris_filter-xpathparser_20-find_replace1' => FALSE,
    'agris_filter-xpathparser_20-trim' => FALSE,
    'agris_filter-xpathparser_21-find_replace' => FALSE,
    'agris_filter-xpathparser_21-find_replace5' => FALSE,
    'agris_filter-xpathparser_21-trim' => FALSE,
    'agris_filter-xpathparser_24-find_replace' => FALSE,
    'agris_filter-xpathparser_24-find_replace123' => FALSE,
    'agris_filter-xpathparser_24-trim' => FALSE,
    'agris_filter-xpathparser_22-find_replace' => FALSE,
    'agris_filter-xpathparser_22-find_replacexxx' => FALSE,
    'agris_filter-xpathparser_23-trim' => FALSE,
    'agris_filter-xpathparser_23-find_replace' => FALSE,
    'agris_filter-xpathparser_23-find_replace0' => FALSE,
    'agris_filter-xpathparser_22-trim' => FALSE,
    'clone2_agris_file-xpathparser_1-find_replace_regex' => FALSE,
    'clone2_agris_file-xpathparser_1-find_replaceq' => FALSE,
    'clone2_agris_file-xpathparser_1-trim' => FALSE,
    'clone2_agris_file-xpathparser_5-copy' => TRUE,
    'agris_conference_preimporter-xpathparser_0-find_replacee' => FALSE,
    'agris_conference_preimporter-xpathparser_0-trim' => FALSE,
    'agris_organization_preimporter-xpathparser_1-trim' => FALSE,
    'agris_filter-xpathparser_0-reduce_to_single_element' => FALSE,
    'agris_filter-xpathparser_3-reduce_to_single_element' => FALSE,
    'agris_filter-xpathparser_1-reduce_to_single_element' => FALSE,
    'agris_filter-xpathparser_25-copy' => FALSE,
    'ifpri_batch_file_importer-xpathparser_0-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_1-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_2-find_replace' => FALSE,
    'ifpri_batch_file_importer-xpathparser_3-find_replace' => FALSE,
    'ifpri_batch_file_importer-xpathparser_6-strip_tags' => FALSE,
    'ifpri_batch_file_importer-xpathparser_7-default_value' => FALSE,
    'ifpri_batch_file_importer-xpathparser_8-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_8-array_order' => FALSE,
    'ifpri_batch_file_importer-xpathparser_8-reduce_to_single_element_bynum' => FALSE,
    'ifpri_batch_file_importer-xpathparser_8-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_13-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_13-array_order' => FALSE,
    'ifpri_batch_file_importer-xpathparser_13-reduce_to_single_element_bynum' => TRUE,
    'ifpri_batch_file_importer-xpathparser_13-reduce_to_single_element' => FALSE,
    'ifpri_batch_file_importer-xpathparser_13-reduce_to_single_elementw' => TRUE,
    'ifpri_batch_file_importer-xpathparser_14-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_14-array_order' => FALSE,
    'ifpri_batch_file_importer-xpathparser_14-reduce_to_single_element_bynum' => FALSE,
    'ifpri_batch_file_importer-xpathparser_19-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_20-strip_tags' => FALSE,
    'ifpri_batch_file_importer-xpathparser_20-trim' => FALSE,
    'ifpri_batch_file_importer-xpathparser_21-default_value' => FALSE,
    'ifpri_batch_file_importer-xpathparser_22-explode' => FALSE,
    'ifpri_batch_file_importer-xpathparser_23-explode' => FALSE,
    'clone2_agris_file-xpathparser_1-create_mul_nodes' => FALSE,
    'fao_importer-xpathparser_0-strip_tags' => FALSE,
    'fao_importer-xpathparser_0-find_replace_regex' => FALSE,
    'fao_importer-xpathparser_0-reduce_to_single_element' => FALSE,
    'fao_importer-xpathparser_0-trim' => FALSE,
    'fao_importer-xpathparser_1-strip_tags' => FALSE,
    'fao_importer-xpathparser_1-html_entity_decode' => FALSE,
    'fao_importer-xpathparser_1-required' => FALSE,
    'fao_importer-xpathparser_1-trim' => FALSE,
    'fao_importer-xpathparser_2-timetodate' => FALSE,
    'fao_importer-xpathparser_3-find_replace' => FALSE,
    'fao_importer-xpathparser_6-trim' => FALSE,
    'fao_importer-xpathparser_9-default_value' => FALSE,
    'fao_importer-xpathparser_10-find_replace' => FALSE,
    'fao_importer-xpathparser_10-find_replacef' => FALSE,
    'fao_importer-xpathparser_10-ddfind_replace' => FALSE,
    'fao_importer-xpathparser_10-explode' => FALSE,
    'fao_importer-xpathparser_10-trim' => FALSE,
    'fao_importer-xpathparser_14-default_value' => FALSE,
    'fao_importer-xpathparser_19-default_value' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-find_replacef' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-create_mul_nodes' => FALSE,
    'ifpri_creator_preimporter-xpathparser_0-trim' => FALSE,
    'fao_preimport_authors-xpathparser_0-find_replace' => FALSE,
    'fao_preimport_authors-xpathparser_0-ffind_replace' => FALSE,
    'fao_preimport_authors-xpathparser_0-find_replacer' => FALSE,
    'fao_preimport_authors-xpathparser_0-explode' => FALSE,
    'fao_preimport_authors-xpathparser_0-trim' => FALSE,
    'fao_preimport_authors-xpathparser_0-create_mul_nodes' => FALSE,
    'landcoalition_events_rss_import-description-strip_tags' => FALSE,
    'landcoalition_events_rss_import-description-required' => FALSE,
    'landcoalition_events_rss_import-description-html_entity_decode' => FALSE,
    'landcoalition_rss_import-title-strip_tags' => FALSE,
    'landcoalition_rss_import-title-required' => FALSE,
    'landcoalition_rss_import-description-html_entity_decode' => FALSE,
    'landcoalition_rss_import-description-strip_tags' => FALSE,
    'landcoalition_rss_import-description-required' => FALSE,
    'landcoalition_rss_import-guid-explode' => FALSE,
    'landcoalition_rss_import-guid-reduce_to_single_element' => FALSE,
    'landcoalition_rss_import-blank_source_1-default_value' => FALSE,
    'landcoalition_rss_import-blank_source_2-default_value' => FALSE,
    'landcoalition_rss_import-blank_source_3-default_value' => FALSE,
    'landcoalition_rss_import-blank_source_4-default_value' => FALSE,
    'rss_usaid_commentary_importer-title-required' => FALSE,
    'rss_usaid_commentary_importer-title-strip_tags' => FALSE,
    'rss_usaid_commentary_importer-title-trim' => FALSE,
    'rss_usaid_commentary_importer-description-strip_tags' => FALSE,
    'rss_usaid_commentary_importer-description-html_entity_decode' => FALSE,
    'rss_usaid_commentary_importer-description-required' => FALSE,
    'rss_usaid_commentary_importer-url-required' => FALSE,
    'rss_usaid_commentary_importer-guid-required' => FALSE,
    'rss_usaid_commentary_importer-guid-explode' => FALSE,
    'rss_usaid_commentary_importer-guid-reduce_to_single_element' => FALSE,
    'rss_usaid_commentary_importer-blank_source_1-default_value' => FALSE,
    'rss_usaid_commentary_importer-blank_source_2-default_value' => FALSE,
    'rss_usaid_commentary_importer-blank_source_3-default_value' => FALSE,
    'rss_usaid_commentary_importer-blank_source_4-default_value' => FALSE,
    'rss_usaid_issue_briefs_importer_-title-required' => FALSE,
    'rss_usaid_issue_briefs_importer_-title-trim' => FALSE,
    'rss_usaid_issue_briefs_importer_-description-trim' => FALSE,
    'rss_usaid_issue_briefs_importer_-description-strip_tags' => FALSE,
    'rss_usaid_issue_briefs_importer_-description-required' => FALSE,
    'rss_usaid_issue_briefs_importer_-description-html_entity_decode' => FALSE,
    'rss_usaid_issue_briefs_importer_-blank_source_1-default_value' => FALSE,
    'rss_usaid_issue_briefs_importer_-blank_source_2-default_value' => FALSE,
    'rss_usaid_issue_briefs_importer_-blank_source_3-default_value' => FALSE,
    'rss_usaid_issue_briefs_importer_-guid-explode' => FALSE,
    'rss_usaid_issue_briefs_importer_-guid-reduce_to_single_element' => FALSE,
    'rss_usaid_issue_briefs_importer_-blank_source_4-default_value' => FALSE,
    'fao_importer-xpathparser_20-copy' => TRUE,
    'landcoalition_rss_import-parent_uid-copy' => FALSE,
    'fao_importer-xpathparser_0-truncate_text' => FALSE,
    'ifpri_batch_file_importer-xpathparser_0-truncate_text' => TRUE,
    'ifpri_batch_file_importer-xpathparser_0-trim' => FALSE,
    'ifpri_batch_file_importer-xpathparser_6-trim' => FALSE,
    'agris_filter-xpathparser_26-copy' => FALSE,
    'ifpri_batch_file_importer-xpathparser_24-copy' => FALSE,
    'ifpri_batch_file_importer-xpathparser_25-copy' => FALSE,
    'agris_filter-xpathparser_27-copy' => FALSE,
    'ifpri_batch_file_importer-xpathparser_24-required' => FALSE,
    'ifpri_batch_file_importer-xpathparser_26-copy' => FALSE,
    'fao_importer-xpathparser_21-copy' => FALSE,
    'fao_importer-xpathparser_22-copy' => FALSE,
    'fao_importer-xpathparser_20-strip_tags' => FALSE,
    'fao_importer-xpathparser_20-find_replace' => FALSE,
    'fao_importer-xpathparser_20-find_replacef' => FALSE,
    'fao_importer-xpathparser_20-find_replace_regex' => FALSE,
    'fao_importer-xpathparser_20-truncate_text' => FALSE,
    'fao_importer-xpathparser_20-trim' => FALSE,
    'fao_importer-xpathparser_20-reduce_to_single_element' => FALSE,
  );
  $export['default_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_field_group';
  $strongarm->value = array(
    'group_about|node|debate|form' => FALSE,
    'group_status|node|debate|form' => FALSE,
    'group_st|node|debate|form' => TRUE,
    'group_st_extra|node|debate|form' => TRUE,
    'group_opt|node|news|form' => FALSE,
    'group_about|node|event|form' => FALSE,
    'group_details|node|event|form' => FALSE,
    'group_about|node|organization|form' => FALSE,
  );
  $export['default_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_http_request_fails';
  $strongarm->value = FALSE;
  $export['drupal_http_request_fails'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'drupal_private_key';
  $strongarm->value = 'B5NWEfxu6-WzZzsK1ZuVTBuDQIX_88XYvZmJhV_7QVI';
  $export['drupal_private_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elysia_cron_last_context';
  $strongarm->value = 'default';
  $export['elysia_cron_last_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elysia_cron_last_run';
  $strongarm->value = 1441969442;
  $export['elysia_cron_last_run'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'elysia_cron_version';
  $strongarm->value = 20111020;
  $export['elysia_cron_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityreference:base-tables';
  $strongarm->value = array(
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'comment' => array(
      0 => 'comment',
      1 => 'cid',
    ),
    'i18n_translation' => array(
      0 => 'i18n_translation_set',
      1 => 'tsid',
    ),
    'mailchimp_signup' => array(
      0 => 'mailchimp_signup',
      1 => 'mcs_id',
    ),
    'search_api_server' => array(
      0 => 'search_api_server',
      1 => 'id',
    ),
    'search_api_index' => array(
      0 => 'search_api_index',
      1 => 'id',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'rules_config' => array(
      0 => 'rules_config',
      1 => 'id',
    ),
  );
  $export['entityreference:base-tables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '0';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'facetapi:block_cache:apachesolr@solr';
  $strongarm->value = -1;
  $export['facetapi:block_cache:apachesolr@solr'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_menu_links_menus';
  $strongarm->value = array(
    'menu-consult-the-library' => 'menu-consult-the-library',
    'landdebate-menu' => 'landdebate-menu',
    'devel' => 'devel',
    'features' => 'features',
    'landbook-menu' => 'landbook-menu',
    'user-menu' => 'user-menu',
    'main-menu' => 'main-menu',
    'management' => 'management',
    'navigation' => 'navigation',
  );
  $export['features_admin_menu_links_menus'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_apachesolr_environment';
  $strongarm->value = 1;
  $export['features_admin_show_component_apachesolr_environment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_apachesolr_search_page';
  $strongarm->value = 1;
  $export['features_admin_show_component_apachesolr_search_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ckeditor_profile';
  $strongarm->value = 1;
  $export['features_admin_show_component_ckeditor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_context';
  $strongarm->value = 1;
  $export['features_admin_show_component_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ctools';
  $strongarm->value = 1;
  $export['features_admin_show_component_ctools'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_dependencies';
  $strongarm->value = 1;
  $export['features_admin_show_component_dependencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_fields';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_field_settings';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_field_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_layout_settings';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_layout_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_vd';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_ds_view_modes';
  $strongarm->value = 1;
  $export['features_admin_show_component_ds_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_elysia_cron';
  $strongarm->value = 1;
  $export['features_admin_show_component_elysia_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_facetapi';
  $strongarm->value = 1;
  $export['features_admin_show_component_facetapi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_feeds_importer';
  $strongarm->value = 1;
  $export['features_admin_show_component_feeds_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_feeds_tamper';
  $strongarm->value = 1;
  $export['features_admin_show_component_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_base';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_base'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_group';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_field_instance';
  $strongarm->value = 1;
  $export['features_admin_show_component_field_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_file_display';
  $strongarm->value = 1;
  $export['features_admin_show_component_file_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_filter';
  $strongarm->value = 1;
  $export['features_admin_show_component_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_image';
  $strongarm->value = 1;
  $export['features_admin_show_component_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_language';
  $strongarm->value = 1;
  $export['features_admin_show_component_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_menu_custom';
  $strongarm->value = 1;
  $export['features_admin_show_component_menu_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_menu_links';
  $strongarm->value = 1;
  $export['features_admin_show_component_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_node';
  $strongarm->value = 1;
  $export['features_admin_show_component_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_search_api_index';
  $strongarm->value = 1;
  $export['features_admin_show_component_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_search_api_server';
  $strongarm->value = 1;
  $export['features_admin_show_component_search_api_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_taxonomy';
  $strongarm->value = 1;
  $export['features_admin_show_component_taxonomy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_user_permission';
  $strongarm->value = 1;
  $export['features_admin_show_component_user_permission'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_user_role';
  $strongarm->value = 1;
  $export['features_admin_show_component_user_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_entities';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_entities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_node';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_uuid_term';
  $strongarm->value = 1;
  $export['features_admin_show_component_uuid_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_variable';
  $strongarm->value = 1;
  $export['features_admin_show_component_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_admin_show_component_views_view';
  $strongarm->value = 1;
  $export['features_admin_show_component_views_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_codecache';
  $strongarm->value = array(
    'user_account_fields' => array(
      'field_base' => 'aeef332a07e302d53b82feeaaf25b08c',
      'field_instance' => '8997e5b1ef43bc886584227f13ad3b1f',
      'user_permission' => 'bac84756a15b2927dcef4b772f7c2dcb',
      'dependencies' => '633ebff4945d991b94da5059471dcae9',
    ),
    'landbook_nodes' => array(
      'field_base' => 'f87776afbe34dede520cf9342108b11d',
      'field_instance' => '42555825838da63283e728d781d59908',
      'dependencies' => 'a4bf35d75654189496dc596be392ba13',
      'node' => 'e2240ca4056dfe45ec66178dc8e7c950',
    ),
    'landbook_nodes_importers' => array(
      'dependencies' => '981314fbdcdc839f8ba1d10a17259887',
      'feeds_importer' => '37252ef09ebed4b286922c5cd073edf4',
    ),
    'landdebate_content_types' => array(
      'field_base' => 'fea4b308eb3a55ee20b653fb1a4dc13b',
      'field_instance' => 'e5087b7fce112472d15d9e773d501aa7',
      'taxonomy' => '57ad8fed4d3550b4d771ffc638851f02',
      'dependencies' => 'b6250ef114aafe7b3143c3a8d257a996',
      'node' => 'c1ca29a971d8af1d2092e9927f3ee6ed',
      'filter' => '550e4218430d1ffcaf251eeb7bd4af1d',
      'language' => 'fef9f0f346ed3a4d4f92637ff471fce6',
      'wysiwyg' => '6e53eac8f64faa743de05413f1677bcc',
    ),
    'landdebate_permissions' => array(
      'user_permission' => 'a03842db7f23218690f53372b557b534',
      'dependencies' => 'b98c9a1bb5480cc4be50727984e25ff4',
      'user_role' => '6fa1afa9e5038f014fdac74cf9797d91',
    ),
    'landdebate_views' => array(
      'dependencies' => '70c6d525b5b67ca2e227e6583e01382d',
      'views_view' => '4c992d51ab5ec70ae07d890369133b51',
    ),
    'landportal_user' => array(
      'field_instance' => 'ff6e582909d021cf73eded32cf21cd79',
      'user_role' => 'd3c546cc7f1d068869341db7c2f35a64',
      'dependencies' => '210f32221d07f2b962c81917b6ac87de',
      'field_base' => '32eb0b5d6bf7e85a38811866319e2e82',
      'taxonomy' => '79d0c2c312c578a150f3c7ebaf3dc484',
    ),
    'facebook_login' => array(
      'user_permission' => 'bf7c518962500d20ff6a1d2d28308b98',
      'dependencies' => 'e0dacc060541b28fca98266f9ea6680e',
      'oauthconnector_provider' => '3d3c56e5a08f18a41f1fbae6aa1cca89',
    ),
    'twitter_login' => array(
      'user_permission' => 'afd5bdec5fccedd7e9d000bbd1104f00',
      'dependencies' => 'e0dacc060541b28fca98266f9ea6680e',
      'oauthconnector_provider' => 'e55689229159bf9ab1d8e028335bef4d',
    ),
    'landportal_users' => array(
      'field_base' => 'f6f3d5d8ff6a57b77c8533b656f2f8c7',
      'field_instance' => '8e5ad249d8f02245672aaf24822f44a7',
      'user_role' => '5d628b9a8b772364dc69e72aa0fbe9ab',
      'user_permission' => '519d3879847a7804b60cdee033e6b508',
      'dependencies' => '641ccb727ea7c8da2124319757a66bc1',
      'apachesolr_environment' => 'bc42bc0d6fdf676c207bbce558f761da',
      'apachesolr_search_page' => '12f9888d5ca42450dc7bda703569d5d4',
    ),
    'landportal_homepage' => array(
      'dependencies' => 'f334ac27b969221f20f7aa53080cd124',
    ),
    'landportal_taxonomy' => array(
      'taxonomy' => '7f76feafd3ff816e141559cbc83909e0',
      'dependencies' => '683d888f3f0f8338f92e29e3e1b4c53a',
    ),
    'landportal_field_base' => array(
      'field_base' => '6daecc19a6d6f0ded94579e552762158',
      'dependencies' => 'b442106c2453b27412e4afbab2ccf1da',
    ),
    'landportal_content_types' => array(
      'variable' => '7996aa078a686bd7afc72d0cbe5dc33c',
      'field_instance' => 'a85683145fa4064cda92025e47cc82e9',
      'dependencies' => '12580fa560743023caf4eed5fdc21e5a',
      'node' => 'dd202703f5c56636d5bca6f906c232ef',
      'field_group' => 'c297d9f8cd36001c6fc46ceca888bb9e',
    ),
    'landportal_extra' => array(
      'variable' => '76796a993c83693984aaaf160481f776',
      'field_instance' => '7579ee0d7ec61497ece0dac9893af4b7',
      'menu_custom' => 'bf4b56f344c02777e147383525f6c738',
      'menu_links' => '186ee67d72c47a70bde4c011a31533d8',
      'user_role' => 'c634618fb938b2f6bb599bf3eeb1b4cc',
      'dependencies' => 'd66bbe077c81a4832385593b25acd4c0',
      'field_group' => 'b37b7cdfe2dbde8831a8fd37163cff92',
      'image' => 'fd605d450803018d7936924e4dbe72a7',
      'views_view' => 'af3b08a62997d0b7bfd39c8592471217',
    ),
    'landdebate' => array(
      'dependencies' => '993fbbca9aeb07855ce94120f757b338',
      'context' => 'c8561c69c0b9374372dd693c21c9eb71',
      'views_view' => '10ae75abed6308f5bea2de16b6447d6e',
    ),
    'feeds_import' => array(
      'dependencies' => '981314fbdcdc839f8ba1d10a17259887',
      'feeds_importer' => '758e3955b8f76773fe3278b415e34710',
    ),
    'feeds_news' => array(
      'dependencies' => '7cb125eca131a8d6fac432adc5e3f02c',
      'field_base' => 'ac6943fc8528e131b847112f3a34933c',
      'field_instance' => '0339b0264d933c65164354426bdbc387',
      'feeds_importer' => 'aa4132bda31c3728ca1fc218fc753a84',
      'node' => 'd7002d258836b4e70734c81ba9b2dbc4',
      'views_view' => 'c06d5a7da66f926ca124d569fa479d1c',
    ),
    'landlibrary' => array(
      'dependencies' => 'fce1c8e6210dcaf2acab35d801aafd09',
      'field_base' => '1f6457908ce7b1df82674d1a845d4ccf',
      'field_instance' => '7f206e9ce118a8f5d431445cb4c770d3',
      'language' => '49dd66f2128657e4384f0118ccc306e9',
      'menu_custom' => '9b73a9442ad775793f93bb136a44c045',
      'taxonomy' => '2dc70c73dbc06d72d28be858c96d1701',
      'variable' => '8f28d315f4174f8f9aa2a4ff79f616ec',
      'node' => '4510ee7d5cf3e96faba2e4638dd541cc',
      'apachesolr_environment' => '39d508419e3e9d3afe8b82cce15edb01',
      'context' => '3efb485a4ef71ebe7be546c208ff8892',
      'ds_fields' => '88ebc53e84b51659c562aa87b25b9f69',
      'ds_view_modes' => '247dcbb6347a26c94c6e921f0d97abf1',
      'elysia_cron' => '26ff706e48cac5288a5f46d2c7d7dcd4',
      'field_group' => 'adf2cb56dca00b8cae1475bb34cf50a2',
      'ds_layout_settings' => '43b3c39173c46127721e388a6a69570a',
      'views_view' => '4db836e7118bba2b9f698d9161dfb6e4',
      'feeds_importer' => '1325d2be53427bb125683f5b992c913c',
      'feeds_tamper' => '502c4717b16b7cb4ad540874bc28ee1d',
    ),
    'landportal_base' => array(
      'node' => '024b5c19caa61d73e52989c519837bc4',
      'variable' => '14b2d247266c2e103070d541a055a769',
      'field_base' => '973cdc1a01e6654097ee5c58a4d7b2f3',
      'field_instance' => 'e407c1fc5a6f9ddc19ddff50afa1df5b',
      'user_permission' => 'f1dcd7b52261754acd3832f2115d85cc',
      'dependencies' => 'cc9a41d85ec35e7886b33d33364d61a1',
    ),
    'landlibrary_importers_agris' => array(
      'node' => '9d248bb109ec96554ba7fc8e8d942a01',
      'variable' => '675ede2ede4bd20c1d71f866857a375c',
      'field_instance' => '35ed9073576ad21e66c7eb7717bcafdb',
      'menu_links' => '6b791349606756ec3a47d244f32289b1',
      'user_permission' => '9e8664e00c3b42a6b997e83e9d11ee3b',
      'dependencies' => 'd974d8229eaa77f7b61a0dfa119a89ab',
      'rdf_mappings' => 'acd08b0bc651c7e7e2369c0269a603aa',
      'feeds_importer' => 'fb0798a982636897c707022257f95bc4',
      'feeds_tamper' => 'b4e4341e1331db5490fdab0607289248',
    ),
    'landlibrary_importers_ifpri' => array(
      'node' => '24a6ce282c1dcdd92278e3b9738c6593',
      'variable' => '51c79b0c6534225c67ce6106317f0874',
      'field_instance' => '5cdd5afa9f949b79645f408f2f96ad2b',
      'menu_links' => 'afef3571ac0de7324b58b093b8ff3712',
      'user_permission' => 'a7ebaf9f581a2379c6463dbac860b350',
      'dependencies' => '45597878004f379e7cf4afcc7e5bb4fe',
      'feeds_tamper' => '4406876f505b5ad1c6c433db6a9514bd',
    ),
    'landlibrary_importers_landcoalition' => array(
      'node' => 'efe6acd8b00699eb64d14db86ae943cf',
      'variable' => '636187dc3073b544c2d637c619429c89',
      'field_instance' => 'a97ac1f9d5165779d647f53463f45a4e',
      'menu_links' => 'e8092cdc08576cb4d71f0b1cf7e10741',
      'rdf_mappings' => '854591c17c8a062cad476fe366febdce',
      'user_permission' => '052d0cfd8155fae926ff393866d2bb94',
      'dependencies' => 'bc8a5758e5b1cf6dccbefdf81891c8b1',
      'feeds_importer' => '816c459912f59824eec1cba9a21efa20',
      'feeds_tamper' => 'a770d29202b634139e5f6ebe542d0db7',
    ),
    'landlibrary_importers_usaid' => array(
      'node' => '7bbf811498494067fad4edff91bbeb18',
      'variable' => 'e2e5713a9b51ade9b8983eff3b54cb5b',
      'field_instance' => '6557ca1095bf212dd94060a8ea91bc05',
      'menu_links' => '4a74e4fdaf270e8eb35e00324b0fa343',
      'user_permission' => 'c2299534d2aaccb85d114d55e4554db1',
      'dependencies' => '3f5bdba391caf9b9f14f59f7fd7eed8c',
      'feeds_importer' => '585041debe4b7f5f4693d0aad200bacd',
      'feeds_tamper' => 'ca94f05e717143be603257a637e96ba4',
    ),
  );
  $export['features_codecache'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_apachesolr_environment';
  $strongarm->value = 0;
  $export['features_component_locked_apachesolr_environment'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_apachesolr_search_page';
  $strongarm->value = 0;
  $export['features_component_locked_apachesolr_search_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ckeditor_profile';
  $strongarm->value = 0;
  $export['features_component_locked_ckeditor_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_context';
  $strongarm->value = 0;
  $export['features_component_locked_context'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_dependencies';
  $strongarm->value = 0;
  $export['features_component_locked_dependencies'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ds_fields';
  $strongarm->value = 0;
  $export['features_component_locked_ds_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ds_field_settings';
  $strongarm->value = 0;
  $export['features_component_locked_ds_field_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ds_layout_settings';
  $strongarm->value = 0;
  $export['features_component_locked_ds_layout_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ds_vd';
  $strongarm->value = 0;
  $export['features_component_locked_ds_vd'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_ds_view_modes';
  $strongarm->value = 0;
  $export['features_component_locked_ds_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_elysia_cron';
  $strongarm->value = 0;
  $export['features_component_locked_elysia_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_facetapi';
  $strongarm->value = 0;
  $export['features_component_locked_facetapi'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_feeds_importer';
  $strongarm->value = 0;
  $export['features_component_locked_feeds_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_feeds_tamper';
  $strongarm->value = 0;
  $export['features_component_locked_feeds_tamper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_base';
  $strongarm->value = 0;
  $export['features_component_locked_field_base'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_group';
  $strongarm->value = 0;
  $export['features_component_locked_field_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_field_instance';
  $strongarm->value = 0;
  $export['features_component_locked_field_instance'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_file_display';
  $strongarm->value = 0;
  $export['features_component_locked_file_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_filter';
  $strongarm->value = 0;
  $export['features_component_locked_filter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_image';
  $strongarm->value = 0;
  $export['features_component_locked_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_language';
  $strongarm->value = 0;
  $export['features_component_locked_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_menu_custom';
  $strongarm->value = 0;
  $export['features_component_locked_menu_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_menu_links';
  $strongarm->value = 0;
  $export['features_component_locked_menu_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_node';
  $strongarm->value = 0;
  $export['features_component_locked_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_search_api_index';
  $strongarm->value = 0;
  $export['features_component_locked_search_api_index'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_search_api_server';
  $strongarm->value = 0;
  $export['features_component_locked_search_api_server'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_taxonomy';
  $strongarm->value = 0;
  $export['features_component_locked_taxonomy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_user_permission';
  $strongarm->value = 0;
  $export['features_component_locked_user_permission'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_user_role';
  $strongarm->value = 0;
  $export['features_component_locked_user_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_entities';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_entities'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_node';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_node'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_uuid_term';
  $strongarm->value = 0;
  $export['features_component_locked_uuid_term'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_variable';
  $strongarm->value = 0;
  $export['features_component_locked_variable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_component_locked_views_view';
  $strongarm->value = 0;
  $export['features_component_locked_views_view'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_default_export_path';
  $strongarm->value = 'sites/all/modules';
  $export['features_default_export_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_ignored_orphans';
  $strongarm->value = array();
  $export['features_ignored_orphans'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_lock_mode';
  $strongarm->value = 'rebuild';
  $export['features_lock_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_rebuild_on_flush';
  $strongarm->value = 1;
  $export['features_rebuild_on_flush'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'features_semaphore';
  $strongarm->value = array();
  $export['features_semaphore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'feeds_reschedule';
  $strongarm->value = FALSE;
  $export['feeds_reschedule'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__audio';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__default';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__landlibrary_resource';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'resource' => array(
        'custom_settings' => FALSE,
      ),
      'library_source' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '17',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '13',
        ),
        'language' => array(
          'weight' => '6',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__page';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__person';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'resource' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__subject_browse';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__type_browse';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__languages';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
        'name' => array(
          'weight' => '-5',
        ),
        'description' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__languages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__subjects';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'path' => array(
          'weight' => '30',
        ),
        'name' => array(
          'weight' => '-5',
        ),
        'description' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__subjects'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_temporary_path';
  $strongarm->value = '/tmp';
  $export['file_temporary_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'filter_fallback_format';
  $strongarm->value = 'plain_text';
  $export['filter_fallback_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'global_filters';
  $strongarm->value = array(
    1 => array(
      'block' => 'global_filter_1',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    2 => array(
      'block' => 'global_filter_2',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    3 => array(
      'block' => 'global_filter_3',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    4 => array(
      'block' => 'global_filter_4',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    5 => array(
      'block' => 'global_filter_5',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    6 => array(
      'block' => 'global_filter_6',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    7 => array(
      'block' => 'global_filter_7',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    8 => array(
      'block' => 'global_filter_8',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    9 => array(
      'block' => 'global_filter_9',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    10 => array(
      'block' => 'global_filter_10',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    11 => array(
      'block' => 'global_filter_11',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    12 => array(
      'block' => 'global_filter_12',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    13 => array(
      'block' => 'global_filter_13',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    14 => array(
      'block' => 'global_filter_14',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    15 => array(
      'block' => 'global_filter_15',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    16 => array(
      'block' => 'global_filter_16',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    17 => array(
      'block' => 'global_filter_17',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    18 => array(
      'block' => 'global_filter_18',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    19 => array(
      'block' => 'global_filter_19',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
    20 => array(
      'block' => 'global_filter_20',
      'uses_view' => '',
      'view' => '',
      'field' => '',
      'widget' => '',
      'label' => '',
      'option_all_text' => '',
      'convert_to_range' => '',
      'confirm_question' => '',
      'set_on_select' => '',
      'global_php_default' => '',
      'global_field_or_view_default' => '',
    ),
  );
  $export['global_filters'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'global_filter_legacy_parameters_set';
  $strongarm->value = TRUE;
  $export['global_filter_legacy_parameters_set'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_profile';
  $strongarm->value = 'standard';
  $export['install_profile'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_task';
  $strongarm->value = 'done';
  $export['install_task'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'install_time';
  $strongarm->value = 1401876982;
  $export['install_time'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'javascript_parsed';
  $strongarm->value = array(
    0 => 'misc/drupal.js',
    1 => 'sites/all/modules/jquery_update/replace/jquery/1.8/jquery.min.js',
    2 => 'misc/jquery.once.js',
    3 => 'sites/all/modules/devel/devel_krumo_path.js',
    4 => 'sites/all/modules/features/features.js',
    5 => 'misc/tableheader.js',
    6 => 'misc/form.js',
    7 => 'misc/vertical-tabs.js',
    8 => 'sites/all/modules/jquery_update/replace/ui/external/jquery.cookie.js',
    9 => 'modules/toolbar/toolbar.js',
    'refresh:fr' => 'waiting',
    'refresh:de' => 'waiting',
    'refresh:es' => 'waiting',
    10 => 'misc/collapse.js',
    11 => 'misc/machine-name.js',
    12 => 'misc/autocomplete.js',
    13 => 'sites/all/modules/jquery_update/replace/misc/jquery.form.min.js',
    14 => 'misc/progress.js',
    15 => 'sites/all/modules/jquery_update/js/jquery_update.js',
    16 => 'misc/ajax.js',
    17 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.core.min.js',
    18 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.widget.min.js',
    19 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.button.min.js',
    20 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.mouse.min.js',
    21 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.draggable.min.js',
    22 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.position.min.js',
    23 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.resizable.min.js',
    24 => 'sites/all/modules/jquery_update/replace/ui/ui/minified/jquery.ui.dialog.min.js',
    25 => 'sites/all/modules/jquery_update/replace/jquery/1.10/jquery.min.js',
    26 => 'sites/all/modules/google_analytics/googleanalytics.js',
    27 => 'modules/contextual/contextual.js',
  );
  $export['javascript_parsed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'job_scheduler_rebuild_all';
  $strongarm->value = FALSE;
  $export['job_scheduler_rebuild_all'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '1.8';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_general_feed';
  $strongarm->value = '0';
  $export['language_content_type_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_landlibrary_resource';
  $strongarm->value = '4';
  $export['language_content_type_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_page';
  $strongarm->value = '2';
  $export['language_content_type_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_person';
  $strongarm->value = '0';
  $export['language_content_type_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_rss_issue_briefs_feed';
  $strongarm->value = '0';
  $export['language_content_type_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_subject_browse';
  $strongarm->value = '0';
  $export['language_content_type_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_subject_browse_item';
  $strongarm->value = '0';
  $export['language_content_type_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_type_browse';
  $strongarm->value = '0';
  $export['language_content_type_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_worldbank_feed';
  $strongarm->value = '0';
  $export['language_content_type_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 3;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-user' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_user',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-user' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_user',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => TRUE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_general_feed';
  $strongarm->value = '1';
  $export['location_defaultnum_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_landlibrary_resource';
  $strongarm->value = '0';
  $export['location_defaultnum_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_organization';
  $strongarm->value = '0';
  $export['location_defaultnum_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_person';
  $strongarm->value = '1';
  $export['location_defaultnum_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_subject_browse';
  $strongarm->value = '1';
  $export['location_defaultnum_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_subject_browse_item';
  $strongarm->value = '1';
  $export['location_defaultnum_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_general_feed';
  $strongarm->value = '1';
  $export['location_maxnum_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_landlibrary_resource';
  $strongarm->value = '0';
  $export['location_maxnum_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_organization';
  $strongarm->value = '0';
  $export['location_maxnum_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_person';
  $strongarm->value = '1';
  $export['location_maxnum_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_subject_browse';
  $strongarm->value = '1';
  $export['location_maxnum_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_subject_browse_item';
  $strongarm->value = '1';
  $export['location_maxnum_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_general_feed';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_landlibrary_resource';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 0,
      'full' => 0,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_organization';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '0',
      'add' => '0',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_organization'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_person';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_subject_browse';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_subject_browse_item';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '0',
      'max' => '1',
      'add' => '1',
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 1,
      'collapsed' => 1,
      'fields' => array(
        'name' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '2',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '4',
        ),
        'additional' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '6',
        ),
        'city' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '8',
        ),
        'province' => array(
          'collect' => '0',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '10',
        ),
        'postal_code' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '12',
        ),
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '14',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '20',
        ),
      ),
    ),
    'display' => array(
      'weight' => '0',
      'hide' => array(
        'name' => 0,
        'street' => 0,
        'additional' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array(
    0 => 'menu-docs',
    1 => 'menu-land-portal-about',
  );
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 507,
    1 => 506,
    2 => 503,
    3 => 501,
    4 => 494,
    5 => 493,
    6 => 253,
    7 => 252,
    8 => 251,
    9 => 250,
    10 => 247,
    11 => 246,
    12 => 245,
    13 => 242,
    14 => 241,
    15 => 238,
    16 => 127,
    17 => 126,
    18 => 125,
    19 => 124,
    20 => 123,
    21 => 122,
    22 => 121,
    23 => 119,
    24 => 118,
    25 => 117,
    26 => 108,
    27 => 63,
    28 => 62,
    29 => 61,
    30 => 60,
    31 => 59,
    32 => 58,
    33 => 56,
    34 => 54,
    35 => 44,
    36 => 31,
    37 => 30,
    38 => 29,
    39 => 28,
    40 => 27,
    41 => 26,
    42 => 25,
    43 => 24,
    44 => 22,
    45 => 21,
    46 => 15,
    47 => 14,
    48 => 13,
    49 => 12,
    50 => 11,
    51 => 10,
    52 => 8,
    53 => 7,
    54 => 6,
    55 => 5,
    56 => 3,
    57 => 2,
    58 => 1,
  );
  $export['menu_masks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_general_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_landlibrary_resource';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_page';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_person';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_rss_issue_briefs_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_subject_browse';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_subject_browse_item';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_type_browse';
  $strongarm->value = array();
  $export['menu_options_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_worldbank_feed';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_general_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_landlibrary_resource';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_page';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_person';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_rss_issue_briefs_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_subject_browse';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_subject_browse_item';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_type_browse';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_worldbank_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'module_filter_recent_modules';
  $strongarm->value = array();
  $export['module_filter_recent_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_admin_theme';
  $strongarm->value = '1';
  $export['node_admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_cron_last';
  $strongarm->value = '1424961807';
  $export['node_cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_general_feed';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_landlibrary_resource';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_person';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_rss_issue_briefs_feed';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_subject_browse';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_subject_browse_item';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_type_browse';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_worldbank_feed';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_general_feed';
  $strongarm->value = '1';
  $export['node_preview_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_landlibrary_resource';
  $strongarm->value = '1';
  $export['node_preview_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_page';
  $strongarm->value = '1';
  $export['node_preview_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_person';
  $strongarm->value = '1';
  $export['node_preview_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_rss_issue_briefs_feed';
  $strongarm->value = '1';
  $export['node_preview_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_subject_browse';
  $strongarm->value = '1';
  $export['node_preview_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_type_browse';
  $strongarm->value = '1';
  $export['node_preview_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_worldbank_feed';
  $strongarm->value = '1';
  $export['node_preview_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_general_feed';
  $strongarm->value = 1;
  $export['node_submitted_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_landlibrary_resource';
  $strongarm->value = 1;
  $export['node_submitted_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_person';
  $strongarm->value = 0;
  $export['node_submitted_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_rss_issue_briefs_feed';
  $strongarm->value = 1;
  $export['node_submitted_rss_issue_briefs_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_subject_browse';
  $strongarm->value = 1;
  $export['node_submitted_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_subject_browse_item';
  $strongarm->value = 1;
  $export['node_submitted_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_type_browse';
  $strongarm->value = 0;
  $export['node_submitted_type_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_worldbank_feed';
  $strongarm->value = 1;
  $export['node_submitted_worldbank_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_blog_pattern';
  $strongarm->value = 'blogs/[user:name]';
  $export['pathauto_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_forum_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_forum_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_post_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_post_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_debate_pattern';
  $strongarm->value = '';
  $export['pathauto_node_debate_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_event_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_event_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_feed_item_pattern';
  $strongarm->value = '';
  $export['pathauto_node_feed_item_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_feed_pattern';
  $strongarm->value = '';
  $export['pathauto_node_feed_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_general_feed_pattern';
  $strongarm->value = '';
  $export['pathauto_node_general_feed_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_landlibrary_resource_pattern';
  $strongarm->value = 'library/[current-date:custom:Y]/[current-date:custom:m]/[node:title]';
  $export['pathauto_node_landlibrary_resource_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_es_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_es_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_news_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_news_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_organization_pattern';
  $strongarm->value = 'organization/[node:title]';
  $export['pathauto_node_organization_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_pattern';
  $strongarm->value = '[node:content-type]/[current-date:custom:Y]/[current-date:custom:m]/[node:title]';
  $export['pathauto_node_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_person_pattern';
  $strongarm->value = '';
  $export['pathauto_node_person_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_punctuation_hyphen';
  $strongarm->value = '1';
  $export['pathauto_punctuation_hyphen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_auto_created_voc8_470_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_auto_created_voc8_470_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_countries_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_countries_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_debate_status_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_debate_status_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_format_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_format_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_keywords_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_keywords_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_landlibrary_resource_type_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_landlibrary_resource_type_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_languages_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_languages_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_licences_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_licences_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_organization_types_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_organization_types_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_pattern';
  $strongarm->value = '[term:vocabulary]/[term:name]';
  $export['pathauto_taxonomy_term_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_regions_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_regions_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_subjects_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_subjects_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_terms_of_use_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_terms_of_use_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_topics_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_topics_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'path_alias_whitelist';
  $strongarm->value = array(
    'file' => TRUE,
    'node' => TRUE,
    'taxonomy' => TRUE,
    'user' => TRUE,
  );
  $export['path_alias_whitelist'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_general_feed';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_general_feed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_landlibrary_resource';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_landlibrary_resource'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_person';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_person'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_subject_browse';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_subject_browse'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_subject_browse_item';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_subject_browse_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    'apachesolr_search' => 'apachesolr_search',
    'node' => 0,
    'user' => 0,
  );
  $export['search_active_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_solr_last_optimize';
  $strongarm->value = 1441942932;
  $export['search_api_solr_last_optimize'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = '';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'info@landportal.info';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Landportal';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_check_hierarchy';
  $strongarm->value = 1;
  $export['taxonomy_csv_check_hierarchy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_check_line';
  $strongarm->value = 1;
  $export['taxonomy_csv_check_line'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_check_utf8';
  $strongarm->value = 1;
  $export['taxonomy_csv_check_utf8'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_delete_terms';
  $strongarm->value = 0;
  $export['taxonomy_csv_delete_terms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_delimiter';
  $strongarm->value = 'comma';
  $export['taxonomy_csv_export_delimiter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_delimiter_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_export_delimiter_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_enclosure';
  $strongarm->value = 'quotation';
  $export['taxonomy_csv_export_enclosure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_enclosure_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_export_enclosure_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_format';
  $strongarm->value = 'fields';
  $export['taxonomy_csv_export_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_line_ending';
  $strongarm->value = 'Unix';
  $export['taxonomy_csv_export_line_ending'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_order';
  $strongarm->value = 'name';
  $export['taxonomy_csv_export_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_export_vocabulary_id';
  $strongarm->value = array(
    10 => '10',
  );
  $export['taxonomy_csv_export_vocabulary_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_filter_format';
  $strongarm->value = 'plain_text';
  $export['taxonomy_csv_filter_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_filter_format_custom';
  $strongarm->value = 'none';
  $export['taxonomy_csv_filter_format_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_i18n_mode';
  $strongarm->value = '4';
  $export['taxonomy_csv_i18n_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_delimiter';
  $strongarm->value = 'comma';
  $export['taxonomy_csv_import_delimiter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_delimiter_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_import_delimiter_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_delimiter_soft_tab_width';
  $strongarm->value = '2';
  $export['taxonomy_csv_import_delimiter_soft_tab_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_enclosure';
  $strongarm->value = 'none';
  $export['taxonomy_csv_import_enclosure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_enclosure_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_import_enclosure_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_fields_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_import_fields_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_fields_format';
  $strongarm->value = 'name, vocabulary_machine_name, description, format, weight, parent, language';
  $export['taxonomy_csv_import_fields_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_format';
  $strongarm->value = 'fields';
  $export['taxonomy_csv_import_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_import_language';
  $strongarm->value = 'und';
  $export['taxonomy_csv_import_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_keep_order';
  $strongarm->value = 0;
  $export['taxonomy_csv_keep_order'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_language';
  $strongarm->value = 'und';
  $export['taxonomy_csv_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_locale_custom';
  $strongarm->value = '';
  $export['taxonomy_csv_locale_custom'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_duplicates';
  $strongarm->value = 1;
  $export['taxonomy_csv_result_duplicates'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_level';
  $strongarm->value = 'notices';
  $export['taxonomy_csv_result_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_stats';
  $strongarm->value = 'result_stats';
  $export['taxonomy_csv_result_stats'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_terms';
  $strongarm->value = 'result_terms';
  $export['taxonomy_csv_result_terms'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_result_type';
  $strongarm->value = 'by_message';
  $export['taxonomy_csv_result_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_set_hierarchy';
  $strongarm->value = '2';
  $export['taxonomy_csv_set_hierarchy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_source_choice';
  $strongarm->value = 'file';
  $export['taxonomy_csv_source_choice'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_structure_type';
  $strongarm->value = 'tree';
  $export['taxonomy_csv_structure_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_translate_by';
  $strongarm->value = 'name';
  $export['taxonomy_csv_translate_by'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_translate_languages';
  $strongarm->value = 'en, fr, es';
  $export['taxonomy_csv_translate_languages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_update_or_ignore';
  $strongarm->value = 'update';
  $export['taxonomy_csv_update_or_ignore'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_vocabulary_id';
  $strongarm->value = '19';
  $export['taxonomy_csv_vocabulary_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'taxonomy_csv_vocabulary_target';
  $strongarm->value = 'existing';
  $export['taxonomy_csv_vocabulary_target'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'landportal';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'update_last_check';
  $strongarm->value = 1441969450;
  $export['update_last_check'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_extensions_default';
  $strongarm->value = ' csv';
  $export['upload_extensions_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_admin_role';
  $strongarm->value = '30037204';
  $export['user_admin_role'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '1024x1024';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '2';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'variable_module_list';
  $strongarm->value = array(
    'locale' => array(
      0 => 'language_content_type_article',
      1 => 'language_content_type_page',
      2 => 'language_content_type_landbook_country',
      3 => 'language_content_type_landbook_indicator',
      4 => 'language_default',
    ),
    'i18n' => array(
      0 => 'i18n_language_list',
    ),
    'i18n_string' => array(
      0 => 'i18n_string_translate_langcode_en',
      1 => 'i18n_string_allowed_formats',
      2 => 'i18n_string_source_language',
      3 => 'i18n_string_debug',
    ),
    'googleanalytics' => array(
      0 => 'googleanalytics_account',
    ),
    'i18n_node' => array(
      0 => 'i18n_hide_translation_links',
      1 => 'i18n_node_default_language_none',
      2 => 'i18n_node_options_migrate_example_beer',
      3 => 'i18n_node_options_blog_post',
      4 => 'i18n_node_options_debate',
      5 => 'i18n_node_options_event',
      6 => 'i18n_node_options_group',
      7 => 'i18n_node_options_landbook_country',
      8 => 'i18n_node_options_landbook_indicator',
      9 => 'i18n_node_options_news',
      10 => 'i18n_node_options_organization',
      11 => 'i18n_node_options_page',
      12 => 'i18n_node_options_migrate_example_wine',
      13 => 'i18n_node_options_migrate_example_producer',
      14 => 'i18n_node_extended_migrate_example_beer',
      15 => 'i18n_node_extended_blog_post',
      16 => 'i18n_node_extended_debate',
      17 => 'i18n_node_extended_event',
      18 => 'i18n_node_extended_group',
      19 => 'i18n_node_extended_landbook_country',
      20 => 'i18n_node_extended_landbook_indicator',
      21 => 'i18n_node_extended_news',
      22 => 'i18n_node_extended_organization',
      23 => 'i18n_node_extended_page',
      24 => 'i18n_node_extended_migrate_example_wine',
      25 => 'i18n_node_extended_migrate_example_producer',
    ),
  );
  $export['variable_module_list'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'views_defaults';
  $strongarm->value = array(
    'admin_views_taxonomy_term' => FALSE,
    'frontpage' => TRUE,
    'latest_news' => TRUE,
    'latest_debates' => TRUE,
    'debate_facilitators' => TRUE,
    'community' => FALSE,
    'debate' => TRUE,
    'taxonomy_term' => FALSE,
  );
  $export['views_defaults'] = $strongarm;

  return $export;
}
