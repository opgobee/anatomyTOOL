<?php
/**
 * @file
 * lumc_content_type_quiz.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function lumc_content_type_quiz_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_quiz_usage_course|node|quiz|form';
  $field_group->group_name = 'group_quiz_usage_course';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'quiz';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Usage in courses',
    'weight' => '96',
    'children' => array(
      0 => 'og_group_ref',
      1 => 'quiz_weight',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-quiz-usage-course field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_quiz_usage_course|node|quiz|form'] = $field_group;

  return $export;
}
