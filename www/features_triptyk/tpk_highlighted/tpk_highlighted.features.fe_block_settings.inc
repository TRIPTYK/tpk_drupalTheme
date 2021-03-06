<?php
/**
 * @file
 * tpk_highlighted.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tpk_highlighted_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-highlighted-block_highlighted'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'highlighted-block_highlighted',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
