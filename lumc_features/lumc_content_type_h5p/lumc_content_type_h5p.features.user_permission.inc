<?php
/**
 * @file
 * lumc_content_type_h5p.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lumc_content_type_h5p_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create h5p_content content'.
  $permissions['create h5p_content content'] = array(
    'name' => 'create h5p_content content',
    'roles' => array(
      'administrator' => 'administrator',
      'student' => 'student',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any h5p_content content'.
  $permissions['delete any h5p_content content'] = array(
    'name' => 'delete any h5p_content content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own h5p_content content'.
  $permissions['delete own h5p_content content'] = array(
    'name' => 'delete own h5p_content content',
    'roles' => array(
      'administrator' => 'administrator',
      'student' => 'student',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any h5p_content content'.
  $permissions['edit any h5p_content content'] = array(
    'name' => 'edit any h5p_content content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own h5p_content content'.
  $permissions['edit own h5p_content content'] = array(
    'name' => 'edit own h5p_content content',
    'roles' => array(
      'administrator' => 'administrator',
      'student' => 'student',
      'teacher' => 'teacher',
    ),
    'module' => 'node',
  );

  return $permissions;
}
