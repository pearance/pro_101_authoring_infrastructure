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

  // Exported format: Regular.
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
        'weight' => '-49',
        'status' => '1',
        'settings' => array(),
      ),
      'invisimail_encode_html_entities' => array(
        'weight' => '-48',
        'status' => '1',
        'settings' => array(
          'encoder' => 'html_entities',
          'chunk' => 1,
          'link' => 1,
        ),
      ),
      'filter_lexicon' => array(
        'weight' => '-47',
        'status' => '1',
        'settings' => array(),
      ),
      'invisimail_encode_js_entities' => array(
        'weight' => '-42',
        'status' => '1',
        'settings' => array(
          'encoder' => 'js_entities',
          'chunk' => 1,
          'link' => 1,
        ),
      ),
      'pathologic' => array(
        'weight' => '-41',
        'status' => '1',
        'settings' => array(
          'local_paths' => '/',
          'protocol_style' => 'full',
        ),
      ),
      'image_resize_filter' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(
          'link' => 0,
          'link_class' => '',
          'link_rel' => '',
          'image_locations' => array(
            'local' => 'local',
            'remote' => 'remote',
          ),
        ),
      ),
    ),
  );

  return $formats;
}
