<?php
/**
 * @file
 * lumc_search_index_di.features.inc
 */

/**
 * Implements hook_default_search_api_index().
 */
function lumc_search_index_di_default_search_api_index() {
  $items = array();
  $items['atlas_index'] = entity_import('search_api_index', '{
    "name" : "Data items index",
    "machine_name" : "atlas_index",
    "description" : null,
    "server" : "apache_solr",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "data_item" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "author" : { "type" : "integer", "entity_type" : "user" },
        "changed" : { "type" : "date" },
        "created" : { "type" : "date" },
        "field_anatomical_structures:as_direct_nodes" : { "type" : "list\\u003Clist\\u003Cstring\\u003E\\u003E" },
        "field_anatomical_structures:field_as_anatomical_region" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_anatomical_structures:field_as_anatomical_region:parents_all" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_anatomical_structures:field_as_anatomical_system" : {
          "type" : "list\\u003Clist\\u003Cinteger\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_anatomical_structures:field_as_anatomical_system:parents_all" : {
          "type" : "list\\u003Clist\\u003Clist\\u003Cinteger\\u003E\\u003E\\u003E",
          "entity_type" : "taxonomy_term"
        },
        "field_anatomical_structures:nid" : { "type" : "list\\u003Cinteger\\u003E" },
        "field_di_anatomy_in_practice" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_di_clinical_field" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_di_clinical_field:parents_all" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_di_data_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_di_doc_reference:url" : { "type" : "text" },
        "field_di_document_blog:summary" : { "type" : "text" },
        "field_di_document_blog:value" : { "type" : "text" },
        "field_di_document_file:description" : { "type" : "text" },
        "field_di_document_file:file" : { "type" : "integer", "entity_type" : "file" },
        "field_di_document_microscopy:summary" : { "type" : "text" },
        "field_di_document_microscopy:value" : { "type" : "text" },
        "field_di_document_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_di_educational_level" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_di_image:alt" : { "type" : "text" },
        "field_di_image:file" : { "type" : "integer", "entity_type" : "file" },
        "field_di_image:title" : { "type" : "text" },
        "field_di_image_collection" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_di_image_link:url" : { "type" : "text" },
        "field_di_image_technique" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_di_image_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_di_license" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_di_presentation_file:description" : { "type" : "text" },
        "field_di_presentation_file:file" : { "type" : "integer", "entity_type" : "file" },
        "field_di_presentation_reference" : { "type" : "text" },
        "field_di_presentation_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_di_staining_microscopy" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_di_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_di_video_type" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_di_view" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_institution" : { "type" : "integer", "entity_type" : "node" },
        "field_institution:nid" : { "type" : "integer" },
        "field_state" : { "type" : "integer" },
        "search_api_access_node" : { "type" : "list\\u003Cstring\\u003E" },
        "search_api_language" : { "type" : "string" },
        "status" : { "type" : "boolean" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 1, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true } }
        },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true },
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
    "read_only" : "0"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_page().
 */
function lumc_search_index_di_default_search_api_page() {
  $items = array();
  $items['data_items'] = entity_import('search_api_page', '{
    "index_id" : "atlas_index",
    "path" : "data-items",
    "name" : "Data items",
    "machine_name" : "data_items",
    "description" : "",
    "options" : {
      "mode" : "terms",
      "fields" : {
        "field_di_document_blog:summary" : "field_di_document_blog:summary",
        "field_di_document_blog:value" : "field_di_document_blog:value",
        "field_di_document_file:description" : "field_di_document_file:description",
        "field_di_document_microscopy:summary" : "field_di_document_microscopy:summary",
        "field_di_document_microscopy:value" : "field_di_document_microscopy:value",
        "field_di_image:alt" : "field_di_image:alt",
        "field_di_image:title" : "field_di_image:title",
        "field_di_presentation_file:description" : "field_di_presentation_file:description",
        "field_di_presentation_reference" : "field_di_presentation_reference",
        "title" : "title"
      },
      "per_page" : "10",
      "result_page_search_form" : 1,
      "get_per_page" : 0,
      "view_mode" : "search_api_page_result",
      "language_filter" : [],
      "empty_behavior" : ""
    },
    "enabled" : "1"
  }');
  return $items;
}
