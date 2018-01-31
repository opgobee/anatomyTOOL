<?php
/**
 * @file
 * lumc_taxomony_format.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lumc_taxomony_format_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__vocab_format';
  $strongarm->value = array();
  $export['field_bundle_settings_taxonomy_term__vocab_format'] = $strongarm;

  return $export;
}
