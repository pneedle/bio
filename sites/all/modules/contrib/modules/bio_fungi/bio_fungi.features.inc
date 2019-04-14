<?php
/**
 * @file
 * bio_fungi.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bio_fungi_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "js_injector" && $api == "js_injector_rules") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bio_fungi_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bio_fungi_node_info() {
  $items = array(
    'fungi' => array(
      'name' => t('Fungi'),
      'base' => 'node_content',
      'description' => t('Content-type for: FUNGI'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function bio_fungi_default_search_api_index() {
  $items = array();
  $items['fungi'] = entity_import('search_api_index', '{
    "name" : "Fungi",
    "machine_name" : "fungi",
    "description" : null,
    "server" : "fungi",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_class_fungi" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_division_fungi" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_family_fungi" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_genus_fungi" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_kingdom" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_order_fungi" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_stamp_country_issued" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_subkingdom" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_superdivision" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : [] },
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_multi_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 0,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
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
function bio_fungi_default_search_api_server() {
  $items = array();
  $items['fungi'] = entity_import('search_api_server', '{
    "name" : "Fungi",
    "machine_name" : "fungi",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 0,
      "indexes" : { "fungi" : {
          "nid" : {
            "table" : "search_api_db_fungi",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_fungi",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_kingdom" : {
            "table" : "search_api_db_fungi",
            "column" : "field_kingdom",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_subkingdom" : {
            "table" : "search_api_db_fungi",
            "column" : "field_subkingdom",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_fungi",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_superdivision" : {
            "table" : "search_api_db_fungi",
            "column" : "field_superdivision",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_division_fungi" : {
            "table" : "search_api_db_fungi",
            "column" : "field_division_fungi",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_order_fungi" : {
            "table" : "search_api_db_fungi",
            "column" : "field_order_fungi",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_family_fungi" : {
            "table" : "search_api_db_fungi",
            "column" : "field_family_fungi",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_genus_fungi" : {
            "table" : "search_api_db_fungi",
            "column" : "field_genus_fungi",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_class_fungi" : {
            "table" : "search_api_db_fungi",
            "column" : "field_class_fungi",
            "type" : "integer",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_fungi",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_stamp_country_issued" : {
            "table" : "search_api_db_fungi",
            "column" : "field_stamp_country_issued",
            "type" : "integer",
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
