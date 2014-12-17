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
  return theme('content', array(
                             'title' => 'Landbook reuse',
                             '#markup' => array('data'=>'how to reuse our data'),
  ));
}
