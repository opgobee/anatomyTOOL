<?php
/**
 * @file
 * lumc_taxonomy_license.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxonomy_license_taxonomy_default_vocabularies() {
  return array(
    'license' => array(
      'name' => 'License',
      'machine_name' => 'license',
      'description' => 'License vocabolary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 2,
    ),
  );
}
