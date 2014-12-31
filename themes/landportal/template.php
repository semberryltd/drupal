<?php
/**
 * @file
 * Main Landportal theme hook
 *
 * The Landportal theme
 *
 * Original work by: WESO (http://weso.es/)
 * Drupal refactoring: Jules <jules@ker.bz>
 */

function landportal_theme($existing, $type, $theme, $path) {
  $items = array();
  return $items;
}


function landportal_preprocess_html(&$variables) {
  drupal_add_css("http://fonts.googleapis.com/css?family=News+Cycle|Source+Sans+Pro:300,400|Josefin+Sans:300",
                 array('type' => 'external')
                 );
}
