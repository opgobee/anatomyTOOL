<?php
/**
 * @file
 * lumc_facet_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lumc_facet_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'atlas_index' => array(
      'search_api_views:gallery_search:page' => 'search_api_views:gallery_search:page',
      'search_api_views:introductions_search:page_1' => 'search_api_views:introductions_search:page_1',
      'search_api_views:introductions_search:default' => 'search_api_views:introductions_search:default',
      'search_api_views:embryology_search:default' => 'search_api_views:embryology_search:default',
      'search_api_views:embryology_search:page_1' => 'search_api_views:embryology_search:page_1',
      'search_api_views:microscopy_search:page_1' => 'search_api_views:microscopy_search:page_1',
      'search_api_views:microscopy_search:default' => 'search_api_views:microscopy_search:default',
      'search_api_views:gallery_search:page_2' => 'search_api_views:gallery_search:page_2',
      'search_api_views:gallery_search:page_3' => 'search_api_views:gallery_search:page_3',
      'search_api_views:gallery_search:page_4' => 'search_api_views:gallery_search:page_4',
      'search_api_views:dissection_search:default' => 'search_api_views:dissection_search:default',
      'search_api_views:dissection_search:page_1' => 'search_api_views:dissection_search:page_1',
      'search_api_views:imaging_search:page_1' => 'search_api_views:imaging_search:page_1',
      'search_api_views:imaging_search:default' => 'search_api_views:imaging_search:default',
      'search_api_views:anatomy_in_practice_search:default' => 'search_api_views:anatomy_in_practice_search:default',
      'search_api_views:anatomy_in_practice_search:page_1' => 'search_api_views:anatomy_in_practice_search:page_1',
      'search_api_views:gallery_search:default' => 'search_api_views:gallery_search:default',
      'search_api_views:gallery_search:page_1' => 'search_api_views:gallery_search:page_1',
      'search_api_views:images_search:default' => 'search_api_views:images_search:default',
      'search_api_views:images_search:page_1' => 'search_api_views:images_search:page_1',
      'search_api_views:introductions_search:page' => 'search_api_views:introductions_search:page',
      'search_api_views:images_search:page' => 'search_api_views:images_search:page',
    ),
    'learning_path_index' => array(
      'search_api_views:learning_paths:default' => 'search_api_views:learning_paths:default',
      'search_api_views:learning_paths:page' => 'search_api_views:learning_paths:page',
      'search_api_views:learning_paths:learning_paths' => 'search_api_views:learning_paths:learning_paths',
      'search_api_views:asd:default' => 'search_api_views:asd:default',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  return $export;
}
