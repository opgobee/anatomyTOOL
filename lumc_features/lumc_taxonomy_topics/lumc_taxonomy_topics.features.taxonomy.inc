<?php
/**
 * @file
 * lumc_taxonomy_topics.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function lumc_taxonomy_topics_taxonomy_default_vocabularies() {
  return array(
    'vocab_topics' => array(
      'name' => 'Topics',
      'machine_name' => 'vocab_topics',
      'description' => 'Topics vocabolary (introduction,gross, etc)',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => -8,
    ),
  );
}
