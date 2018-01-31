<?php
/**
 * @file
 * lumc_taxomony_cd.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxomony_cd_taxonomy_default_vocabularies() {
  return array(
    'vocab_clinical_discipline' => array(
      'name' => 'Clinical Discipline',
      'machine_name' => 'vocab_clinical_discipline',
      'description' => 'Clinical Discipline vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -7,
    ),
  );
}
