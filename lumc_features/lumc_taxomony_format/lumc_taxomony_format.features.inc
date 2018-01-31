<?php
/**
 * @file
 * lumc_taxomony_format.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lumc_taxomony_format_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
