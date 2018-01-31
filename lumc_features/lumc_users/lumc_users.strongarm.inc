<?php
/**
 * @file
 * lumc_users.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function lumc_users_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_user__user';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'privatemsg' => array(
          'weight' => '5',
        ),
        'account' => array(
          'weight' => '-10',
        ),
        'timezone' => array(
          'weight' => '6',
        ),
        'picture' => array(
          'weight' => '5',
        ),
        'locale' => array(
          'weight' => '5',
        ),
        'wysiwyg' => array(
          'weight' => '5',
        ),
      ),
      'display' => array(
        'privatemsg_send_new_message' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
        'summary' => array(
          'default' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_user__user'] = $strongarm;

  return $export;
}
