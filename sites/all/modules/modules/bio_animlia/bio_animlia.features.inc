<?php
/**
 * @file
 * bio_animlia.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bio_animlia_ctools_plugin_api($module = NULL, $api = NULL) {
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
function bio_animlia_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bio_animlia_node_info() {
  $items = array(
    'animalia' => array(
      'name' => t('Animalia'),
      'base' => 'node_content',
      'description' => t('Content-type for: ANIMALIA'),
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
function bio_animlia_default_search_api_index() {
  $items = array();
  $items['animalia'] = entity_import('search_api_index', '{
    "name" : "Animalia",
    "machine_name" : "animalia",
    "description" : null,
    "server" : "anim",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_class_animalia" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_common_name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_division_animalia" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_family_animalia" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_genus_animalia" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_kingdom" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_order_animalia" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_suborder_animalia" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_subphylum_animalia" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_therapeutic" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_ranges_alter" : { "status" : 0, "weight" : "-50", "settings" : { "fields" : [] } },
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
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
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
function bio_animlia_default_search_api_server() {
  $items = array();
  $items['anim'] = entity_import('search_api_server', '{
    "name" : "Animalia",
    "machine_name" : "anim",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 0,
      "indexes" : { "animalia" : {
          "nid" : {
            "table" : "search_api_db_animalia",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_animalia_field_tags",
            "column" : "field_tags",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_therapeutic" : {
            "table" : "search_api_db_animalia_field_therapeutic",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_common_name" : {
            "table" : "search_api_db_animalia_field_common_name",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_division_animalia" : {
            "table" : "search_api_db_animalia",
            "column" : "field_division_animalia",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_class_animalia" : {
            "table" : "search_api_db_animalia",
            "column" : "field_class_animalia",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_order_animalia" : {
            "table" : "search_api_db_animalia",
            "column" : "field_order_animalia",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_family_animalia" : {
            "table" : "search_api_db_animalia",
            "column" : "field_family_animalia",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_subphylum_animalia" : {
            "table" : "search_api_db_animalia",
            "column" : "field_subphylum_animalia",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_genus_animalia" : {
            "table" : "search_api_db_animalia",
            "column" : "field_genus_animalia",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_animalia",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_kingdom" : {
            "table" : "search_api_db_animalia",
            "column" : "field_kingdom",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_suborder_animalia" : {
            "table" : "search_api_db_animalia",
            "column" : "field_suborder_animalia",
            "type" : "integer",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_animalia",
            "column" : "title",
            "type" : "string",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_animalia",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_animalia",
            "column" : "author",
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
