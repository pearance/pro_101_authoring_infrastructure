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

  // Exported permission: administer checked out documents.
  $permissions['administer checked out documents'] = array(
    'name' => 'administer checked out documents',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'content_lock',
  );

  // Exported permission: administer ckeditor.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: administer facebook comments.
  $permissions['administer facebook comments'] = array(
    'name' => 'administer facebook comments',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'facebook_comments',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      0 => 'developer',
    ),
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

  // Exported permission: administer quicktabs.
  $permissions['administer quicktabs'] = array(
    'name' => 'administer quicktabs',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'quicktabs',
  );

  // Exported permission: administer sharethis.
  $permissions['administer sharethis'] = array(
    'name' => 'administer sharethis',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'sharethis',
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

  // Exported permission: check out documents.
  $permissions['check out documents'] = array(
    'name' => 'check out documents',
    'roles' => array(
      0 => 'assistant',
      1 => 'developer',
      2 => 'professional',
      3 => 'support',
    ),
    'module' => 'content_lock',
  );

  // Exported permission: customize ckeditor.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: moderate facebook comments.
  $permissions['moderate facebook comments'] = array(
    'name' => 'moderate facebook comments',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'facebook_comments',
  );

  // Exported permission: use PHP for settings.
  $permissions['use PHP for settings'] = array(
    'name' => 'use PHP for settings',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'php',
  );

  // Exported permission: use text format php_code.
  $permissions['use text format php_code'] = array(
    'name' => 'use text format php_code',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
