<?php
/**
 * @file
 * lumc_users.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function lumc_users_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access user contact forms'.
  $permissions['access user contact forms'] = array(
    'name' => 'access user contact forms',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'contact',
  );

  return $permissions;
}
