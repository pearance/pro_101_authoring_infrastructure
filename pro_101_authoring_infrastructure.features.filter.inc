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
        'weight' => '-46',
        'status' => '1',
        'settings' => array(
          'encoder' => 'js_entities',
          'chunk' => 1,
          'link' => 1,
        ),
      ),
      'collapse_text_filter' => array(
        'weight' => '-40',
        'status' => '1',
        'settings' => array(
          'form' => 1,
          'default_title' => 'Show more or less',
        ),
      ),
      'image_resize_filter' => array(
        'weight' => '-39',
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
      'pathologic' => array(
        'weight' => '-38',
        'status' => '1',
        'settings' => array(
          'local_paths' => '/',
          'protocol_style' => 'full',
          'local_paths_exploded' => array(
            0 => array(
              'path' => '/',
            ),
            1 => array(
              'path' => '/',
              'host' => 'pro101a.platdev.info',
            ),
          ),
          'base_url_host' => 'pro101a.platdev.info',
        ),
      ),
    ),
  );

  return $formats;
}
