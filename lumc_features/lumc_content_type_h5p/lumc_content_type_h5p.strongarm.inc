<?php
/**
 * @file
 * lumc_content_type_h5p.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lumc_content_type_h5p_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__h5p_content';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'question' => array(
        'custom_settings' => TRUE,
      ),
      'questions_list' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'node_embed' => array(
        'custom_settings' => FALSE,
      ),
      'print' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'h5p' => array(
          'weight' => '4',
        ),
        'h5p_type' => array(
          'weight' => '2',
        ),
        'h5p_editor' => array(
          'weight' => '3',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '7',
        ),
        'add_directly' => array(
          'weight' => '1',
        ),
        'language' => array(
          'weight' => '8',
        ),
      ),
      'display' => array(
        'h5p' => array(
          'default' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'question' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'questions_list' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
        ),
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'question' => array(
            'weight' => '1',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
          'questions_list' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'node_review' => array(
          'teaser' => array(
            'weight' => '50',
            'visible' => FALSE,
          ),
          'question' => array(
            'weight' => '50',
            'visible' => FALSE,
          ),
          'questions_list' => array(
            'weight' => '50',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__h5p_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_h5p_content';
  $strongarm->value = '1';
  $export['language_content_type_h5p_content'] = $strongarm;

  return $export;
}
