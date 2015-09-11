<?php
/**
 * @file
 * landlibrary_importers_ifpri.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function landlibrary_importers_ifpri_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_ifpri_batch_file_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_ifpri_batch_file_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_ifpri_content_ingest_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_ifpri_content_ingest_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_ifpri_creator_feed_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_ifpri_creator_feed_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_ifpri_file_upload_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_ifpri_file_upload_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_ifpri_ingestion_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_ifpri_ingestion_form'] = $captcha;

  return $export;
}
