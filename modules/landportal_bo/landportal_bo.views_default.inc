<?php
/**
 * Override Drupal default views
 */

function landportal_bo_views_default_views_alter(&$views) {
    $path = drupal_get_path('module', 'landportal_bo') . '/views';

    $views_override = array(
        'admin_views_node',
        'admin_views_taxonomy_term'
    );

    foreach ($views_override as $view_name) {
        // Only replace existing views
        if (array_key_exists($view_name, $views)) {
            /**
             * View module export code, this file MUST declare a '$view' object
             * (as per Drupal default 'view > export' functionality)
             */
            include drupal_get_path('module', 'landportal_bo').'/views/'.$view_name . '.inc';
            //dsm('Override: '.$view_name);
            $views[$view_name] = $view;
        }
    }

    include_once $path .'/tax.inc';
}
