<?php
/**
 * @file
 * tpk_highlighted.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tpk_highlighted_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'highlighted';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Highlighted';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Highlighted';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Highlighted Image */
  $handler->display->display_options['fields']['field_highlighted_image']['id'] = 'field_highlighted_image';
  $handler->display->display_options['fields']['field_highlighted_image']['table'] = 'field_data_field_highlighted_image';
  $handler->display->display_options['fields']['field_highlighted_image']['field'] = 'field_highlighted_image';
  $handler->display->display_options['fields']['field_highlighted_image']['label'] = '';
  $handler->display->display_options['fields']['field_highlighted_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlighted_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlighted_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
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

  /* Display: Block Highlighted */
  $handler = $view->new_display('block', 'Block Highlighted', 'block_highlighted');
  $handler->display->display_options['block_description'] = 'Highlighted Block';
  $translatables['highlighted'] = array(
    t('Master'),
    t('Highlighted'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Read More'),
    t('Block Highlighted'),
    t('Highlighted Block'),
  );
  $export['highlighted'] = $view;

  return $export;
}
