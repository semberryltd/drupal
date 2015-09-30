<?php
/**
 * @file
 * landcommunity.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function landcommunity_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'full';
  $ds_view_mode->label = 'Full';
  $ds_view_mode->entities = array(
    'profile2' => 'profile2',
  );
  $export['full'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser';
  $ds_view_mode->label = 'Teaser';
  $ds_view_mode->entities = array(
    'profile2' => 'profile2',
    'user' => 'user',
  );
  $export['teaser'] = $ds_view_mode;

  return $export;
}
