<?php
/**
 * @file
 * lumc_video_type_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_video_type_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'video_type' => array(
      'name' => 'Video Type',
      'machine_name' => 'video_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 5,
    ),
  );
}
