<?php
/**
 * @file
 * lumc_taxomony_cd.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lumc_taxomony_cd_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
