<?php
/**
 * @file
 * landlibrary_importers_agris.captcha.inc
 */

/**
 * Implements hook_captcha_default_points().
 */
function landlibrary_importers_agris_captcha_default_points() {
  $export = array();

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_agris_clone2_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_agris_clone2_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_agris_conference__form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_agris_conference__form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_agris_conference_feed_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_agris_conference_feed_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_agris_dump_file_upload_feed_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_agris_dump_file_upload_feed_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_agris_file_upload_feed_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_agris_file_upload_feed_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_agris_publisher_file_feeds_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_agris_publisher_file_feeds_form'] = $captcha;

  $captcha = new stdClass();
  $captcha->disabled = FALSE; /* Edit this to true to make a default captcha disabled initially */
  $captcha->api_version = 1;
  $captcha->form_id = 'comment_node_agris_publisher_file_form';
  $captcha->module = '';
  $captcha->captcha_type = 'default';
  $export['comment_node_agris_publisher_file_form'] = $captcha;

  return $export;
}
