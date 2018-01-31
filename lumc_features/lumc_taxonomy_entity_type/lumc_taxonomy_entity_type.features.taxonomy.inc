<?php
/**
 * @file
 * lumc_taxonomy_entity_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxonomy_entity_type_taxonomy_default_vocabularies() {
  return array(
    'entity_type' => array(
      'name' => 'Entity type',
      'machine_name' => 'entity_type',
      'description' => 'Entity type vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
