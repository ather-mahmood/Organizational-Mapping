<?php
/**
 * @file
 * org_registration.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function org_registration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_loginregister:user
  $menu_links['main-menu_loginregister:user'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'Login/Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_loginregister:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 50,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Login/Register');


  return $menu_links;
}
