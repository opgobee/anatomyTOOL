<?php
/**
 * @file
 * lumc_content_type_slides.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function lumc_content_type_slides_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-quiz_directions-field_slide_entity_reference'.
  $field_instances['node-quiz_directions-field_slide_entity_reference'] = array(
    'bundle' => 'quiz_directions',
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 0,
          'view_mode' => 'node_embed',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 4,
      ),
      'question' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'default',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 2,
      ),
      'questions_list' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_slide_entity_reference',
    'label' => 'Included items from AnatomyTOOL',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 1,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'entityreference_view_widget_sample|entityreference_view_widget_1',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Included items from AnatomyTOOL');

  return $field_instances;
}
