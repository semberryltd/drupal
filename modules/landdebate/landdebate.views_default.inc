<?php
/**
 * @file
 * landdebate.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function landdebate_views_default_views() {
    $export = array();

    // Base views for debate module
    // TODO: community should disappear and be replaced by the
    //   landcommunity module organization views
    $views = array('news', 'blog', 'debates', 'events', 'community');
    foreach ($views as $v) {
        include_once 'views/'. $v .'.inc';
        $export[$view->name] = $view;
    }
    return $export;
}
