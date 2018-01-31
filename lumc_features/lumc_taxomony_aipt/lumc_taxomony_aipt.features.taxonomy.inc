<?php
/**
 * @file
 * lumc_taxomony_aipt.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxomony_aipt_taxonomy_default_vocabularies() {
  return array(
    'vocab_anatomy_in_practice' => array(
      'name' => 'Anatomy in Practice type',
      'machine_name' => 'vocab_anatomy_in_practice',
      'description' => 'Anotomy in Practice vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -3,
    ),
  );
}
