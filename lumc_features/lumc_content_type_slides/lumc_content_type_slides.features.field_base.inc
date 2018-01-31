<?php
/**
 * @file
 * lumc_content_type_slides.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function lumc_content_type_slides_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_slide_entity_reference'.
  $field_bases['field_slide_entity_reference'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_slide_entity_reference',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'data_item' => 'data_item',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
