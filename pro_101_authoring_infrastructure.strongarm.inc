<?php
/**
 * @file
 * pro_101_authoring_infrastructure.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pro_101_authoring_infrastructure_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'default_mollom_form';
  $strongarm->value = array(
    'webform_client_form_1' => TRUE,
  );
  $export['default_mollom_form'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_fallback';
  $strongarm->value = '1';
  $export['mollom_fallback'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_moderation_redirect';
  $strongarm->value = 1;
  $export['mollom_moderation_redirect'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_privacy_link';
  $strongarm->value = 1;
  $export['mollom_privacy_link'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mollom_status';
  $strongarm->value = array(
    'keys' => TRUE,
    'keys valid' => TRUE,
  );
  $export['mollom_status'] = $strongarm;

  return $export;
}
