<?php
/**
 * @file
 * lumc_content_type_h5p.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lumc_content_type_h5p_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
