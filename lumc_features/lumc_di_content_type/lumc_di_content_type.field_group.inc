<?php
/**
 * @file
 * lumc_di_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function lumc_di_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_di_classification|node|data_item|form';
  $field_group->group_name = 'group_di_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More… (educational level, credits, etc)',
    'weight' => '8',
    'children' => array(
      0 => 'field_di_view',
      1 => 'field_di_clinical_field',
      2 => 'field_di_educational_level',
      3 => 'field_di_image_collection',
      4 => 'field_di_image_technique',
      5 => 'field_di_staining_microscopy',
      6 => 'field_di_anatomy_in_practice',
      7 => 'field_di_credits',
      8 => 'field_state',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'More… (educational level, credits, etc)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-di-classification field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_di_classification|node|data_item|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_di_classification|node|h5p_content|form';
  $field_group->group_name = 'group_di_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'h5p_content';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '9',
    'children' => array(
      0 => 'field_di_clinical_field',
      1 => 'field_di_data_category',
      2 => 'field_di_educational_level',
      3 => 'field_anatomical_structures',
      4 => 'field_state',
      5 => 'field_di_credits',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Classification',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-di-classification field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_di_classification|node|h5p_content|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_di_data|node|data_item|form';
  $field_group->group_name = 'group_di_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'data_item';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Data',
    'weight' => '2',
    'children' => array(
      0 => 'field_di_image',
      1 => 'field_di_image_type',
      2 => 'field_di_document_type',
      3 => 'field_di_document_blog',
      4 => 'field_di_document_microscopy',
      5 => 'field_di_document_file',
      6 => 'field_di_presentation_file',
      7 => 'field_di_presentation_reference',
      8 => 'field_di_presentation_type',
      9 => 'field_di_viewer_url',
      10 => 'field_di_video_type',
      11 => 'field_di_video_url',
      12 => 'field_di_video',
      13 => 'field_di_thumbnail',
      14 => 'field_di_doc_reference',
      15 => 'field_di_image_link',
      16 => 'field_di_description',
      17 => 'field_di_page_url',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-di-data field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_di_data|node|data_item|form'] = $field_group;

  return $export;
}
