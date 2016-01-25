<?php
/**
 * @file
 * tpk_galerie.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tpk_galerie_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tpk_galerie_node_info() {
  $items = array(
    'galerie' => array(
      'name' => t('Galerie'),
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
