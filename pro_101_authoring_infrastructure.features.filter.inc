<?php
/**
 * @file
 * pro_101_authoring_infrastructure.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function pro_101_authoring_infrastructure_filter_default_formats() {
  $formats = array();

  // Exported format: Regular
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Regular',
    'cache' => '0',
    'status' => '1',
    'weight' => '10',
    'filters' => array(
      'filter_autop' => array(
        'weight' => '-50',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(),
      ),
      'pathologic' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(
          'local_paths' => '/',
          'absolute' => 1,
        ),
      ),
    ),
  );

  return $formats;
}
