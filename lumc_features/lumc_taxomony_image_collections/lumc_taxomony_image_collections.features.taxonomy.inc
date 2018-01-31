<?php
/**
 * @file
 * lumc_taxomony_image_collections.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxomony_image_collections_taxonomy_default_vocabularies() {
  return array(
    'vocab_image_collections' => array(
      'name' => 'Image collections',
      'machine_name' => 'vocab_image_collections',
      'description' => 'Image collections vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -6,
    ),
  );
}
