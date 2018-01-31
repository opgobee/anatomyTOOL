<?php
/**
 * @file
 * lumc_taxonomy_ar.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxonomy_ar_taxonomy_default_vocabularies() {
  return array(
    'vocab_anatomical_regional' => array(
      'name' => 'Anatomical Region',
      'machine_name' => 'vocab_anatomical_regional',
      'description' => 'Anatomical Region vocabulary',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => -10,
    ),
  );
}
