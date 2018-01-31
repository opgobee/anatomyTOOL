<?php
/**
 * @file
 * lumc_taxonomy_image_direction.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lumc_taxonomy_image_direction_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
