<?php
/**
 * @file
 * landcommunity.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function landcommunity_views_default_views() {
  $export = array();

  // Paste more views here...
  include 'views/organizations.inc';
  $export[$view->name] = $view;

  include 'views/users.inc';
  $export[$view->name] = $view;

  return $export;
}
