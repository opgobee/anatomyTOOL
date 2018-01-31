<?php
/**
 * @file
 * lumc_content_type_quiz.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function lumc_content_type_quiz_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-quiz-body.display|question"] = array(
    'label' => 'above',
    'module' => 'text',
    'settings' => array(),
    'type' => 'text_default',
    'weight' => 0,
  );
  $overrides["field_instance.node-quiz-body.display|questions_list"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-quiz-body.display|search_index"] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(
      'trim_length' => 200,
    ),
    'type' => 'text_summary_or_trimmed',
    'weight' => 0,
  );
  $overrides["field_instance.node-quiz-body.display|teaser|module"]["DELETED"] = TRUE;
  $overrides["field_instance.node-quiz-body.display|teaser|settings|trim_length"]["DELETED"] = TRUE;
  $overrides["field_instance.node-quiz-body.display|teaser|type"] = 'hidden';
  $overrides["field_instance.node-quiz-body.label"] = 'Introduction';

  // Exported overrides for: variable
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|display|language"] = array(
    'search_index' => array(
      'weight' => 0,
      'visible' => FALSE,
    ),
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|display|stats|search_index"] = array(
    'weight' => 9,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|display|stats|teaser"] = array(
    'weight' => 9,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|display|take|search_index"] = array(
    'weight' => 10,
    'visible' => FALSE,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|display|take|teaser"] = array(
    'weight' => 10,
    'visible' => TRUE,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|form|language"] = array(
    'weight' => 106,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|form|path"] = array(
    'weight' => 30,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|form|quiz_availability"] = array(
    'weight' => 2,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|form|remember_settings"] = array(
    'weight' => 99,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|form|resultoptions"] = array(
    'weight' => 2,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|form|summaryoptions"] = array(
    'weight' => 1,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|form|taking"] = array(
    'weight' => 1,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|extra_fields|form|title"] = array(
    'weight' => -5,
  );
  $overrides["variable.field_bundle_settings_node__quiz.value|view_modes|search_index|custom_settings"] = TRUE;

 return $overrides;
}
