<?php
/**
 * @file
 * landdebate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function landdebate_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function landdebate_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function landdebate_node_info() {
  $items = array(
    'blog_post' => array(
      'name' => t('Blog post'),
      'base' => 'node_content',
      'description' => t('A post in the Landportal Debate Blog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'debate' => array(
      'name' => t('Debate'),
      'base' => 'node_content',
      'description' => t('A Land Debate. This content type is used to create a Debate on the Landportal website.
By default comments are enabled in Debates, the comments may be open or close regardless of the Debate status.
'),
      'has_title' => '1',
      'title_label' => t('Title for this debate'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('A concrete event (meeting, conference, show...) that will happen at a given time in a given place.'),
      'has_title' => '1',
      'title_label' => t('Event name'),
      'help' => '',
    ),
    'news' => array(
      'name' => t('News'),
      'base' => 'node_content',
      'description' => t('A temporal piece of information posted on the website used to inform people of a new publication, an interesting website to look at, something that will happen soon, etc...'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
