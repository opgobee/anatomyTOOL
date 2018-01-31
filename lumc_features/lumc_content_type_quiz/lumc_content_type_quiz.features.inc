<?php
/**
 * @file
 * lumc_content_type_quiz.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lumc_content_type_quiz_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function lumc_content_type_quiz_field_default_field_instances_alter(&$data) {
  if (isset($data['node-quiz-body'])) {
    $data['node-quiz-body']['display']['question'] = array(
      'label' => 'above',
      'module' => 'text',
      'settings' => array(),
      'type' => 'text_default',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-quiz-body']['display']['questions_list'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-quiz-body']['display']['search_index'] = array(
      'label' => 'hidden',
      'module' => 'text',
      'settings' => array(
        'trim_length' => 200,
      ),
      'type' => 'text_summary_or_trimmed',
      'weight' => 0,
    ); /* WAS: '' */
    $data['node-quiz-body']['display']['teaser']['type'] = 'hidden'; /* WAS: 'text_summary_or_trimmed' */
    $data['node-quiz-body']['label'] = 'Introduction'; /* WAS: 'Body' */
    unset($data['node-quiz-body']['display']['teaser']['module']);
    unset($data['node-quiz-body']['display']['teaser']['settings']['trim_length']);
  }
}

/**
 * Implements hook_strongarm_alter().
 */
function lumc_content_type_quiz_strongarm_alter(&$data) {
  if (isset($data['field_bundle_settings_node__quiz'])) {
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['display']['language'] = array(
      'search_index' => array(
        'weight' => 0,
        'visible' => FALSE,
      ),
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['display']['stats']['search_index'] = array(
      'weight' => 9,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['display']['stats']['teaser'] = array(
      'weight' => 9,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['display']['take']['search_index'] = array(
      'weight' => 10,
      'visible' => FALSE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['display']['take']['teaser'] = array(
      'weight' => 10,
      'visible' => TRUE,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['form']['language'] = array(
      'weight' => 106,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['form']['path'] = array(
      'weight' => 30,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['form']['quiz_availability'] = array(
      'weight' => 2,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['form']['remember_settings'] = array(
      'weight' => 99,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['form']['resultoptions'] = array(
      'weight' => 2,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['form']['summaryoptions'] = array(
      'weight' => 1,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['form']['taking'] = array(
      'weight' => 1,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['extra_fields']['form']['title'] = array(
      'weight' => -5,
    ); /* WAS: '' */
    $data['field_bundle_settings_node__quiz']->value['view_modes']['search_index']['custom_settings'] = TRUE; /* WAS: FALSE */
  }
}
