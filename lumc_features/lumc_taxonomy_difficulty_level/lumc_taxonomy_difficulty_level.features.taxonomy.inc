<?php
/**
 * @file
 * lumc_taxonomy_difficulty_level.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxonomy_difficulty_level_taxonomy_default_vocabularies() {
  return array(
    'level_of_difficulty' => array(
      'name' => 'Level of Difficulty',
      'machine_name' => 'level_of_difficulty',
      'description' => 'Level of Difficulty vocabulary',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 1,
    ),
  );
}
