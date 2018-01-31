<?php
/**
 * @file
 * lumc_facet_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function lumc_facet_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_anatomical_structures:as_direct_nodes';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_anatomical_structures:as_direct_nodes';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '1',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_anatomical_structures:as_direct_nodes'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_anatomical_structures:field_as_anatomical_region:parents_all';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_anatomical_structures:field_as_anatomical_region:parents_all';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_anatomical_structures:field_as_anatomical_region:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_anatomical_structures:field_as_anatomical_system:parents_all';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_anatomical_structures:field_as_anatomical_system:parents_all';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_anatomical_structures:field_as_anatomical_system:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_anatomical_structures:nid';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_anatomical_structures:nid';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_anatomical_structures:nid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_di_anatomy_in_practice';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_di_anatomy_in_practice';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_di_anatomy_in_practice'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_di_clinical_field';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_di_clinical_field';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_di_clinical_field'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_di_data_category';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_di_data_category';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_di_data_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_di_educational_level';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_di_educational_level';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_di_educational_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_di_image_collection';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_di_image_collection';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_di_image_collection'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_di_image_technique';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_di_image_technique';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '1',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_di_image_technique'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_di_image_type';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_di_image_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_di_image_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_di_license';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_di_license';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_di_license'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_di_staining_microscopy';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_di_staining_microscopy';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_di_staining_microscopy'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_di_type';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_di_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_di_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_di_view';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_di_view';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_di_view'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::field_institution';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'field_institution';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::field_institution'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index::search_api_language';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = '';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@atlas_index::search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_anatomical_structures:as_direct_nodes';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_anatomical_structures:as_direct_nodes';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'lumc_as_direct_relations',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_anatomical_structures:as_direct_nodes'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_anatomical_structures:field_as_anatomical_region:parents_all';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_anatomical_structures:field_as_anatomical_region:parents_all';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => 'test text',
      'format' => 'html',
    ),
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
  );
  $export['search_api@atlas_index:block:field_anatomical_structures:field_as_anatomical_region:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_anatomical_structures:field_as_anatomical_system:parents_all';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_anatomical_structures:field_as_anatomical_system:parents_all';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
  );
  $export['search_api@atlas_index:block:field_anatomical_structures:field_as_anatomical_system:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_anatomical_structures:nid';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_anatomical_structures:nid';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'lumc_as_autocomplete',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 1,
    'reset_link_text' => 'Reset',
    'ajax_select_default_option_label' => 'Any',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_anatomical_structures:nid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_di_anatomy_in_practice';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_anatomy_in_practice';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_di_anatomy_in_practice'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_di_clinical_field';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_clinical_field';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_di_clinical_field'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_di_data_category';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_data_category';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_di_data_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_di_educational_level';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_educational_level';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_di_educational_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_di_image_collection';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_image_collection';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_di_image_collection'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_di_image_technique';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_image_technique';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'taxonomy_weight' => 'taxonomy_weight',
      'active' => 0,
      'count' => 0,
      'display' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'taxonomy_weight' => '0',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'taxonomy_weight' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_di_image_technique'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_di_image_type';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_image_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_di_image_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_di_license';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_license';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_di_license'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_di_staining_microscopy';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_staining_microscopy';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_di_staining_microscopy'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_di_type';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_di_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_di_view';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_view';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_di_view'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:field_institution';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'field_institution';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_select',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Any',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:field_institution'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@atlas_index:block:search_api_language';
  $facet->searcher = 'search_api@atlas_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_select',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Any',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@atlas_index:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index::field_anatomical_structures:as_direct_nodes';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = '';
  $facet->facet = 'field_anatomical_structures:as_direct_nodes';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '1',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@learning_path_index::field_anatomical_structures:as_direct_nodes'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index::field_anatomical_structures:field_as_anatomical_region:parents_all';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = '';
  $facet->facet = 'field_anatomical_structures:field_as_anatomical_region:parents_all';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@learning_path_index::field_anatomical_structures:field_as_anatomical_region:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index::field_anatomical_structures:field_as_anatomical_system:parents_all';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = '';
  $facet->facet = 'field_anatomical_structures:field_as_anatomical_system:parents_all';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@learning_path_index::field_anatomical_structures:field_as_anatomical_system:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index::field_anatomical_structures:nid';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = '';
  $facet->facet = 'field_anatomical_structures:nid';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@learning_path_index::field_anatomical_structures:nid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index::field_di_data_category';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = '';
  $facet->facet = 'field_di_data_category';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@learning_path_index::field_di_data_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index::field_di_educational_level';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = '';
  $facet->facet = 'field_di_educational_level';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@learning_path_index::field_di_educational_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index::field_di_license';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = '';
  $facet->facet = 'field_di_license';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@learning_path_index::field_di_license'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index::field_institution';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = '';
  $facet->facet = 'field_institution';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@learning_path_index::field_institution'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index::search_api_language';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = '';
  $facet->facet = 'search_api_language';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'or',
    'hard_limit' => '-1',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
    ),
    'facet_mincount' => '0',
    'facet_missing' => '0',
    'flatten' => 0,
    'individual_parent' => 0,
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => TRUE,
    'facet_search_ids' => array(),
    'exclude' => 0,
  );
  $export['search_api@learning_path_index::search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:author';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'author';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@learning_path_index:block:author'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:field_anatomical_structures';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'field_anatomical_structures';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@learning_path_index:block:field_anatomical_structures'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:field_anatomical_structures:as_direct_nodes';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'field_anatomical_structures:as_direct_nodes';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'lumc_as_direct_relations',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@learning_path_index:block:field_anatomical_structures:as_direct_nodes'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:field_anatomical_structures:field_as_anatomical_region';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'field_anatomical_structures:field_as_anatomical_region';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@learning_path_index:block:field_anatomical_structures:field_as_anatomical_region'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:field_anatomical_structures:field_as_anatomical_region:parents_all';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'field_anatomical_structures:field_as_anatomical_region:parents_all';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@learning_path_index:block:field_anatomical_structures:field_as_anatomical_region:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:field_anatomical_structures:field_as_anatomical_system';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'field_anatomical_structures:field_as_anatomical_system';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@learning_path_index:block:field_anatomical_structures:field_as_anatomical_system'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:field_anatomical_structures:field_as_anatomical_system:parents_all';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'field_anatomical_structures:field_as_anatomical_system:parents_all';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@learning_path_index:block:field_anatomical_structures:field_as_anatomical_system:parents_all'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:field_anatomical_structures:nid';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'field_anatomical_structures:nid';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'lumc_as_autocomplete',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 1,
    'reset_link_text' => 'Reset',
    'ajax_select_default_option_label' => 'Any',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@learning_path_index:block:field_anatomical_structures:nid'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:field_di_data_category';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_data_category';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@learning_path_index:block:field_di_data_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:field_di_educational_level';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_educational_level';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@learning_path_index:block:field_di_educational_level'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:field_di_license';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'field_di_license';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_checkboxes',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '0',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@learning_path_index:block:field_di_license'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:field_institution';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'field_institution';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_select',
    'filters' => array(),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@learning_path_index:block:field_institution'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:search_api_language';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'search_api_language';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_ajax_select',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'ajax_facets',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'reset_link' => 0,
    'show_reset_link' => 0,
    'reset_link_text' => 'Reset filter',
    'ajax_select_default_option_label' => 'Select',
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@learning_path_index:block:search_api_language'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:status';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'status';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@learning_path_index:block:status'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@learning_path_index:block:title';
  $facet->searcher = 'search_api@learning_path_index';
  $facet->realm = 'block';
  $facet->facet = 'title';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(),
    'active_sorts' => array(
      'active' => 'active',
      'count' => 'count',
      'display' => 'display',
    ),
    'sort_weight' => array(
      'active' => -50,
      'count' => -49,
      'display' => -48,
    ),
    'sort_order' => array(
      'active' => 3,
      'count' => 3,
      'display' => 4,
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => 20,
    'nofollow' => 1,
    'show_expanded' => 0,
  );
  $export['search_api@learning_path_index:block:title'] = $facet;

  return $export;
}
