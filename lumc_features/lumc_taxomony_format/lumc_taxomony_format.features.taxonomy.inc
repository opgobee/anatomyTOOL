<?php
/**
 * @file
 * lumc_taxomony_format.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxomony_format_taxonomy_default_vocabularies() {
  return array(
    'vocab_format' => array(
      'name' => 'Format',
      'machine_name' => 'vocab_format',
      'description' => 'Data items format vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
