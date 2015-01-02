<?php
/**
 * @file
 * Provide data reuse display
 *
 * The Landportal landbook
 *
 * Original work by: WESO
 * Drupal refactoring: Jules <jules@ker.bz>
 */

function landbook_reuse($param=NULL) {

  // add js (from reuse.mustache)
  drupal_add_js("https://google-code-prettify.googlecode.com/svn/loader/run_prettify.js", array('type'=>'external'));
  drupal_add_js("https://google-code-prettify.googlecode.com/svn/trunk/src/lang-sql.js", array('type'=>'external'));
  //drupal_add_js(drupal_get_path('module', 'landbook').'/js/controller/reuse.js', array('scope' => 'footer'));

  $data = array(
    'namespace' => '',
    'language'  => '',
    'query'     => '',
    'html'      => '',
    'result'    => '',
    // #application
    '#application' => array('sparql-url' => 'WTF?'),
  );
  return theme("reuse", array(
    'title'     => 'Landbook reuse',
    'data'      => $data,
  ));
}
