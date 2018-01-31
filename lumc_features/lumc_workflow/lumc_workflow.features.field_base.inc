<?php
/**
 * @file
 * lumc_workflow.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function lumc_workflow_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_state'.
  $field_bases['field_state'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_state',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'workflowfield',
    'settings' => array(
      'allowed_values_function' => 'workflowfield_allowed_values',
      'allowed_values_string' => '1 | (creation)
2 | Student-generated content
3 | To be reviewed
4 | Reviewed',
      'history' => array(
        'history_tab_show' => 1,
        'roles' => array(
          -1 => -1,
          3 => 3,
          8 => 0,
          9 => 0,
        ),
      ),
      'watchdog_log' => 1,
      'wid' => 1,
      'widget' => array(
        'comment' => 1,
        'fieldset' => 1,
        'hide' => 0,
        'name_as_title' => 1,
        'options' => 'radios',
        'schedule' => 0,
        'schedule_timezone' => 0,
      ),
    ),
    'translatable' => 0,
    'type' => 'workflow',
  );

  return $field_bases;
}
