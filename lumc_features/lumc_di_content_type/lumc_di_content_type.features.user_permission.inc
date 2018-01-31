<?php
/**
 * @file
 * lumc_di_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lumc_di_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create data_item content'.
  $permissions['create data_item content'] = array(
    'name' => 'create data_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'student' => 'student',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any data_item content'.
  $permissions['delete any data_item content'] = array(
    'name' => 'delete any data_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own data_item content'.
  $permissions['delete own data_item content'] = array(
    'name' => 'delete own data_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'student' => 'student',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any data_item content'.
  $permissions['edit any data_item content'] = array(
    'name' => 'edit any data_item content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own data_item content'.
  $permissions['edit own data_item content'] = array(
    'name' => 'edit own data_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'student' => 'student',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  return $permissions;
}
