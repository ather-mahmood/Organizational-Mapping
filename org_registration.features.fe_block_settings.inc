<?php
/**
 * @file
 * org_registration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function org_registration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'beauty_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beauty_theme',
        'weight' => 3,
      ),
      'blogger_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blogger_theme',
        'weight' => 3,
      ),
      'business' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'business',
        'weight' => 3,
      ),
      'corporateclean' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporateclean',
        'weight' => 3,
      ),
      'creative_responsive_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'creative_responsive_theme',
        'weight' => 3,
      ),
      'nexus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nexus',
        'weight' => 3,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'beauty_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'beauty_theme',
        'weight' => 0,
      ),
      'blogger_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blogger_theme',
        'weight' => 0,
      ),
      'business' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'business',
        'weight' => 0,
      ),
      'corporateclean' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'corporateclean',
        'weight' => 0,
      ),
      'creative_responsive_theme' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'creative_responsive_theme',
        'weight' => 0,
      ),
      'nexus' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'nexus',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'beauty_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'beauty_theme',
        'weight' => -14,
      ),
      'blogger_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'blogger_theme',
        'weight' => -14,
      ),
      'business' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'business',
        'weight' => -14,
      ),
      'corporateclean' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'corporateclean',
        'weight' => -14,
      ),
      'creative_responsive_theme' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'creative_responsive_theme',
        'weight' => -14,
      ),
      'nexus' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'nexus',
        'weight' => -14,
      ),
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 10,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
