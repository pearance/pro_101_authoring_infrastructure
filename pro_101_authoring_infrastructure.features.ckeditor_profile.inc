<?php
/**
 * @file
 * pro_101_authoring_infrastructure.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function pro_101_authoring_infrastructure_ckeditor_profile_defaults() {
  $data = array(
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'ckeditor_path' => '%l/ckeditor',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%m/plugins',
        'ckeditor_plugins_local_path' => '',
        'ckfinder_path' => '%m/ckfinder',
        'toolbar_wizard' => 't',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(),
    ),
    'Regular' => array(
      'name' => 'Regular',
      'settings' => array(
        'ss' => '2',
        'default' => 't',
        'show_toggle' => 'f',
        'skin' => 'kama',
        'uicolor' => 'custom',
        'uicolor_textarea' => '<p>
	Click the <strong>UI Color Picker</strong> button to set your color preferences.</p>
',
        'uicolor_user' => '#DBDBDB',
        'toolbar' => '[
    [\'Styles\',\'Media\',\'BulletedList\',\'NumberedList\',\'Table\',\'Link\',\'Unlink\'],
    [\'Cut\',\'Copy\',\'Paste\',\'Replace\'],
    [\'Source\']
]',
        'expand' => 't',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'enter_mode' => 'br',
        'shift_enter_mode' => 'p',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakBeforeClose' => 'breakBeforeClose',
            'breakAfterClose' => 'breakAfterClose',
            'pre_indent' => 'pre_indent',
          ),
        ),
        'css_mode' => 'none',
        'css_path' => '',
        'css_style' => 'theme',
        'styles_path' => '',
        'filebrowser' => 'none',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'ckeditor_load_method' => 'ckeditor.js',
        'ckeditor_load_time_out' => '0',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 't',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 'f',
        'js_conf' => '// Sizes are in pixels
config.resize_minWidth = 550;
config.resize_maxWidth = 860;
// config.resize_minHeight = 200;
// config.resize_maxHeight = 500;',
        'loadPlugins' => array(
          'autogrow' => array(
            'name' => 'autogrow',
            'desc' => 'Auto Grow plugin',
            'path' => '%base_path%%editor_path%plugins/autogrow/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for inserting images from Drupal media module',
            'path' => '%base_path%%plugin_dir%media/',
            'buttons' => array(
              'Media' => array(
                'label' => 'Media',
                'icon' => 'images/icon.gif',
              ),
            ),
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'plain_text' => 'Regular',
      ),
    ),
  );
  return $data;
}
