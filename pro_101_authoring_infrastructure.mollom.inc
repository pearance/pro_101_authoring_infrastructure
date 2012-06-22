<?php
/**
 * @file
 * pro_101_authoring_infrastructure.mollom.inc
 */

/**
 * Implements hook_default_mollom_form().
 */
function pro_101_authoring_infrastructure_default_mollom_form() {
  $export = array();

  $mollom_form = new stdClass();
  $mollom_form->disabled = FALSE; /* Edit this to true to make a default mollom_form disabled initially */
  $mollom_form->api_version = 1;
  $mollom_form->form_id = 'testimonial_node_form';
  $mollom_form->mode = TRUE;
  $mollom_form->checks = array(
    0 => 'spam',
    1 => 'profanity',
  );
  $mollom_form->discard = FALSE;
  $mollom_form->moderation = TRUE;
  $mollom_form->enabled_fields = array(
    0 => 'title',
    1 => 'body][und][0][value',
    2 => 'field_title][und][0][value',
    3 => 'field_city_state][und][0][value',
  );
  $mollom_form->strictness = 'normal';
  $mollom_form->module = 'node';
  $export['testimonial_node_form'] = $mollom_form;

  $mollom_form = new stdClass();
  $mollom_form->disabled = FALSE; /* Edit this to true to make a default mollom_form disabled initially */
  $mollom_form->api_version = 1;
  $mollom_form->form_id = 'webform_node_form';
  $mollom_form->mode = TRUE;
  $mollom_form->checks = array(
    0 => 'spam',
  );
  $mollom_form->discard = FALSE;
  $mollom_form->moderation = TRUE;
  $mollom_form->enabled_fields = array(
    0 => 'title',
    1 => 'body][und][0][value',
    2 => 'field_map_address][und][0][value',
  );
  $mollom_form->strictness = 'normal';
  $mollom_form->module = 'node';
  $export['webform_node_form'] = $mollom_form;

  return $export;
}
