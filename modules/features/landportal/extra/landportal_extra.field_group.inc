<?php
/**
 * @file
 * landportal_extra.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function landportal_extra_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_interests|user|user|form';
  $field_group->group_name = 'group_interests';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Your interests',
    'weight' => '3',
    'children' => array(
      0 => 'field_geographical_focus',
      1 => 'field_interests',
      2 => 'field_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Your interests',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-interests field-group-fieldset',
        'description' => 'Tell us a bit more about your interests in joining the Land Portal. What are your focus point, projects you are working on and more!',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_interests|user|user|form'] = $field_group;

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
    'weight' => '1',
    'children' => array(
      0 => 'field_firstname',
      1 => 'field_lastname',
      2 => 'field_title',
      3 => 'picture',
      4 => 'locale',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'More about you',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-perso field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
    'weight' => '4',
    'children' => array(
      0 => 'field_api_token',
      1 => 'ckeditor',
      2 => 'timezone',
      3 => 'overlay_control',
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
