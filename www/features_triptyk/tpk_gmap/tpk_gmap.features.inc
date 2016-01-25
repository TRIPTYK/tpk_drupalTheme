<?php
/**
 * @file
 * tpk_gmap.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tpk_gmap_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tpk_gmap_node_info() {
  $items = array(
    'gmap' => array(
      'name' => t('Gmap'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
