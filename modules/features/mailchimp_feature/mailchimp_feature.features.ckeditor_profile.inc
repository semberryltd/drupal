<?php
/**
 * @file
 * mailchimp_feature.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function mailchimp_feature_ckeditor_profile_defaults() {
  $data = array(
    'Mailchimp' => array(
      'name' => 'Mailchimp',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'RemoveFormat\',\'Format\',\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'Subscript\',\'Superscript\',\'Paste\',\'PasteText\',\'PasteFromWord\'],
    [\'NumberedList\',\'BulletedList\'],
    [\'JustifyLeft\',\'JustifyRight\',\'JustifyBlock\',\'JustifyCenter\'],
    [\'Link\',\'Unlink\',\'Anchor\',\'-\',\'Image\',\'Media\'],
    [\'HorizontalRule\',\'DrupalBreak\'],
    [\'Source\',\'Maximize\'],
    [\'Blockquote\',\'Table\',\'Enhanced Image\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => '',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
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
        'forcePasteAsPlainText' => 't',
        'html_entities' => 'f',
        'scayt_autoStartup' => 'f',
        'theme_config_js' => 'f',
        'js_conf' => '',
        'loadPlugins' => array(
          'drupalbreaks' => array(
            'name' => 'drupalbreaks',
            'desc' => 'Plugin for inserting Drupal teaser and page breaks.',
            'path' => '%plugin_dir%drupalbreaks/',
            'buttons' => array(
              'DrupalBreak' => array(
                'label' => 'DrupalBreak',
                'icon' => 'images/drupalbreak.png',
              ),
            ),
            'default' => 't',
          ),
          'media' => array(
            'name' => 'media',
            'desc' => 'Plugin for inserting images from Drupal media module',
            'path' => '%base_path%sites/all/modules/media/modules/media_wysiwyg/wysiwyg_plugins/media_ckeditor/',
            'buttons' => array(
              'Media' => array(
                'icon' => 'images/icon.gif',
                'label' => 'Add media',
              ),
            ),
            'default' => 'f',
          ),
        ),
      ),
      'input_formats' => array(
        'mailchimp_campaign' => 'MailChimp campaign',
      ),
    ),
  );
  return $data;
}
