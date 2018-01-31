<?php
/**
 * @file
 * lumc_taxonomy_relationship_type.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function lumc_taxonomy_relationship_type_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-relationship_type-field_inverse_relation_text'.
  $field_instances['taxonomy_term-relationship_type-field_inverse_relation_text'] = array(
    'bundle' => 'relationship_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_inverse_relation_text',
    'label' => 'Inverse relation text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-relationship_type-field_relation_text'.
  $field_instances['taxonomy_term-relationship_type-field_relation_text'] = array(
    'bundle' => 'relationship_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_relation_text',
    'label' => 'Relation text',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Inverse relation text');
  t('Relation text');

  return $field_instances;
}
