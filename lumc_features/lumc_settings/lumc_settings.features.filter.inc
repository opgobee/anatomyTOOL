<?php
/**
 * @file
 * lumc_settings.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function lumc_settings_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered html.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered html',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <br> <u> <p>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Filtered links.
  $formats['filtered_links'] = array(
    'format' => 'filtered_links',
    'name' => 'Filtered links',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_html' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
