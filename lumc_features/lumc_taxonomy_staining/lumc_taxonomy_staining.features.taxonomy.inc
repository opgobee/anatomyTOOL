<?php
/**
 * @file
 * lumc_taxonomy_staining.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxonomy_staining_taxonomy_default_vocabularies() {
  return array(
    'vocab_staining_microscopy' => array(
      'name' => 'Staining (microscopy slides)',
      'machine_name' => 'vocab_staining_microscopy',
      'description' => 'Staining (Microscopic Technique) vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -2,
    ),
  );
}
