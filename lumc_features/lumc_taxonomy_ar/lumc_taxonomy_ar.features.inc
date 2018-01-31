<?php
/**
 * @file
 * lumc_taxonomy_ar.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lumc_taxonomy_ar_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
