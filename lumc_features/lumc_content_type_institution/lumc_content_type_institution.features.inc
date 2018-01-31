<?php
/**
 * @file
 * lumc_content_type_institution.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lumc_content_type_institution_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lumc_content_type_institution_node_info() {
  $items = array(
    'institution' => array(
      'name' => t('Institution'),
      'base' => 'node_content',
      'description' => t('Institution content type'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
