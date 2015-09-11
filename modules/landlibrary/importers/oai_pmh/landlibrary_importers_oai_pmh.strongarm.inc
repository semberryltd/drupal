<?php
/**
 * @file
 * landlibrary_importers_oai_pmh.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landlibrary_importers_oai_pmh_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_oai_pmh_importer_pattern';
  $strongarm->value = '';
  $export['pathauto_node_oai_pmh_importer_pattern'] = $strongarm;

  return $export;
}
