<?php
/**
 * @file
 * landcommunity.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function landcommunity_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_perso|user|user|form';
  $field_group->group_name = 'group_perso';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More about you',
    'weight' => '2',
    'children' => array(
      0 => 'field_firstname',
      1 => 'field_lastname',
      2 => 'field_geographical_focus',
      3 => 'field_interests',
      4 => 'field_title',
      5 => 'field_description',
      6 => 'picture',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'More about you',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-perso field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_perso|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_settings|user|user|form';
  $field_group->group_name = 'group_settings';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Settings',
    'weight' => '3',
    'children' => array(
      0 => 'ckeditor',
      1 => 'googleanalytics',
      2 => 'timezone',
      3 => 'locale',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-settings field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_settings|user|user|form'] = $field_group;

  return $export;
}
