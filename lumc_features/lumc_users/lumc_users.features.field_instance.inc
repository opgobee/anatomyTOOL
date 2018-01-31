<?php
/**
 * @file
 * lumc_users.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function lumc_users_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_institution'.
  $field_instances['user-user-field_institution'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_institution',
    'label' => 'Institution',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Institution');

  return $field_instances;
}
