<?php
/**
 * @file
 * pro_101_authoring_infrastructure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_authoring_infrastructure_user_default_permissions() {
  $permissions = array();

  // Exported permission: access mollom statistics.
  $permissions['access mollom statistics'] = array(
    'name' => 'access mollom statistics',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'mollom',
  );

  // Exported permission: administer ckeditor.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(),
    'module' => 'filter',
  );

  // Exported permission: administer mollom.
  $permissions['administer mollom'] = array(
    'name' => 'administer mollom',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'mollom',
  );

  // Exported permission: bypass mollom protection.
  $permissions['bypass mollom protection'] = array(
    'name' => 'bypass mollom protection',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'mollom',
  );

  // Exported permission: customize ckeditor.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'ckeditor',
  );

  return $permissions;
}