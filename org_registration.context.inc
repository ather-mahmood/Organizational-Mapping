<?php
/**
 * @file
 * org_registration.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function org_registration_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'organization';
  $context->description = '';
  $context->tag = 'Organization Registration';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'search:org_table' => 'search:org_table',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-dgU1Nlp0u1M9mPU1rcvC0oyyNZ7pgKg6' => array(
          'module' => 'facetapi',
          'delta' => 'dgU1Nlp0u1M9mPU1rcvC0oyyNZ7pgKg6',
          'region' => 'sidebar_first',
          'weight' => '-13',
        ),
        'facetapi-H8SN3YUQPMWuTZGrm8oBvtDlWRshdDd0' => array(
          'module' => 'facetapi',
          'delta' => 'H8SN3YUQPMWuTZGrm8oBvtDlWRshdDd0',
          'region' => 'sidebar_first',
          'weight' => '-12',
        ),
        'facetapi-to8HNBfTtXTy5VL1G4gCYLthJOuy0trg' => array(
          'module' => 'facetapi',
          'delta' => 'to8HNBfTtXTy5VL1G4gCYLthJOuy0trg',
          'region' => 'sidebar_first',
          'weight' => '-11',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Organization Registration');
  $export['organization'] = $context;

  return $export;
}
