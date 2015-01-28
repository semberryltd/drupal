<?php
/**
 * @file
 * Main Landportal theme file
 *
 * The Landportal theme for Drupal 7.x
 *
 * Original work by: WESO (http://www.weso.es/)
 * Drupal refactoring: Jules <jules@ker.bz>
 */

function landportal_theme($existing, $type, $theme, $path) {
  $items = array();
  return $items;
}

/**
 * The right place to add common css & js for all pages
 */
function landportal_preprocess_html(&$variables) {
  drupal_add_css(
    "http://fonts.googleapis.com/css?family=News+Cycle|Source+Sans+Pro:300,400|Josefin+Sans:300",
    array('type' => 'external')
  );
  //drupal_add_js(drupal_get_path('module', 'landbook').'/js/libraries/bootstrap.min.js');
  drupal_add_css(drupal_get_path('theme', 'landportal').'/css/font-awesome.min.css');
  drupal_add_css(drupal_get_path('theme', 'landportal').'/css/bootstrap.min.css');

  $meta_viewport = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'content' => 'width=device-width',
      'name' => 'viewport',
    )
  );
  drupal_add_html_head($meta_viewport, 'viewport');

}

/**
 * Add description to section-header menus
 * If no menu are found in the section-header remove the whole block
 */
function landportal_page_alter(&$page) {
  if (!isset($page['section_header'])) return;
  $check = FALSE;
  foreach (array('landbook-menu', 'landdebate-menu', 'landlibrary-menu', 'user-signin') as $i) {
    if (isset($page['section_header']['menu_' . $i])) {
      $m = menu_load($i);
      $page['section_header']['menu_'. $i]['#block']->description = $m['description'];
      $check = TRUE;
    }
  }
  if (!$check) unset($page['section_header']);
}

/* /\** */
/*  * Add helpful variables (not too sensitive) to users account */
/*  * for template purposes */
/*  *\/ */
/* function landportal_preprocess_user_profile(&$variables) { */
/*   $account = $variables['elements']['#account']; */
/*   foreach (element_children($variables['elements']) as $key) { */
/*     $variables['user_profile'][$key] = $variables['elements'][$key]; */
/*   } */
/*   //$account->content['field_email'] =  */
/*   $variables['user_profile']['field_email'] = array( */
/*         '#theme' => 'field', */
/*         '#weight' => 8, */
/*         '#field_type' => 'text', */
/*         '#label_display' => 'above', */
/*         '#field_name' => 'email', */
/*         '#bundle' => 'user', */
/*         '#entity_type' => 'user', */
/*         '#title' => t('Email'), */
/*         '#items' => array(array('value'=>$account->mail)), */
/*         0 => array('#markup' =>  l($account->mail, 'mailto:'.$account->mail)), */
/*   ); */

/*   //$account->content['name'] =  */
/*   $variables['user_profile']['name'] = array( */
/*     '#theme' => 'field', */
/*         '#weight' => 7, */
/*     '#title' => t('Name'), */
/*     '#field_type' => 'text', */
/*     '#label_display' => 'above', */
/*     '#field_name' => 'email', */
/*     '#bundle' => 'user', */
/*     '#entity_type' => 'user', */
/*     '#items' => array(array('value' => $account->name)), */
/*     0 => array('#markup' => l($account->name, 'users/'.$account->name)), */
/*   ); */

/*   // Preprocess fields. */
/*   field_attach_preprocess('user', $account, $variables['elements'], $variables); */
/*   //dpm($variables['user_profile']); */
/* } */
