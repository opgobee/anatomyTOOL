<?php
/**
 * @file
 * lumc_taxonomy_relationship_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxonomy_relationship_type_taxonomy_default_vocabularies() {
  return array(
    'relationship_type' => array(
      'name' => 'Relationship type',
      'machine_name' => 'relationship_type',
      'description' => 'Relationship type taxonomy',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
