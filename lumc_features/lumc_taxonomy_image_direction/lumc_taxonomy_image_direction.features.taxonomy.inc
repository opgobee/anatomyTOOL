<?php
/**
 * @file
 * lumc_taxonomy_image_direction.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxonomy_image_direction_taxonomy_default_vocabularies() {
  return array(
    'vocab_image_view_direction' => array(
      'name' => 'Image view direction',
      'machine_name' => 'vocab_image_view_direction',
      'description' => 'Image view direction vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -4,
    ),
  );
}
