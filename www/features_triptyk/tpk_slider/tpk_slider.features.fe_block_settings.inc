<?php
/**
 * @file
 * tpk_slider.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function tpk_slider_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-slider-block_slider'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'slider-block_slider',
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
