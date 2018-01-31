<?php
/**
 * @file
 * lumc_views_data_items.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lumc_views_data_items_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'anatomy_in_practice_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_atlas_index';
  $view->human_name = 'Anatomy in practice Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Anatomy in practice';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_institution_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_data_category' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_region_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_system_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_anatomy_in_practice' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_clinical_field_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'search_api_language' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_educational_level' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_license' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Your search yielded no results.';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search yielded no results.';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_di_image']['id'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image']['field'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_di_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_image_url']['id'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image_url']['field'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['label'] = 'Image url';
  $handler->display->display_options['fields']['field_di_image_url']['hide_empty'] = TRUE;
  /* Field: Document Blog: Summary (indexed) */
  $handler->display->display_options['fields']['field_di_document_blog_summary']['id'] = 'field_di_document_blog_summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['field'] = 'field_di_document_blog_summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['label'] = 'Blog summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_blog_summary']['link_to_entity'] = 0;
  /* Field: Document file: The file. (indexed) */
  $handler->display->display_options['fields']['field_di_document_file_file']['id'] = 'field_di_document_file_file';
  $handler->display->display_options['fields']['field_di_document_file_file']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_file_file']['field'] = 'field_di_document_file_file';
  $handler->display->display_options['fields']['field_di_document_file_file']['label'] = 'Document file';
  $handler->display->display_options['fields']['field_di_document_file_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_file_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_di_document_file_file']['bypass_access'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_document_reference']['id'] = 'field_di_document_reference';
  $handler->display->display_options['fields']['field_di_document_reference']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_reference']['field'] = 'field_di_document_reference';
  $handler->display->display_options['fields']['field_di_document_reference']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Presentation file */
  $handler->display->display_options['fields']['field_di_presentation_file']['id'] = 'field_di_presentation_file';
  $handler->display->display_options['fields']['field_di_presentation_file']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_presentation_file']['field'] = 'field_di_presentation_file';
  $handler->display->display_options['fields']['field_di_presentation_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_presentation_file']['click_sort_column'] = 'fid';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['field_di_presentation_reference']['id'] = 'field_di_presentation_reference';
  $handler->display->display_options['fields']['field_di_presentation_reference']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_presentation_reference']['field'] = 'field_di_presentation_reference';
  $handler->display->display_options['fields']['field_di_presentation_reference']['hide_empty'] = TRUE;
  /* Field: Document Microscopy: Text (indexed) */
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['id'] = 'field_di_document_microscopy_value';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['field'] = 'field_di_document_microscopy_value';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['label'] = 'Microscopy';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;
  /* Filter criterion: Indexed Node: Topics */
  $handler->display->display_options['filters']['field_di_data_category']['id'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_di_data_category']['field'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['value'] = array(
    240 => '240',
  );

  /* Display: Anatomy in practice items per anatomical strucuture page */
  $handler = $view->new_display('page', 'Anatomy in practice items per anatomical strucuture page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_anatomical_structures']['id'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['arguments']['field_anatomical_structures']['field'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_options']['argument'] = '1';
  $handler->display->display_options['arguments']['field_anatomical_structures']['summary']['format'] = 'default_summary';
  $handler->display->display_options['path'] = 'anatomy_in_practice/%';

  /* Display: All Anatomy in practice items */
  $handler = $view->new_display('page', 'All Anatomy in practice items', 'page_1');
  $handler->display->display_options['path'] = 'anatomy_in_practice';
  $translatables['anatomy_in_practice_search'] = array(
    t('Master'),
    t('Anatomy in practice'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Your search yielded no results.'),
    t('.'),
    t(','),
    t('Image'),
    t('Image url'),
    t('Blog summary'),
    t('Document file'),
    t('Broken handler search_api_index_atlas_index.field_di_document_reference'),
    t('Presentation file'),
    t('URL'),
    t('Microscopy'),
    t('Anatomy in practice items per anatomical strucuture page'),
    t('All'),
    t('All Anatomy in practice items'),
  );
  $export['anatomy_in_practice_search'] = $view;

  $view = new view();
  $view->name = 'dissection_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_atlas_index';
  $view->human_name = 'Dissection Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dissection';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_institution_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_data_category' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_region_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'search_api_language' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_educational_level' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_license' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Your search yielded no results.';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search yielded no results.';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_di_image']['id'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image']['field'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_di_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_image_url']['id'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image_url']['field'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['label'] = 'Image url';
  $handler->display->display_options['fields']['field_di_image_url']['hide_empty'] = TRUE;
  /* Field: Document Blog: Summary (indexed) */
  $handler->display->display_options['fields']['field_di_document_blog_summary']['id'] = 'field_di_document_blog_summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['field'] = 'field_di_document_blog_summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['label'] = 'Blog summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_blog_summary']['link_to_entity'] = 0;
  /* Field: Document file: The file. (indexed) */
  $handler->display->display_options['fields']['field_di_document_file_file']['id'] = 'field_di_document_file_file';
  $handler->display->display_options['fields']['field_di_document_file_file']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_file_file']['field'] = 'field_di_document_file_file';
  $handler->display->display_options['fields']['field_di_document_file_file']['label'] = 'Document file';
  $handler->display->display_options['fields']['field_di_document_file_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_file_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_di_document_file_file']['bypass_access'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_document_reference']['id'] = 'field_di_document_reference';
  $handler->display->display_options['fields']['field_di_document_reference']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_reference']['field'] = 'field_di_document_reference';
  $handler->display->display_options['fields']['field_di_document_reference']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Presentation file */
  $handler->display->display_options['fields']['field_di_presentation_file']['id'] = 'field_di_presentation_file';
  $handler->display->display_options['fields']['field_di_presentation_file']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_presentation_file']['field'] = 'field_di_presentation_file';
  $handler->display->display_options['fields']['field_di_presentation_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_presentation_file']['click_sort_column'] = 'fid';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['field_di_presentation_reference']['id'] = 'field_di_presentation_reference';
  $handler->display->display_options['fields']['field_di_presentation_reference']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_presentation_reference']['field'] = 'field_di_presentation_reference';
  $handler->display->display_options['fields']['field_di_presentation_reference']['hide_empty'] = TRUE;
  /* Field: Document Microscopy: Text (indexed) */
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['id'] = 'field_di_document_microscopy_value';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['field'] = 'field_di_document_microscopy_value';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['label'] = 'Microscopy';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;
  /* Filter criterion: Indexed Node: Topics */
  $handler->display->display_options['filters']['field_di_data_category']['id'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_di_data_category']['field'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['value'] = array(
    140 => '140',
  );

  /* Display: Dissection items per anatomical strucuture page */
  $handler = $view->new_display('page', 'Dissection items per anatomical strucuture page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_anatomical_structures']['id'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['arguments']['field_anatomical_structures']['field'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_options']['argument'] = '1';
  $handler->display->display_options['arguments']['field_anatomical_structures']['summary']['format'] = 'default_summary';
  $handler->display->display_options['path'] = 'dissection/%';

  /* Display: All Dissection items */
  $handler = $view->new_display('page', 'All Dissection items', 'page_1');
  $handler->display->display_options['path'] = 'dissection';
  $translatables['dissection_search'] = array(
    t('Master'),
    t('Dissection'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Your search yielded no results.'),
    t('.'),
    t(','),
    t('Image'),
    t('Image url'),
    t('Blog summary'),
    t('Document file'),
    t('Broken handler search_api_index_atlas_index.field_di_document_reference'),
    t('Presentation file'),
    t('URL'),
    t('Microscopy'),
    t('Dissection items per anatomical strucuture page'),
    t('All'),
    t('All Dissection items'),
  );
  $export['dissection_search'] = $view;

  $view = new view();
  $view->name = 'embryology_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_atlas_index';
  $view->human_name = 'Embryology Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Embryology';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_institution_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_data_category' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_region_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_system_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'search_api_language' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_educational_level' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_license' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Your search yielded no results.';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search yielded no results.';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_di_image']['id'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image']['field'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_di_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_image_url']['id'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image_url']['field'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['label'] = 'Image url';
  $handler->display->display_options['fields']['field_di_image_url']['hide_empty'] = TRUE;
  /* Field: Document Blog: Summary (indexed) */
  $handler->display->display_options['fields']['field_di_document_blog_summary']['id'] = 'field_di_document_blog_summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['field'] = 'field_di_document_blog_summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['label'] = 'Blog summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_blog_summary']['link_to_entity'] = 0;
  /* Field: Document file: The file. (indexed) */
  $handler->display->display_options['fields']['field_di_document_file_file']['id'] = 'field_di_document_file_file';
  $handler->display->display_options['fields']['field_di_document_file_file']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_file_file']['field'] = 'field_di_document_file_file';
  $handler->display->display_options['fields']['field_di_document_file_file']['label'] = 'Document file';
  $handler->display->display_options['fields']['field_di_document_file_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_file_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_di_document_file_file']['bypass_access'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_document_reference']['id'] = 'field_di_document_reference';
  $handler->display->display_options['fields']['field_di_document_reference']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_reference']['field'] = 'field_di_document_reference';
  $handler->display->display_options['fields']['field_di_document_reference']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Presentation file */
  $handler->display->display_options['fields']['field_di_presentation_file']['id'] = 'field_di_presentation_file';
  $handler->display->display_options['fields']['field_di_presentation_file']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_presentation_file']['field'] = 'field_di_presentation_file';
  $handler->display->display_options['fields']['field_di_presentation_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_presentation_file']['click_sort_column'] = 'fid';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['field_di_presentation_reference']['id'] = 'field_di_presentation_reference';
  $handler->display->display_options['fields']['field_di_presentation_reference']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_presentation_reference']['field'] = 'field_di_presentation_reference';
  $handler->display->display_options['fields']['field_di_presentation_reference']['hide_empty'] = TRUE;
  /* Field: Document Microscopy: Text (indexed) */
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['id'] = 'field_di_document_microscopy_value';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['field'] = 'field_di_document_microscopy_value';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['label'] = 'Microscopy';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;
  /* Filter criterion: Indexed Node: Topics */
  $handler->display->display_options['filters']['field_di_data_category']['id'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_di_data_category']['field'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['value'] = array(
    137 => '137',
  );

  /* Display: Embryology items per anatomical strucuture page */
  $handler = $view->new_display('page', 'Embryology items per anatomical strucuture page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_anatomical_structures']['id'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['arguments']['field_anatomical_structures']['field'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_options']['argument'] = '1';
  $handler->display->display_options['arguments']['field_anatomical_structures']['summary']['format'] = 'default_summary';
  $handler->display->display_options['path'] = 'embryology/%';

  /* Display: All Embryology items */
  $handler = $view->new_display('page', 'All Embryology items', 'page_1');
  $handler->display->display_options['path'] = 'embryology';
  $translatables['embryology_search'] = array(
    t('Master'),
    t('Embryology'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Your search yielded no results.'),
    t('.'),
    t(','),
    t('Image'),
    t('Image url'),
    t('Blog summary'),
    t('Document file'),
    t('Broken handler search_api_index_atlas_index.field_di_document_reference'),
    t('Presentation file'),
    t('URL'),
    t('Microscopy'),
    t('Embryology items per anatomical strucuture page'),
    t('All'),
    t('All Embryology items'),
  );
  $export['embryology_search'] = $view;

  $view = new view();
  $view->name = 'gallery_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_atlas_index';
  $view->human_name = 'Gallery search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_data_category' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_institution_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_region_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_system_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'search_api_language' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_educational_level' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_license' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Your search yielded no results.';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search yielded no results.';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_di_image']['id'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image']['field'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_di_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_di_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Indexed Node: URL of image */
  $handler->display->display_options['fields']['field_di_image_link']['id'] = 'field_di_image_link';
  $handler->display->display_options['fields']['field_di_image_link']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image_link']['field'] = 'field_di_image_link';
  $handler->display->display_options['fields']['field_di_image_link']['label'] = 'Image url';
  $handler->display->display_options['fields']['field_di_image_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_di_image_link']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_image_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_di_image_link']['type'] = 'lumc_link_embeded_formatter';
  $handler->display->display_options['fields']['field_di_image_link']['settings'] = array(
    'source_type' => 'image',
  );
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;

  /* Display: Items per anatomical structure */
  $handler = $view->new_display('page', 'Items per anatomical structure', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Anatomical Structures: Node ID (indexed) */
  $handler->display->display_options['arguments']['field_anatomical_structures_nid']['id'] = 'field_anatomical_structures_nid';
  $handler->display->display_options['arguments']['field_anatomical_structures_nid']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['arguments']['field_anatomical_structures_nid']['field'] = 'field_anatomical_structures_nid';
  $handler->display->display_options['arguments']['field_anatomical_structures_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_anatomical_structures_nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_anatomical_structures_nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['field_anatomical_structures_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_anatomical_structures_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_anatomical_structures_nid']['not'] = 0;
  $handler->display->display_options['path'] = 'gallery/%';

  /* Display: Items */
  $handler = $view->new_display('page', 'Items', 'page_1');
  $handler->display->display_options['path'] = 'gallery';

  /* Display: Documents */
  $handler = $view->new_display('page', 'Documents', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Documents';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Data Type */
  $handler->display->display_options['filters']['field_di_type']['id'] = 'field_di_type';
  $handler->display->display_options['filters']['field_di_type']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_di_type']['field'] = 'field_di_type';
  $handler->display->display_options['filters']['field_di_type']['value'] = array(
    124 => '124',
  );
  $handler->display->display_options['filters']['field_di_type']['group'] = 1;
  $handler->display->display_options['filters']['field_di_type']['expose']['operator_id'] = 'field_di_type_op';
  $handler->display->display_options['filters']['field_di_type']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['field_di_type']['expose']['operator'] = 'field_di_type_op';
  $handler->display->display_options['filters']['field_di_type']['expose']['identifier'] = 'field_di_type';
  $handler->display->display_options['filters']['field_di_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_di_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_di_type']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;
  $handler->display->display_options['path'] = 'documents';

  /* Display: Videos */
  $handler = $view->new_display('page', 'Videos', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Videos';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Data Type */
  $handler->display->display_options['filters']['field_di_type']['id'] = 'field_di_type';
  $handler->display->display_options['filters']['field_di_type']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_di_type']['field'] = 'field_di_type';
  $handler->display->display_options['filters']['field_di_type']['value'] = array(
    148 => '148',
  );
  $handler->display->display_options['filters']['field_di_type']['group'] = 1;
  $handler->display->display_options['filters']['field_di_type']['expose']['operator_id'] = 'field_di_type_op';
  $handler->display->display_options['filters']['field_di_type']['expose']['label'] = 'Format';
  $handler->display->display_options['filters']['field_di_type']['expose']['operator'] = 'field_di_type_op';
  $handler->display->display_options['filters']['field_di_type']['expose']['identifier'] = 'field_di_type';
  $handler->display->display_options['filters']['field_di_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_di_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_di_type']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;
  $handler->display->display_options['path'] = 'videos';

  /* Display: Interactive */
  $handler = $view->new_display('page', 'Interactive', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Interactive';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Data Type */
  $handler->display->display_options['filters']['field_di_type']['id'] = 'field_di_type';
  $handler->display->display_options['filters']['field_di_type']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_di_type']['field'] = 'field_di_type';
  $handler->display->display_options['filters']['field_di_type']['value'] = array(
    131 => '131',
  );
  $handler->display->display_options['filters']['field_di_type']['group'] = 1;
  $handler->display->display_options['filters']['field_di_type']['expose']['operator_id'] = 'field_di_type_op';
  $handler->display->display_options['filters']['field_di_type']['expose']['label'] = 'Data Type';
  $handler->display->display_options['filters']['field_di_type']['expose']['operator'] = 'field_di_type_op';
  $handler->display->display_options['filters']['field_di_type']['expose']['identifier'] = 'field_di_type';
  $handler->display->display_options['filters']['field_di_type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_di_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  $handler->display->display_options['filters']['field_di_type']['expose']['reduce'] = 0;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;
  $handler->display->display_options['path'] = 'interactive';
  $translatables['gallery_search'] = array(
    t('Master'),
    t('Gallery'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Your search yielded no results.'),
    t('.'),
    t(','),
    t('Image'),
    t('Image url'),
    t('Items per anatomical structure'),
    t('All'),
    t('Items'),
    t('Documents'),
    t('Format'),
    t('Videos'),
    t('Interactive'),
    t('Data Type'),
  );
  $export['gallery_search'] = $view;

  $view = new view();
  $view->name = 'images_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_atlas_index';
  $view->human_name = 'Images search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_institution_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_region_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_system_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_data_category_1' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_clinical_field_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_image_collection' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_image_technique_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_view' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'search_api_language' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_educational_level' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_license' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Your search yielded no results.';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search yielded no results.';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_di_image']['id'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image']['field'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_di_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_di_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_image_url']['id'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image_url']['field'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['label'] = 'Image url';
  $handler->display->display_options['fields']['field_di_image_url']['hide_empty'] = TRUE;
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;
  /* Filter criterion: Indexed Node: Data Type */
  $handler->display->display_options['filters']['field_di_type']['id'] = 'field_di_type';
  $handler->display->display_options['filters']['field_di_type']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_di_type']['field'] = 'field_di_type';
  $handler->display->display_options['filters']['field_di_type']['value'] = array(
    123 => '123',
  );

  /* Display: Images per anatomical strucutre page */
  $handler = $view->new_display('page', 'Images per anatomical strucutre page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_anatomical_structures']['id'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['arguments']['field_anatomical_structures']['field'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_options']['argument'] = '1';
  $handler->display->display_options['arguments']['field_anatomical_structures']['summary']['format'] = 'default_summary';
  $handler->display->display_options['path'] = 'images/%';

  /* Display: All Image items */
  $handler = $view->new_display('page', 'All Image items', 'page_1');
  $handler->display->display_options['path'] = 'images';
  $translatables['images_search'] = array(
    t('Master'),
    t('Images'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Your search yielded no results.'),
    t('.'),
    t(','),
    t('Image'),
    t('Image url'),
    t('Images per anatomical strucutre page'),
    t('All'),
    t('All Image items'),
  );
  $export['images_search'] = $view;

  $view = new view();
  $view->name = 'imaging_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_atlas_index';
  $view->human_name = 'Radiology Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Radiology';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_institution_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_data_category' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_region_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_system_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_clinical_field_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_image_technique_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_view' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'search_api_language' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_educational_level' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_license' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Your search yielded no results.';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search yielded no results.';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_di_image']['id'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image']['field'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_di_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_image_url']['id'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image_url']['field'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['label'] = 'Image url';
  $handler->display->display_options['fields']['field_di_image_url']['hide_empty'] = TRUE;
  /* Field: Document Blog: Summary (indexed) */
  $handler->display->display_options['fields']['field_di_document_blog_summary']['id'] = 'field_di_document_blog_summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['field'] = 'field_di_document_blog_summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['label'] = 'Blog summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_blog_summary']['link_to_entity'] = 0;
  /* Field: Document file: The file. (indexed) */
  $handler->display->display_options['fields']['field_di_document_file_file']['id'] = 'field_di_document_file_file';
  $handler->display->display_options['fields']['field_di_document_file_file']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_file_file']['field'] = 'field_di_document_file_file';
  $handler->display->display_options['fields']['field_di_document_file_file']['label'] = 'Document file';
  $handler->display->display_options['fields']['field_di_document_file_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_file_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_di_document_file_file']['bypass_access'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_document_reference']['id'] = 'field_di_document_reference';
  $handler->display->display_options['fields']['field_di_document_reference']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_reference']['field'] = 'field_di_document_reference';
  $handler->display->display_options['fields']['field_di_document_reference']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Presentation file */
  $handler->display->display_options['fields']['field_di_presentation_file']['id'] = 'field_di_presentation_file';
  $handler->display->display_options['fields']['field_di_presentation_file']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_presentation_file']['field'] = 'field_di_presentation_file';
  $handler->display->display_options['fields']['field_di_presentation_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_presentation_file']['click_sort_column'] = 'fid';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['field_di_presentation_reference']['id'] = 'field_di_presentation_reference';
  $handler->display->display_options['fields']['field_di_presentation_reference']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_presentation_reference']['field'] = 'field_di_presentation_reference';
  $handler->display->display_options['fields']['field_di_presentation_reference']['hide_empty'] = TRUE;
  /* Field: Document Microscopy: Text (indexed) */
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['id'] = 'field_di_document_microscopy_value';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['field'] = 'field_di_document_microscopy_value';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['label'] = 'Microscopy';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;
  /* Filter criterion: Indexed Node: Topics */
  $handler->display->display_options['filters']['field_di_data_category']['id'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_di_data_category']['field'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['value'] = array(
    142 => '142',
  );

  /* Display: Radiology items per anatomical strucuture page */
  $handler = $view->new_display('page', 'Radiology items per anatomical strucuture page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_anatomical_structures']['id'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['arguments']['field_anatomical_structures']['field'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_options']['argument'] = '1';
  $handler->display->display_options['arguments']['field_anatomical_structures']['summary']['format'] = 'default_summary';
  $handler->display->display_options['path'] = 'radiology/%';

  /* Display: All Radiology items */
  $handler = $view->new_display('page', 'All Radiology items', 'page_1');
  $handler->display->display_options['path'] = 'radiology';
  $translatables['imaging_search'] = array(
    t('Master'),
    t('Radiology'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Your search yielded no results.'),
    t('.'),
    t(','),
    t('Image'),
    t('Image url'),
    t('Blog summary'),
    t('Document file'),
    t('Broken handler search_api_index_atlas_index.field_di_document_reference'),
    t('Presentation file'),
    t('URL'),
    t('Microscopy'),
    t('Radiology items per anatomical strucuture page'),
    t('All'),
    t('All Radiology items'),
  );
  $export['imaging_search'] = $view;

  $view = new view();
  $view->name = 'introductions_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_atlas_index';
  $view->human_name = 'Introductions search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Introductions';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_institution_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_data_category' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_region_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_system_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'search_api_language' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_educational_level' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_license' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Your search yielded no results.';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search yielded no results.';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_di_image']['id'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image']['field'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_di_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_di_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_image_url']['id'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image_url']['field'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['label'] = 'Image url';
  $handler->display->display_options['fields']['field_di_image_url']['hide_empty'] = TRUE;
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;
  /* Filter criterion: Indexed Node: Topics */
  $handler->display->display_options['filters']['field_di_data_category']['id'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_di_data_category']['field'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['value'] = array(
    134 => '134',
  );
  $handler->display->display_options['filters']['field_di_data_category']['group'] = 1;

  /* Display: Introductions per anatomical strucutre page */
  $handler = $view->new_display('page', 'Introductions per anatomical strucutre page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_anatomical_structures']['id'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['arguments']['field_anatomical_structures']['field'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_options']['argument'] = '1';
  $handler->display->display_options['arguments']['field_anatomical_structures']['summary']['format'] = 'default_summary';
  $handler->display->display_options['path'] = 'introductions/%';

  /* Display: All Introduction items */
  $handler = $view->new_display('page', 'All Introduction items', 'page_1');
  $handler->display->display_options['path'] = 'introductions';
  $translatables['introductions_search'] = array(
    t('Master'),
    t('Introductions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Your search yielded no results.'),
    t('.'),
    t(','),
    t('Image'),
    t('Image url'),
    t('Introductions per anatomical strucutre page'),
    t('All'),
    t('All Introduction items'),
  );
  $export['introductions_search'] = $view;

  $view = new view();
  $view->name = 'microscopy_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_atlas_index';
  $view->human_name = 'Microscopy Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Microscopy';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_institution_nid' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_data_category' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_anatomical_structures_field_as_anatomical_system_parents_all' => array(
      'bef_format' => 'default',
      'slider_options' => array(
        'bef_slider_min' => '0',
        'bef_slider_max' => '99999',
        'bef_slider_step' => '1',
        'bef_slider_animate' => '',
        'bef_slider_orientation' => 'horizontal',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_staining_microscopy' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_image_type' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'search_api_language' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_educational_level' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'field_di_license' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 1,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'html';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['label'] = 'Your search yielded no results.';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Your search yielded no results.';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Image */
  $handler->display->display_options['fields']['field_di_image']['id'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image']['field'] = 'field_di_image';
  $handler->display->display_options['fields']['field_di_image']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_di_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_image_url']['id'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_image_url']['field'] = 'field_di_image_url';
  $handler->display->display_options['fields']['field_di_image_url']['label'] = 'Image url';
  $handler->display->display_options['fields']['field_di_image_url']['hide_empty'] = TRUE;
  /* Field: Document Blog: Summary (indexed) */
  $handler->display->display_options['fields']['field_di_document_blog_summary']['id'] = 'field_di_document_blog_summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['field'] = 'field_di_document_blog_summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['label'] = 'Blog summary';
  $handler->display->display_options['fields']['field_di_document_blog_summary']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_blog_summary']['link_to_entity'] = 0;
  /* Field: Document file: The file. (indexed) */
  $handler->display->display_options['fields']['field_di_document_file_file']['id'] = 'field_di_document_file_file';
  $handler->display->display_options['fields']['field_di_document_file_file']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_file_file']['field'] = 'field_di_document_file_file';
  $handler->display->display_options['fields']['field_di_document_file_file']['label'] = 'Document file';
  $handler->display->display_options['fields']['field_di_document_file_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_file_file']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_di_document_file_file']['bypass_access'] = 0;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_di_document_reference']['id'] = 'field_di_document_reference';
  $handler->display->display_options['fields']['field_di_document_reference']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_reference']['field'] = 'field_di_document_reference';
  $handler->display->display_options['fields']['field_di_document_reference']['hide_empty'] = TRUE;
  /* Field: Indexed Node: Presentation file */
  $handler->display->display_options['fields']['field_di_presentation_file']['id'] = 'field_di_presentation_file';
  $handler->display->display_options['fields']['field_di_presentation_file']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_presentation_file']['field'] = 'field_di_presentation_file';
  $handler->display->display_options['fields']['field_di_presentation_file']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_presentation_file']['click_sort_column'] = 'fid';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['field_di_presentation_reference']['id'] = 'field_di_presentation_reference';
  $handler->display->display_options['fields']['field_di_presentation_reference']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_presentation_reference']['field'] = 'field_di_presentation_reference';
  $handler->display->display_options['fields']['field_di_presentation_reference']['hide_empty'] = TRUE;
  /* Field: Document Microscopy: Text (indexed) */
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['id'] = 'field_di_document_microscopy_value';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['field'] = 'field_di_document_microscopy_value';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['label'] = 'Microscopy';
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_di_document_microscopy_value']['link_to_entity'] = 0;
  /* Sort criterion: Indexed Node: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state']['id'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state']['operator'] = '<>';
  $handler->display->display_options['filters']['field_state']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_state']['group'] = 2;
  /* Filter criterion: Indexed Node: Quality level and permanency */
  $handler->display->display_options['filters']['field_state_1']['id'] = 'field_state_1';
  $handler->display->display_options['filters']['field_state_1']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_state_1']['field'] = 'field_state';
  $handler->display->display_options['filters']['field_state_1']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_state_1']['value'] = array();
  $handler->display->display_options['filters']['field_state_1']['group'] = 2;
  /* Filter criterion: Indexed Node: Topics */
  $handler->display->display_options['filters']['field_di_data_category']['id'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['filters']['field_di_data_category']['field'] = 'field_di_data_category';
  $handler->display->display_options['filters']['field_di_data_category']['value'] = array(
    239 => '239',
  );

  /* Display: Microscopy items per anatomical strucuture page */
  $handler = $view->new_display('page', 'Microscopy items per anatomical strucuture page', 'page');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Broken/missing handler */
  $handler->display->display_options['arguments']['field_anatomical_structures']['id'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['table'] = 'search_api_index_atlas_index';
  $handler->display->display_options['arguments']['field_anatomical_structures']['field'] = 'field_anatomical_structures';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_anatomical_structures']['default_argument_options']['argument'] = '1';
  $handler->display->display_options['arguments']['field_anatomical_structures']['summary']['format'] = 'default_summary';
  $handler->display->display_options['path'] = 'microscopy/%';

  /* Display: All Microscopy items */
  $handler = $view->new_display('page', 'All Microscopy items', 'page_1');
  $handler->display->display_options['path'] = 'microscopy';
  $translatables['microscopy_search'] = array(
    t('Master'),
    t('Microscopy'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Advanced options'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Your search yielded no results.'),
    t('.'),
    t(','),
    t('Image'),
    t('Image url'),
    t('Blog summary'),
    t('Document file'),
    t('Broken handler search_api_index_atlas_index.field_di_document_reference'),
    t('Presentation file'),
    t('URL'),
    t('Microscopy items per anatomical strucuture page'),
    t('All'),
    t('All Microscopy items'),
  );
  $export['microscopy_search'] = $view;

  $view = new view();
  $view->name = 'temporary_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Student-generated content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Student-generated content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'privatemsg_current_day';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Field: Institution */
  $handler->display->display_options['fields']['field_institution_1']['id'] = 'field_institution_1';
  $handler->display->display_options['fields']['field_institution_1']['table'] = 'field_data_field_institution';
  $handler->display->display_options['fields']['field_institution_1']['field'] = 'field_institution';
  $handler->display->display_options['fields']['field_institution_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['field_institution_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_institution_1']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'clone';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/clone';
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alt'] = 'clone';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'data_item' => 'data_item',
    'h5p_content' => 'h5p_content',
  );
  /* Filter criterion: Content: Quality level and permanency (field_state) */
  $handler->display->display_options['filters']['field_state_value']['id'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value']['table'] = 'field_data_field_state';
  $handler->display->display_options['filters']['field_state_value']['field'] = 'field_state_value';
  $handler->display->display_options['filters']['field_state_value']['value']['value'] = '2';
  /* Filter criterion: Field: Institution (field_institution) */
  $handler->display->display_options['filters']['field_institution_target_id']['id'] = 'field_institution_target_id';
  $handler->display->display_options['filters']['field_institution_target_id']['table'] = 'field_data_field_institution';
  $handler->display->display_options['filters']['field_institution_target_id']['field'] = 'field_institution_target_id';
  $handler->display->display_options['filters']['field_institution_target_id']['relationship'] = 'uid';
  $handler->display->display_options['filters']['field_institution_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_institution_target_id']['expose']['operator_id'] = 'field_institution_target_id_op';
  $handler->display->display_options['filters']['field_institution_target_id']['expose']['label'] = 'Institution';
  $handler->display->display_options['filters']['field_institution_target_id']['expose']['operator'] = 'field_institution_target_id_op';
  $handler->display->display_options['filters']['field_institution_target_id']['expose']['identifier'] = 'field_institution_target_id';
  $handler->display->display_options['filters']['field_institution_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
  );

  /* Display: Temporary content */
  $handler = $view->new_display('page', 'Temporary content', 'page');
  $handler->display->display_options['path'] = 'do/my-content/student-generated-content';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Student-generated content';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['temporary_content'] = array(
    t('Master'),
    t('Student-generated content'),
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
    t('author'),
    t('Title'),
    t('Created'),
    t('Name'),
    t('Institution'),
    t('clone'),
    t('Temporary content'),
  );
  $export['temporary_content'] = $view;

  return $export;
}
