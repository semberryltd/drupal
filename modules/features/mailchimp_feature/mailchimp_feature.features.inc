<?php
/**
 * @file
 * mailchimp_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mailchimp_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
