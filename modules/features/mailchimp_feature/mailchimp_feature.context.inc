<?php
/**
 * @file
 * mailchimp_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function mailchimp_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mailchimp-block-legend-context';
  $context->description = 'adds a subscription block';
  $context->tag = 'mailchimp';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'project/legend' => 'project/legend',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'mailchimp_lists-legend_bulletin' => array(
          'module' => 'mailchimp_lists',
          'delta' => 'legend_bulletin',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('adds a subscription block');
  t('mailchimp');
  $export['mailchimp-block-legend-context'] = $context;

  return $export;
}
