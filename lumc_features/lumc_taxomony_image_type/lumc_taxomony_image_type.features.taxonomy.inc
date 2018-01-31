<?php
/**
 * @file
 * lumc_taxomony_image_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxomony_image_type_taxonomy_default_vocabularies() {
  return array(
    'image_type' => array(
      'name' => 'Image Type',
      'machine_name' => 'image_type',
      'description' => 'Image type vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 10,
    ),
  );
}
