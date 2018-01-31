<?php
/**
 * @file
 * lumc_taxonomy_ar.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function lumc_taxonomy_ar_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-vocab_anatomical_regional-field_vocab_force_structures'.
  $field_instances['taxonomy_term-vocab_anatomical_regional-field_vocab_force_structures'] = array(
    'bundle' => 'vocab_anatomical_regional',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_vocab_force_structures',
    'label' => 'Force getting structures',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-vocab_anatomical_regional-field_vocab_link'.
  $field_instances['taxonomy_term-vocab_anatomical_regional-field_vocab_link'] = array(
    'bundle' => 'vocab_anatomical_regional',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'In case this term entry links just to a specific page',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_vocab_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-vocab_anatomical_regional-field_vocab_path_link'.
  $field_instances['taxonomy_term-vocab_anatomical_regional-field_vocab_path_link'] = array(
    'bundle' => 'vocab_anatomical_regional',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'In case this term entry links to a different path',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_vocab_path_link',
    'label' => 'Link to path',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-vocab_anatomical_regional-field_vocab_region_image'.
  $field_instances['taxonomy_term-vocab_anatomical_regional-field_vocab_region_image'] = array(
    'bundle' => 'vocab_anatomical_regional',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_vocab_region_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg svg',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Force getting structures');
  t('Image');
  t('In case this term entry links just to a specific page');
  t('In case this term entry links to a different path');
  t('Link');
  t('Link to path');

  return $field_instances;
}
