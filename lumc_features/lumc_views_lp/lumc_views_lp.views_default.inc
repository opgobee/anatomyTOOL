<?php
/**
 * @file
 * lumc_views_lp.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lumc_views_lp_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'learning_paths';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_learning_path_index';
  $view->human_name = 'Learning paths';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Learning paths';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_index';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_learning_path_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_learning_path_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Node: Node ID */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'search_api_index_learning_path_index';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '<>';
  $handler->display->display_options['filters']['nid']['value'] = '56040';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_learning_path_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_learning_path_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;

  /* Display: Learning paths */
  $handler = $view->new_display('page', 'Learning paths', 'learning_paths');
  $handler->display->display_options['path'] = 'learning-paths';
  $translatables['learning_paths'] = array(
    t('Master'),
    t('Learning paths'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Node ID'),
    t('.'),
    t(','),
  );
  $export['learning_paths'] = $view;

  return $export;
}
