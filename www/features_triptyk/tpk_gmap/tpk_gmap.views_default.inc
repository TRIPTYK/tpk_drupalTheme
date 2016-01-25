<?php
/**
 * @file
 * tpk_gmap.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tpk_gmap_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gmap';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gmap';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gmap';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['datasource'] = 'geolocation';
  $handler->display->display_options['style_options']['latfield'] = 'field_geolocation';
  $handler->display->display_options['style_options']['lonfield'] = 'field_geolocation';
  $handler->display->display_options['style_options']['markerfield'] = 'field_geolocation';
  $handler->display->display_options['style_options']['geofield'] = 'field_geolocation';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'field_geolocation';
  $handler->display->display_options['style_options']['rmtfieldraw'] = 1;
  $handler->display->display_options['style_options']['animation'] = '0';
  $handler->display->display_options['style_options']['tooltipenabled'] = 1;
  $handler->display->display_options['style_options']['tooltipfield'] = 'field_infobulle';
  $handler->display->display_options['style_options']['bubbletextfield'] = 'field_geolocation';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Geolocation */
  $handler->display->display_options['fields']['field_geolocation']['id'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['table'] = 'field_data_field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['field'] = 'field_geolocation';
  $handler->display->display_options['fields']['field_geolocation']['label'] = '';
  $handler->display->display_options['fields']['field_geolocation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geolocation']['click_sort_column'] = 'lat';
  /* Field: Content: Infobulle */
  $handler->display->display_options['fields']['field_infobulle']['id'] = 'field_infobulle';
  $handler->display->display_options['fields']['field_infobulle']['table'] = 'field_data_field_infobulle';
  $handler->display->display_options['fields']['field_infobulle']['field'] = 'field_infobulle';
  $handler->display->display_options['fields']['field_infobulle']['label'] = '';
  $handler->display->display_options['fields']['field_infobulle']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_infobulle']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Gmap */
  $handler = $view->new_display('block', 'Gmap', 'block_gmap');
  $handler->display->display_options['block_description'] = 'Gmap';
  $translatables['gmap'] = array(
    t('Master'),
    t('Gmap'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
  );
  $export['gmap'] = $view;

  return $export;
}
