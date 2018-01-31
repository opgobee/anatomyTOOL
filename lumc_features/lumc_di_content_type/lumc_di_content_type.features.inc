<?php
/**
 * @file
 * lumc_di_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lumc_di_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lumc_di_content_type_node_info() {
  $items = array(
    'data_item' => array(
      'name' => t('Data item'),
      'base' => 'node_content',
      'description' => t('The data item content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
