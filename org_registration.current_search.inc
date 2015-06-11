<?php
/**
 * @file
 * org_registration.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function org_registration_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'text_search';
  $item->label = 'text_search';
  $item->settings = array(
    'items' => array(
      'results' => array(
        'id' => 'text',
        'label' => 'Results',
        'text' => ' Filter: <span class="facetapi-active">[facetapi_results:result-count] item</span> displayed',
        'plural' => 1,
        'text_plural' => 'Filter: <span class="facetapi-active">[facetapi_results:result-count] items</span> displayed',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 1,
        'element' => 'div',
        'css' => 0,
        'classes' => '',
        'weight' => '-50',
      ),
      'active_items' => array(
        'id' => 'active',
        'label' => 'Active items',
        'pattern' => '[facetapi_active:active-value]',
        'keys' => 1,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '-49',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '1',
    ),
  );
  $export['text_search'] = $item;

  return $export;
}
