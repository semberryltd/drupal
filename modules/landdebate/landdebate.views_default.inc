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
    $views = array('news', 'blog', 'debates', 'events');
    foreach ($views as $v) {
        include_once 'views/'. $v .'.inc';
        $export[$view->name] = $view;
    }
    return $export;
}
