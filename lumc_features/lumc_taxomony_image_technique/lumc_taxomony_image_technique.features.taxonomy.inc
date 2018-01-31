<?php
/**
 * @file
 * lumc_taxomony_image_technique.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxomony_image_technique_taxonomy_default_vocabularies() {
  return array(
    'vocab_image_technique' => array(
      'name' => 'Image technique/source',
      'machine_name' => 'vocab_image_technique',
      'description' => 'Image technique, source vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -5,
    ),
  );
}
