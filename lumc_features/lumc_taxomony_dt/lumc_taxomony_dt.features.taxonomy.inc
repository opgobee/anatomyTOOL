<?php
/**
 * @file
 * lumc_taxomony_dt.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxomony_dt_taxonomy_default_vocabularies() {
  return array(
    'document_type' => array(
      'name' => 'Document Type',
      'machine_name' => 'document_type',
      'description' => 'Document type',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 10,
    ),
  );
}
