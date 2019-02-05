<?php
/**
 * @file
 * bio_plantae.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bio_plantae_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
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
function bio_plantae_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bio_plantae_node_info() {
  $items = array(
    'flora' => array(
      'name' => t('Plantae'),
      'base' => 'node_content',
      'description' => t('Content-type for: PLANTAE'),
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
function bio_plantae_default_search_api_index() {
  $items = array();
  $items['flora'] = entity_import('search_api_index', '{
    "name" : "Plantae",
    "machine_name" : "flora",
    "description" : null,
    "server" : "flora",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "flora" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "field_class" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_common_name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_family" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_genus" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_kingdom" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_margin_id" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_needles" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_order" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_phylum" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_shape_id" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_stamp_country_issued" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_subclass" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_subkingdom" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_superdivision" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_tags" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_therapeutic" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_therapeutic:name" : { "type" : "list\\u003Cstring\\u003E" },
        "field_therapeutic:vocabulary" : {
          "type" : "list\\u003Cinteger\\u003E",
          "entity_type" : "taxonomy_vocabulary"
        },
        "field_thorns" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "nid" : { "type" : "integer" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
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
        "search_api_alter_add_multi_aggregation" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : {
              "title" : true,
              "field_tags" : true,
              "field_therapeutic" : true,
              "field_order" : true
            },
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
function bio_plantae_default_search_api_server() {
  $items = array();
  $items['flora'] = entity_import('search_api_server', '{
    "name" : "Plantae",
    "machine_name" : "flora",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "partial_matches" : 0,
      "indexes" : { "flora" : {
          "field_phylum" : {
            "table" : "search_api_db_flora",
            "column" : "field_phylum",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_family" : {
            "table" : "search_api_db_flora",
            "column" : "field_family",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_class" : {
            "table" : "search_api_db_flora",
            "column" : "field_class",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_order" : {
            "table" : "search_api_db_flora",
            "column" : "field_order",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_flora",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_flora",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "author" : {
            "table" : "search_api_db_flora",
            "column" : "author",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_access_node" : {
            "table" : "search_api_db_flora_search_api_access_node",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_kingdom" : {
            "table" : "search_api_db_flora",
            "column" : "field_kingdom",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_genus" : {
            "table" : "search_api_db_flora",
            "column" : "field_genus",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_subkingdom" : {
            "table" : "search_api_db_flora",
            "column" : "field_subkingdom",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_subclass" : {
            "table" : "search_api_db_flora",
            "column" : "field_subclass",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_superdivision" : {
            "table" : "search_api_db_flora",
            "column" : "field_superdivision",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_common_name" : {
            "table" : "search_api_db_flora_field_common_name",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_therapeutic:name" : {
            "table" : "search_api_db_flora_field_therapeutic_name",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_therapeutic" : {
            "table" : "search_api_db_flora_field_therapeutic",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "nid" : {
            "table" : "search_api_db_flora",
            "column" : "nid",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_needles" : {
            "table" : "search_api_db_flora",
            "column" : "field_needles",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_therapeutic:vocabulary" : {
            "table" : "search_api_db_flora_field_therapeutic_vocabulary",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_flora_field_tags",
            "column" : "field_tags",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_margin_id" : {
            "table" : "search_api_db_flora_field_margin_id",
            "column" : "field_margin_id",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_flora",
            "column" : "title",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_shape_id" : {
            "table" : "search_api_db_flora_field_shape_id",
            "column" : "field_shape_id",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_thorns" : {
            "table" : "search_api_db_flora",
            "column" : "field_thorns",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_stamp_country_issued" : {
            "table" : "search_api_db_flora",
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

/**
 * Implements hook_default_search_api_sort().
 */
function bio_plantae_default_search_api_sort() {
  $items = array();
  $items['flora__author'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "author",
    "name" : "Author",
    "enabled" : "0",
    "weight" : "-94",
    "identifier" : "flora__author",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Author" },
    "rdf_mapping" : []
  }');
  $items['flora__field_class'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_class",
    "name" : "Class",
    "enabled" : "0",
    "weight" : "-99",
    "identifier" : "flora__field_class",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Class-Plantae" },
    "rdf_mapping" : []
  }');
  $items['flora__field_family'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_family",
    "name" : "Family",
    "enabled" : "0",
    "weight" : "-90",
    "identifier" : "flora__field_family",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Family-Plantae" },
    "rdf_mapping" : []
  }');
  $items['flora__field_genus'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_genus",
    "name" : "Genus",
    "enabled" : "0",
    "weight" : "-89",
    "identifier" : "flora__field_genus",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Genus-Plantae" },
    "rdf_mapping" : []
  }');
  $items['flora__field_kingdom'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_kingdom",
    "name" : "Kingdom",
    "enabled" : "0",
    "weight" : "-92",
    "identifier" : "flora__field_kingdom",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Kingdom" },
    "rdf_mapping" : []
  }');
  $items['flora__field_margin_id'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_margin_id",
    "name" : "Margin-ID",
    "enabled" : "0",
    "weight" : "-84",
    "identifier" : "flora__field_margin_id",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Margin-ID" },
    "rdf_mapping" : []
  }');
  $items['flora__field_needles'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_needles",
    "name" : "Needles",
    "enabled" : "0",
    "weight" : "-85",
    "identifier" : "flora__field_needles",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Needles" },
    "rdf_mapping" : []
  }');
  $items['flora__field_order'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_order",
    "name" : "Order",
    "enabled" : "1",
    "weight" : "-100",
    "identifier" : "flora__field_order",
    "default_sort" : "1",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Order-Plantae" },
    "rdf_mapping" : []
  }');
  $items['flora__field_phylum'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_phylum",
    "name" : "DIvision",
    "enabled" : "0",
    "weight" : "-91",
    "identifier" : "flora__field_phylum",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Division-Plantae" },
    "rdf_mapping" : []
  }');
  $items['flora__field_subclass'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_subclass",
    "name" : "Subclass",
    "enabled" : "0",
    "weight" : "-87",
    "identifier" : "flora__field_subclass",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Subclass-Plantae" },
    "rdf_mapping" : []
  }');
  $items['flora__field_subkingdom'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_subkingdom",
    "name" : "Subkingdom",
    "enabled" : "0",
    "weight" : "-88",
    "identifier" : "flora__field_subkingdom",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Subkingdom" },
    "rdf_mapping" : []
  }');
  $items['flora__field_superdivision'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_superdivision",
    "name" : "Superdivision",
    "enabled" : "0",
    "weight" : "-86",
    "identifier" : "flora__field_superdivision",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Superdivision" },
    "rdf_mapping" : []
  }');
  $items['flora__field_tags'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "field_tags",
    "name" : "Tags",
    "enabled" : "0",
    "weight" : "-93",
    "identifier" : "flora__field_tags",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Tags" },
    "rdf_mapping" : []
  }');
  $items['flora__nid'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "nid",
    "name" : "Node ID",
    "enabled" : "0",
    "weight" : "-97",
    "identifier" : "flora__nid",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Node ID" },
    "rdf_mapping" : []
  }');
  $items['flora__search_api_language'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "search_api_language",
    "name" : "Item language",
    "enabled" : "0",
    "weight" : "-83",
    "identifier" : "flora__search_api_language",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Item language" },
    "rdf_mapping" : []
  }');
  $items['flora__search_api_relevance'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "search_api_relevance",
    "name" : "Relevance",
    "enabled" : "0",
    "weight" : "-98",
    "identifier" : "flora__search_api_relevance",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "search_api_relevance" },
    "rdf_mapping" : []
  }');
  $items['flora__status'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "status",
    "name" : "Status",
    "enabled" : "0",
    "weight" : "-95",
    "identifier" : "flora__status",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Status" },
    "rdf_mapping" : []
  }');
  $items['flora__title'] = entity_import('search_api_sort', '{
    "index_id" : "flora",
    "field" : "title",
    "name" : "Title",
    "enabled" : "0",
    "weight" : "-96",
    "identifier" : "flora__title",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Title" },
    "rdf_mapping" : []
  }');
  return $items;
}
