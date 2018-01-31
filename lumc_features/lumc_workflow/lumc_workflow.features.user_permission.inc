<?php
/**
 * @file
 * lumc_workflow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lumc_workflow_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit workflow comment'.
  $permissions['edit workflow comment'] = array(
    'name' => 'edit workflow comment',
    'roles' => array(
      'administrator' => 'administrator',
      'student' => 'student',
      'teacher' => 'teacher',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'participate in workflow'.
  $permissions['participate in workflow'] = array(
    'name' => 'participate in workflow',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'student' => 'student',
      'teacher' => 'teacher',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'show workflow state form'.
  $permissions['show workflow state form'] = array(
    'name' => 'show workflow state form',
    'roles' => array(
      'administrator' => 'administrator',
      'student' => 'student',
      'teacher' => 'teacher',
    ),
    'module' => 'workflow',
  );

  return $permissions;
}
