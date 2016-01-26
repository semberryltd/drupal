<?php
/**
 * Override Drupal default views
 */

function landportal_bo_views_default_views_alter(&$views) {
    $path = drupal_get_path('module', 'landportal_bo') . '/views';

    $views_override = array(
        'admin_views_user',
        'admin_views_node',
        'admin_views_taxonomy_terms_ak',
        'admin_views_taxonomy_terms_topics'
        'admin_views_taxonomy_term'
    );
    foreach ($views_override as $view_name) {
        /**
         * View module export code, this file MUST declare a '$view' object
         * (as per Drupal default 'view > export' functionality)
         */
        include $path.'/'.$view_name . '.inc';
        $views[$view_name] = $view;
    }
}
