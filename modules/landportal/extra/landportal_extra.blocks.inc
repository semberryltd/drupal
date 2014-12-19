<?php
/**
 * @file
 * Landportal extra blocks
 *
 * Provide customizable blocks for the landportal
 * - footer
 *
 * Original work by: WESO (http://weso.es/)
 * Drupal refactoring: Jules <jules@ker.bz>
 */

function landportal_extra_block_info() {
  $blocks['landportal_footer'] = array(
    'info' => t('Landportal Footer'),
    'status' => TRUE,
    'region' => 'footer',
  );
  return $blocks;
}

function landportal_extra_block_configure($delta='') {
   $form = array();
  
   switch($delta) {
   case 'landportal_footer' :
     $form['text_body'] = array(
       '#type' => 'text_format',
       '#title' => t('Landportal footer text'),
       '#default_value' => variable_get('landportal_footer_text', 'Landportal | (c)'),
     );
     break;
   }
   return $form;
 }

function landportal_extra_block_save($delta = '', $edit = array()) {
  switch($delta) {
  case 'landportal_footer' :
    // Saving the WYSIWYG text      
    variable_set('landportal_footer_text', $edit['text_body']['value']);
    break;
  }
}

function landportal_extra_block_view($delta = '') {
  // This example is adapted from node.module.
  $block = array();

  switch ($delta) {
  case 'landportal_footer':
    $text = variable_get('landportal_footer_text', '');
    $block['content'] = $text;
    break;
  }
  return $block;
}
