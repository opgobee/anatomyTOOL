<?php
/**
 * @file
 * lumc_as_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lumc_as_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lumc_as_content_type_node_info() {
  $items = array(
    'anatomical_structure' => array(
      'name' => t('Anatomical Structure'),
      'base' => 'node_content',
      'description' => t('The Anatomical Structure content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
