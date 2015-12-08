<?php
/**
 * @file
 * landbook_taxonomies.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function landbook_taxonomies_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_datasets_pattern';
  $strongarm->value = 'book/datasets/[term:field_id]';
  $export['pathauto_taxonomy_term_datasets_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_indicators_pattern';
  $strongarm->value = 'book/indicators/[term:field_id]';
  $export['pathauto_taxonomy_term_indicators_pattern'] = $strongarm;

  return $export;
}
