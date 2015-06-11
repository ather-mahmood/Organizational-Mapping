<?php
/**
 * @file
 * org_registration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function org_registration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function org_registration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_index().
 */
function org_registration_default_search_api_index() {
  $items = array();
  $items['org_reg_index'] = entity_import('search_api_index', '{
    "name" : "Org Reg Index",
    "machine_name" : "org_reg_index",
    "description" : null,
    "server" : "org_reg_server",
    "item_type" : "user",
    "options" : {
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "created" : { "type" : "date" },
        "field_add_key_staff" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_add_key_staff:field_designation" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_add_key_staff:field_head_office_city" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_add_key_staff:field_head_office_city:field_lat" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_add_key_staff:field_head_office_city:field_lng" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_add_key_staff:field_head_office_city:parent" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_add_key_staff:field_key_staff_email" : { "type" : "list\\u003Ctext\\u003E" },
        "field_add_key_staff:field_key_staff_name" : { "type" : "list\\u003Ctext\\u003E" },
        "field_add_key_staff:field_phone" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_add_key_staff:field_phone:field_number" : { "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E" },
        "field_add_key_staff:field_phone:field_type" : { "type" : "list\\u003Clist\\u003Cstring\\u003E\\u003E" },
        "field_head_office_city" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_head_office_city:field_lat" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_head_office_city:field_lng" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_head_office_city:parent" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_head_office_s_add" : { "type" : "text" },
        "field_logo:file" : { "type" : "integer", "entity_type" : "file" },
        "field_logo:file:name" : { "type" : "text" },
        "field_logo:file:url" : { "type" : "text" },
        "field_operational_presence" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_operational_presence:field_lat" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_operational_presence:field_lng" : { "type" : "list\\u003Cdecimal\\u003E" },
        "field_operational_presence:parent" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_organization_acronym" : { "type" : "text" },
        "field_organization_name" : { "type" : "text" },
        "field_organization_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_phone" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "field_collection_item"
        },
        "field_phone:field_number" : { "type" : "list\\u003Ctext\\u003E" },
        "field_phone:field_type" : { "type" : "list\\u003Cstring\\u003E" },
        "field_registration_year_" : { "type" : "integer" },
        "field_sector" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "last_access" : { "type" : "date" },
        "last_login" : { "type" : "date" },
        "mail" : { "type" : "text" },
        "name" : { "type" : "text" },
        "roles" : { "type" : "list\\u003Cinteger\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "integer" },
        "uid" : { "type" : "integer" },
        "url" : { "type" : "uri" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_role_filter" : {
          "status" : 1,
          "weight" : "-10",
          "settings" : { "default" : "0", "roles" : { "2" : "2" } }
        },
        "search_api_alter_add_hierarchy" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : {
              "field_head_office_city:parent" : "field_head_office_city:parent",
              "field_head_office_city:parents_all" : "field_head_office_city:parents_all",
              "field_operational_presence:parent" : "field_operational_presence:parent",
              "field_operational_presence:parents_all" : "field_operational_presence:parents_all"
            }
          }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : {
              "name" : true,
              "mail" : true,
              "field_head_office_s_add" : true,
              "field_organization_acronym" : true,
              "field_organization_name" : true,
              "field_add_key_staff:field_key_staff_email" : true,
              "field_add_key_staff:field_key_staff_name" : true,
              "field_phone:field_number" : true
            }
          }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "name" : true,
              "mail" : true,
              "field_head_office_s_add" : true,
              "field_organization_acronym" : true,
              "field_organization_name" : true,
              "field_add_key_staff:field_key_staff_email" : true,
              "field_add_key_staff:field_key_staff_name" : true,
              "field_phone:field_number" : true
            },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : {
              "name" : true,
              "mail" : true,
              "field_head_office_s_add" : true,
              "field_organization_acronym" : true,
              "field_organization_name" : true,
              "field_add_key_staff:field_key_staff_email" : true,
              "field_add_key_staff:field_key_staff_name" : true,
              "field_phone:field_number" : true
            },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : {
              "name" : true,
              "mail" : true,
              "field_head_office_s_add" : true,
              "field_organization_acronym" : true,
              "field_organization_name" : true,
              "field_add_key_staff:field_key_staff_email" : true,
              "field_add_key_staff:field_key_staff_name" : true,
              "field_phone:field_number" : true
            },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function org_registration_default_search_api_server() {
  $items = array();
  $items['org_reg_server'] = entity_import('search_api_server', '{
    "name" : "Org Reg Server",
    "machine_name" : "org_reg_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 0,
      "indexes" : { "org_reg_index" : {
          "uid" : {
            "table" : "search_api_db_org_reg_index",
            "column" : "uid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "name" : {
            "table" : "search_api_db_org_reg_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "mail" : {
            "table" : "search_api_db_org_reg_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "url" : {
            "table" : "search_api_db_org_reg_index",
            "column" : "url",
            "type" : "uri",
            "boost" : "1.0"
          },
          "last_access" : {
            "table" : "search_api_db_org_reg_index",
            "column" : "last_access",
            "type" : "date",
            "boost" : "1.0"
          },
          "last_login" : {
            "table" : "search_api_db_org_reg_index",
            "column" : "last_login",
            "type" : "date",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_org_reg_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_org_reg_index",
            "column" : "status",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_add_key_staff" : {
            "table" : "search_api_db_org_reg_index_field_add_key_staff",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_head_office_city" : {
            "table" : "search_api_db_org_reg_index_field_head_office_city",
            "column" : "field_head_office_city",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_head_office_s_add" : {
            "table" : "search_api_db_org_reg_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_organization_acronym" : {
            "table" : "search_api_db_org_reg_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_organization_name" : {
            "table" : "search_api_db_org_reg_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_organization_type" : {
            "table" : "search_api_db_org_reg_index",
            "column" : "field_organization_type",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_phone" : {
            "table" : "search_api_db_org_reg_index_field_phone",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_registration_year_" : {
            "table" : "search_api_db_org_reg_index",
            "column" : "field_registration_year_",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_org_reg_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_head_office_city:parent" : {
            "table" : "search_api_db_org_reg_index_field_head_office_city_parent",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_head_office_city:field_lat" : {
            "table" : "search_api_db_org_reg_index_field_head_office_city_field_lat",
            "column" : "field_head_office_city_field_lat",
            "type" : "list\\u003Cdecimal\\u003E",
            "boost" : "1.0"
          },
          "field_head_office_city:field_lng" : {
            "table" : "search_api_db_org_reg_index_field_head_office_city_field_lng",
            "column" : "field_head_office_city_field_lng",
            "type" : "list\\u003Cdecimal\\u003E",
            "boost" : "1.0"
          },
          "field_phone:field_number" : {
            "table" : "search_api_db_org_reg_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_phone:field_type" : {
            "table" : "search_api_db_org_reg_index_field_phone_field_type",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_add_key_staff:field_head_office_city" : {
            "table" : "search_api_db_org_reg_index_field_add_key_staff_field_head_off",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_add_key_staff:field_phone" : {
            "table" : "search_api_db_org_reg_index_field_add_key_staff_field_phone",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_add_key_staff:field_designation" : {
            "table" : "search_api_db_org_reg_index_field_add_key_staff_field_designat",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_add_key_staff:field_key_staff_email" : {
            "table" : "search_api_db_org_reg_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_add_key_staff:field_key_staff_name" : {
            "table" : "search_api_db_org_reg_index_text",
            "type" : "list\\u003Ctext\\u003E",
            "boost" : "1.0"
          },
          "field_add_key_staff:field_head_office_city:parent" : {
            "table" : "search_api_db_org_reg_index_field_add_key_staff_field_head_o_1",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_add_key_staff:field_head_office_city:field_lat" : {
            "table" : "search_api_db_org_reg_index_field_add_key_staff_field_head_o_2",
            "column" : "value",
            "type" : "list\\u003Cdecimal\\u003E",
            "boost" : "1.0"
          },
          "field_add_key_staff:field_head_office_city:field_lng" : {
            "table" : "search_api_db_org_reg_index_field_add_key_staff_field_head_o_3",
            "column" : "value",
            "type" : "list\\u003Cdecimal\\u003E",
            "boost" : "1.0"
          },
          "field_add_key_staff:field_phone:field_number" : {
            "table" : "search_api_db_org_reg_index_text",
            "type" : "list\\u003Clist\\u003Ctext\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_add_key_staff:field_phone:field_type" : {
            "table" : "search_api_db_org_reg_index_field_add_key_staff_field_phone_fi",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cstring\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_logo:file" : {
            "table" : "search_api_db_org_reg_index",
            "column" : "field_logo_file",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_logo:file:name" : {
            "table" : "search_api_db_org_reg_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_logo:file:url" : {
            "table" : "search_api_db_org_reg_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_operational_presence" : {
            "table" : "search_api_db_org_reg_index_field_operational_presence",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_operational_presence:parent" : {
            "table" : "search_api_db_org_reg_index_field_operational_presence_parent",
            "column" : "value",
            "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
            "boost" : "1.0"
          },
          "field_operational_presence:field_lat" : {
            "table" : "search_api_db_org_reg_index_field_operational_presence_field_l",
            "column" : "value",
            "type" : "list\\u003Cdecimal\\u003E",
            "boost" : "1.0"
          },
          "field_operational_presence:field_lng" : {
            "table" : "search_api_db_org_reg_index_field_operational_presence_field_1",
            "column" : "value",
            "type" : "list\\u003Cdecimal\\u003E",
            "boost" : "1.0"
          },
          "field_sector" : {
            "table" : "search_api_db_org_reg_index_field_sector",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "roles" : {
            "table" : "search_api_db_org_reg_index_roles",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
