<?php
/**
 * @file
 * org_registration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function org_registration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'operational_presence';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Operational Presence';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Operational Presence';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Organization Name (field_organization_name) */
  $handler->display->display_options['filters']['field_organization_name_value']['id'] = 'field_organization_name_value';
  $handler->display->display_options['filters']['field_organization_name_value']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['filters']['field_organization_name_value']['field'] = 'field_organization_name_value';
  $handler->display->display_options['filters']['field_organization_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_organization_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_name_value']['expose']['operator_id'] = 'field_organization_name_value_op';
  $handler->display->display_options['filters']['field_organization_name_value']['expose']['label'] = 'Organization Name';
  $handler->display->display_options['filters']['field_organization_name_value']['expose']['operator'] = 'field_organization_name_value_op';
  $handler->display->display_options['filters']['field_organization_name_value']['expose']['identifier'] = 'field_organization_name_value';
  $handler->display->display_options['filters']['field_organization_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: Operational Presence (field_operational_presence) */
  $handler->display->display_options['filters']['field_operational_presence_tid']['id'] = 'field_operational_presence_tid';
  $handler->display->display_options['filters']['field_operational_presence_tid']['table'] = 'field_data_field_operational_presence';
  $handler->display->display_options['filters']['field_operational_presence_tid']['field'] = 'field_operational_presence_tid';
  $handler->display->display_options['filters']['field_operational_presence_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_operational_presence_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_operational_presence_tid']['expose']['operator_id'] = 'field_operational_presence_tid_op';
  $handler->display->display_options['filters']['field_operational_presence_tid']['expose']['label'] = 'District';
  $handler->display->display_options['filters']['field_operational_presence_tid']['expose']['operator'] = 'field_operational_presence_tid_op';
  $handler->display->display_options['filters']['field_operational_presence_tid']['expose']['identifier'] = 'field_operational_presence_tid';
  $handler->display->display_options['filters']['field_operational_presence_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_operational_presence_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_operational_presence_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_operational_presence_tid']['vocabulary'] = 'location';
  $handler->display->display_options['filters']['field_operational_presence_tid']['hierarchy'] = 1;
  /* Filter criterion: User: Organization Type (field_organization_type) */
  $handler->display->display_options['filters']['field_organization_type_tid']['id'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['filters']['field_organization_type_tid']['field'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['operator_id'] = 'field_organization_type_tid_op';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['label'] = 'Organization Type';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['operator'] = 'field_organization_type_tid_op';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['identifier'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_organization_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_organization_type_tid']['vocabulary'] = 'organization_type';
  /* Filter criterion: User: Organization Type (field_organization_type) */
  $handler->display->display_options['filters']['field_organization_type_tid_1']['id'] = 'field_organization_type_tid_1';
  $handler->display->display_options['filters']['field_organization_type_tid_1']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['filters']['field_organization_type_tid_1']['field'] = 'field_organization_type_tid';
  $handler->display->display_options['filters']['field_organization_type_tid_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_organization_type_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_organization_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_organization_type_tid_1']['vocabulary'] = 'organization_type';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_operational_presence' => 'field_operational_presence',
    'field_lat' => 'field_lat',
    'field_lng' => 'field_lng',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_operational_presence' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_lng' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Operational Presence (field_operational_presence) */
  $handler->display->display_options['relationships']['field_operational_presence_tid']['id'] = 'field_operational_presence_tid';
  $handler->display->display_options['relationships']['field_operational_presence_tid']['table'] = 'field_data_field_operational_presence';
  $handler->display->display_options['relationships']['field_operational_presence_tid']['field'] = 'field_operational_presence_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Operational Presence */
  $handler->display->display_options['fields']['field_operational_presence']['id'] = 'field_operational_presence';
  $handler->display->display_options['fields']['field_operational_presence']['table'] = 'field_data_field_operational_presence';
  $handler->display->display_options['fields']['field_operational_presence']['field'] = 'field_operational_presence';
  $handler->display->display_options['fields']['field_operational_presence']['delta_offset'] = '0';
  /* Field: Taxonomy term: Lat */
  $handler->display->display_options['fields']['field_lat']['id'] = 'field_lat';
  $handler->display->display_options['fields']['field_lat']['table'] = 'field_data_field_lat';
  $handler->display->display_options['fields']['field_lat']['field'] = 'field_lat';
  $handler->display->display_options['fields']['field_lat']['relationship'] = 'field_operational_presence_tid';
  /* Field: Taxonomy term: Lng */
  $handler->display->display_options['fields']['field_lng']['id'] = 'field_lng';
  $handler->display->display_options['fields']['field_lng']['table'] = 'field_data_field_lng';
  $handler->display->display_options['fields']['field_lng']['field'] = 'field_lng';
  $handler->display->display_options['fields']['field_lng']['relationship'] = 'field_operational_presence_tid';
  $handler->display->display_options['fields']['field_lng']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['path'] = 'operational-presence';

  /* Display: Op Presence Overlay */
  $handler = $view->new_display('openlayers', 'Op Presence Overlay', 'op_pres_overlay');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'other_latlon',
    'other_lat' => 'field_lat',
    'other_lon' => 'field_lng',
    'wkt' => 'name',
    'other_top' => 'name',
    'other_right' => 'name',
    'other_bottom' => 'name',
    'other_left' => 'name',
    'name_field' => 'field_organization_name',
    'description_field' => 'field_organization_type',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Field: Operational Presence (field_operational_presence) */
  $handler->display->display_options['relationships']['field_operational_presence_tid']['id'] = 'field_operational_presence_tid';
  $handler->display->display_options['relationships']['field_operational_presence_tid']['table'] = 'field_data_field_operational_presence';
  $handler->display->display_options['relationships']['field_operational_presence_tid']['field'] = 'field_operational_presence_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Operational Presence */
  $handler->display->display_options['fields']['field_operational_presence']['id'] = 'field_operational_presence';
  $handler->display->display_options['fields']['field_operational_presence']['table'] = 'field_data_field_operational_presence';
  $handler->display->display_options['fields']['field_operational_presence']['field'] = 'field_operational_presence';
  $handler->display->display_options['fields']['field_operational_presence']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_operational_presence']['delta_offset'] = '0';
  /* Field: User: Organization Name */
  $handler->display->display_options['fields']['field_organization_name']['id'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['table'] = 'field_data_field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['field'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['label'] = '';
  $handler->display->display_options['fields']['field_organization_name']['element_label_colon'] = FALSE;
  /* Field: User: Organization Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['label'] = '';
  $handler->display->display_options['fields']['field_organization_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_organization_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Taxonomy term: Lat */
  $handler->display->display_options['fields']['field_lat']['id'] = 'field_lat';
  $handler->display->display_options['fields']['field_lat']['table'] = 'field_data_field_lat';
  $handler->display->display_options['fields']['field_lat']['field'] = 'field_lat';
  $handler->display->display_options['fields']['field_lat']['relationship'] = 'field_operational_presence_tid';
  /* Field: Taxonomy term: Lng */
  $handler->display->display_options['fields']['field_lng']['id'] = 'field_lng';
  $handler->display->display_options['fields']['field_lng']['table'] = 'field_data_field_lng';
  $handler->display->display_options['fields']['field_lng']['field'] = 'field_lng';
  $handler->display->display_options['fields']['field_lng']['relationship'] = 'field_operational_presence_tid';
  $handler->display->display_options['fields']['field_lng']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );

  /* Display: Op Presence Map */
  $handler = $view->new_display('page', 'Op Presence Map', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'org_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'op-presence';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: bl Op Presence Map */
  $handler = $view->new_display('block', 'bl Op Presence Map', 'bl_org_map');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'org_map';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['operational_presence'] = $view;

  $view = new view();
  $view->name = 'search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_org_reg_index';
  $view->human_name = 'Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed User: User ID */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Filter criterion: Indexed User: Organization Type */
  $handler->display->display_options['filters']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['filters']['field_organization_type']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['filters']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['filters']['field_organization_type']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_organization_type']['value'] = array();
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Organizations */
  $handler = $view->new_display('page', 'Organizations', 'org_table');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Organizations';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'url' => 'url',
    'field_organization_acronym' => 'field_organization_acronym',
    'field_organization_name' => 'field_organization_name',
    'field_organization_type' => 'field_organization_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_acronym' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed User: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed User: Organization Acronym */
  $handler->display->display_options['fields']['field_organization_acronym']['id'] = 'field_organization_acronym';
  $handler->display->display_options['fields']['field_organization_acronym']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['fields']['field_organization_acronym']['field'] = 'field_organization_acronym';
  $handler->display->display_options['fields']['field_organization_acronym']['exclude'] = TRUE;
  /* Field: Indexed User: Organization Name */
  $handler->display->display_options['fields']['field_organization_name']['id'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['fields']['field_organization_name']['field'] = 'field_organization_name';
  $handler->display->display_options['fields']['field_organization_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_organization_name']['alter']['text'] = '<a href="[url]">[field_organization_name] [field_organization_acronym]</a>';
  /* Field: Indexed User: Organization Type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_organization_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_organization_type']['bypass_access'] = 0;
  /* Field: Indexed User: Email */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['label'] = 'Organization Email';
  $handler->display->display_options['fields']['mail']['link_to_entity'] = 0;
  /* Field: Indexed User: Head office City */
  $handler->display->display_options['fields']['field_head_office_city']['id'] = 'field_head_office_city';
  $handler->display->display_options['fields']['field_head_office_city']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['fields']['field_head_office_city']['field'] = 'field_head_office_city';
  $handler->display->display_options['fields']['field_head_office_city']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_head_office_city']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_head_office_city']['bypass_access'] = 0;
  /* Field: Indexed User: Head office street address */
  $handler->display->display_options['fields']['field_head_office_s_add']['id'] = 'field_head_office_s_add';
  $handler->display->display_options['fields']['field_head_office_s_add']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['fields']['field_head_office_s_add']['field'] = 'field_head_office_s_add';
  /* Field: Indexed User: Operational Presence */
  $handler->display->display_options['fields']['field_operational_presence']['id'] = 'field_operational_presence';
  $handler->display->display_options['fields']['field_operational_presence']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['fields']['field_operational_presence']['field'] = 'field_operational_presence';
  $handler->display->display_options['fields']['field_operational_presence']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_operational_presence']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_operational_presence']['bypass_access'] = 0;
  /* Field: Phone: Number (indexed) */
  $handler->display->display_options['fields']['field_phone_field_number']['id'] = 'field_phone_field_number';
  $handler->display->display_options['fields']['field_phone_field_number']['table'] = 'search_api_index_org_reg_index';
  $handler->display->display_options['fields']['field_phone_field_number']['field'] = 'field_phone_field_number';
  $handler->display->display_options['fields']['field_phone_field_number']['label'] = 'Phone';
  $handler->display->display_options['path'] = 'search';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Organizations';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['search'] = $view;

  return $export;
}
