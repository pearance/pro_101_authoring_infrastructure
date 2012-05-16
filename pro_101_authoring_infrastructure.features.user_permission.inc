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
