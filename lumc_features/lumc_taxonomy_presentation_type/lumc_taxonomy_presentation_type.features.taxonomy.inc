<?php
/**
 * @file
 * lumc_taxonomy_presentation_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxonomy_presentation_type_taxonomy_default_vocabularies() {
  return array(
    'presentation_type' => array(
      'name' => 'Presentation type',
      'machine_name' => 'presentation_type',
      'description' => 'Presentation type vocabolary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 10,
    ),
  );
}
