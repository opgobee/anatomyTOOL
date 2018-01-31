<?php
/**
 * @file
 * lumc_facet_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lumc_facet_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
