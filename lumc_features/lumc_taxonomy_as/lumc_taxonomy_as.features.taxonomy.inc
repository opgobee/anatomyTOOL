<?php
/**
 * @file
 * lumc_taxonomy_as.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxonomy_as_taxonomy_default_vocabularies() {
  return array(
    'vocab_anatomical_systems' => array(
      'name' => 'Anatomical Systems',
      'machine_name' => 'vocab_anatomical_systems',
      'description' => 'Anatomical Systems vocabulary',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -9,
    ),
  );
}
