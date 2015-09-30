<?php
/**
 * @file
 * landportal_extra.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landportal_extra_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function landportal_extra_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function landportal_extra_image_default_styles() {
  $styles = array();

  // Exported image style: small_square.
  $styles['small_square'] = array(
    'label' => 'Small square',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 32,
          'height' => 32,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
