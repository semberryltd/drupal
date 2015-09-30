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
  $strongarm->name = 'elysia_cron_last_context';
  $strongarm->value = 'default';
  $export['elysia_cron_last_context'] = $strongarm;

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
    'profile2' => array(
      0 => 'profile',
      1 => 'pid',
    ),
    'profile2_type' => array(
      0 => 'profile_type',
      1 => 'id',
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
  $strongarm->name = 'facetapi:block_cache:apachesolr@solr';
  $strongarm->value = -1;
  $export['facetapi:block_cache:apachesolr@solr'] = $strongarm;

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
      'taxonomy' => 'b3d7639d70cab2cdb25f30c667f820cf',
      'dependencies' => '18c28e243c47a5fa7775762180743736',
      'rdf_mappings' => 'cb54fd27c5f06e13565c2e6027d56d16',
      'user_permission' => '2bb00009b575b334308e774016bb0cdc',
      'variable' => 'd8e8b3afefca8899c91df83d6d786564',
      'field_instance' => 'c24edf086697f9ba3e3d85d00e93f123',
    ),
    'landportal_field_base' => array(
      'field_base' => 'cb4390945da9b4957d0dd0ba3cfd41bb',
      'dependencies' => '58b3ff5dd64e62abfed19285ed58a2a7',
    ),
    'landportal_content_types' => array(
      'variable' => 'abcebb341b0df9f989ccf8cc3b131d75',
      'field_instance' => '9feb3458de7dacb8a92272e14031d088',
      'dependencies' => '6bd056770e70fd06f5fedce9229a7717',
      'node' => '2a7b6cadec295465bd93f8c7bbe52f39',
      'field_group' => 'c297d9f8cd36001c6fc46ceca888bb9e',
    ),
    'landportal_extra' => array(
      'variable' => 'a6e7b310ce3659b267c590142239fd9d',
      'field_instance' => '7579ee0d7ec61497ece0dac9893af4b7',
      'menu_custom' => '87224ed644689441ee2a8c0497238204',
      'menu_links' => '6bdccb813da972a5cc1f79bce099d8d1',
      'user_role' => 'c634618fb938b2f6bb599bf3eeb1b4cc',
      'dependencies' => '1ed72978d7dfd1ccc22babcd76cdd5ff',
      'field_group' => 'b37b7cdfe2dbde8831a8fd37163cff92',
      'image' => 'b80f3d7cd0957c3efbef94a2e29502a0',
      'views_view' => '6860917b2228c4bb7cdabe24b27d0dae',
    ),
    'landdebate' => array(
      'dependencies' => '815603a423603ecf44591b5a03fcd253',
      'context' => 'c8561c69c0b9374372dd693c21c9eb71',
      'views_view' => '0bed2b062d528c7b693b42abcf0d45db',
      'field_base' => 'cb93f938718b0bc5ab785f353f682abb',
      'field_instance' => 'de9fd92be8bfe9c81ee8f78ddd5aaf23',
      'menu_custom' => 'e44c9514f2fe403ff4fcfcdb7e1f0d16',
      'rdf_mappings' => 'b80c2476e9e548d19d86603c8abde5df',
      'user_permission' => '738b13d872f64103bb0c3712a487e7c0',
      'menu_links' => 'acc47607bab887522927e6d7eb2f4e0d',
      'node' => 'dd202703f5c56636d5bca6f906c232ef',
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
      'dependencies' => '6646bef07ddad415e9b41666446875da',
      'field_base' => 'f046dc5ad2a0b6c7812c0a2eccd8d0a0',
      'field_instance' => 'feb9aa07be33960fa33b64184857ee87',
      'language' => '49dd66f2128657e4384f0118ccc306e9',
      'menu_custom' => '9b73a9442ad775793f93bb136a44c045',
      'taxonomy' => '4b2389dd5635284c0c577586a6f42b27',
      'variable' => 'e12c429a736f071b1099f8e75bb810be',
      'node' => '77ae656703ceb4466c6f3c4a2e1da3c9',
      'apachesolr_environment' => '39d508419e3e9d3afe8b82cce15edb01',
      'context' => '3efb485a4ef71ebe7be546c208ff8892',
      'ds_fields' => '88ebc53e84b51659c562aa87b25b9f69',
      'ds_view_modes' => '247dcbb6347a26c94c6e921f0d97abf1',
      'elysia_cron' => '26ff706e48cac5288a5f46d2c7d7dcd4',
      'field_group' => 'adf2cb56dca00b8cae1475bb34cf50a2',
      'ds_layout_settings' => '43b3c39173c46127721e388a6a69570a',
      'views_view' => 'e4f33e8eb66d5a3bb7fc40161b48b390',
    ),
    'landportal_base' => array(
      'field_base' => 'b35f1327904d599a4eaffeea7d7edca2',
      'field_instance' => 'e407c1fc5a6f9ddc19ddff50afa1df5b',
      'variable' => '6dc0d4b3b688d52d25bd14732e017a76',
      'dependencies' => 'd6af4d6ea993f8171f15542605725aca',
      'user_permission' => 'f1dcd7b52261754acd3832f2115d85cc',
      'node' => '024b5c19caa61d73e52989c519837bc4',
    ),
    'landcommunity' => array(
      'node' => '25a449b3407f8dc5b56fadd183b78c48',
      'variable' => '533fba5ea607cef6398cf9f69ba9db1b',
      'field_base' => '157461dfd7fea4254972e533f54057a7',
      'field_instance' => 'df31705d539441ee960d43c839882532',
      'user_permission' => '96ec91502c59430c95bc25894b4429b7',
      'dependencies' => '8b17956abb0c37789ba1157b09cb6960',
      'views_view' => '69cb176ba07dbeaab38fa74d8fcf9a01',
      'rdf_mappings' => '883307e03bfa74d6780d397fd099be8c',
      'ds_view_modes' => 'a0bc5635bd16438edf4ad4506db29549',
      'profile2_type' => 'de6a2081c1cd57b9fb036cdbf8880201',
      'menu_custom' => '13e3d07b05a032b3003554db7da54d2d',
      'menu_links' => 'c5300f240adf079a1171b82441937403',
    ),
  );
  $export['features_codecache'] = $strongarm;

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
  $strongarm->name = 'menu_options_landlibrary_resource';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_landlibrary_resource'] = $strongarm;

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
  $strongarm->name = 'menu_parent_worldbank_feed';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_worldbank_feed'] = $strongarm;

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
  $strongarm->name = 'search_api_solr_last_optimize';
  $strongarm->value = 1443621210;
  $export['search_api_solr_last_optimize'] = $strongarm;

  return $export;
}
