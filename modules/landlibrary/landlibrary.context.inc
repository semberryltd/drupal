<?php
/**
 * @file
 * landlibrary.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function landlibrary_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'library-menu-context';
  $context->description = 'Contextually display landlibrary section header menu';
  $context->tag = 'landlibrary';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'landlibrary_resource' => 'landlibrary_resource',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'library' => 'library',
        'library/reuse' => 'library/reuse',
        'library/sources' => 'library/sources',
        'library/search' => 'library/search',
        'library/contribute' => 'library/contribute',
        'library/*' => 'library/*',
        'node/10160' => 'node/10160',
        'node/11473' => 'node/11473',
        'node/10159' => 'node/10159',
        'node/11474' => 'node/11474',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-landlibrary-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-landlibrary-menu',
          'region' => 'section_header',
          'weight' => '1',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Contextually display landlibrary section header menu');
  t('landlibrary');
  $export['library-menu-context'] = $context;

  return $export;
}
