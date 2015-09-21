<?php
/**
 * Override Drupal default views
 */

function landportal_bo_views_default_views_alter(&$views) {
    $views_override = array('admin_views_node');

    foreach ($views_override as $view_name) {
        if (array_key_exists($view_name, $views)) {
            /* $view = new view; */
            /* $view->name = $view_name; */

            /**
             * View module export code, this file MUST decalre a '$view' object
             * (as per Drupal default 'view > export' functionality)
             */
            include drupal_get_path('module', 'landportal_bo').'/views/'.$view_name . '.inc';
            $views[$view_name] = $view;
        }
    }
}
