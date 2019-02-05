<?php
/**
 * @file
 * bio_fungi.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bio_fungi_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'fungi';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_fungi';
  $view->human_name = 'Fungi-List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'KINGDOM: FUNGI';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Image-Species-Fungal */
  $handler->display->display_options['fields']['field_image_species_fungal']['id'] = 'field_image_species_fungal';
  $handler->display->display_options['fields']['field_image_species_fungal']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_image_species_fungal']['field'] = 'field_image_species_fungal';
  $handler->display->display_options['fields']['field_image_species_fungal']['label'] = 'Image';
  $handler->display->display_options['fields']['field_image_species_fungal']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_species_fungal']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_image_species_fungal']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_species_fungal']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus/Species';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Family-Fungi */
  $handler->display->display_options['fields']['field_family_fungi']['id'] = 'field_family_fungi';
  $handler->display->display_options['fields']['field_family_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_family_fungi']['field'] = 'field_family_fungi';
  $handler->display->display_options['fields']['field_family_fungi']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family_fungi']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Fungi */
  $handler->display->display_options['fields']['field_order_fungi']['id'] = 'field_order_fungi';
  $handler->display->display_options['fields']['field_order_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_order_fungi']['field'] = 'field_order_fungi';
  $handler->display->display_options['fields']['field_order_fungi']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order_fungi']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Fungi */
  $handler->display->display_options['fields']['field_class_fungi']['id'] = 'field_class_fungi';
  $handler->display->display_options['fields']['field_class_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_class_fungi']['field'] = 'field_class_fungi';
  $handler->display->display_options['fields']['field_class_fungi']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class_fungi']['bypass_access'] = 0;
  /* Field: Indexed Node: Division-Fungi */
  $handler->display->display_options['fields']['field_division_fungi']['id'] = 'field_division_fungi';
  $handler->display->display_options['fields']['field_division_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_division_fungi']['field'] = 'field_division_fungi';
  $handler->display->display_options['fields']['field_division_fungi']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_division_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_division_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_division_fungi']['bypass_access'] = 0;
  /* Contextual filter: Indexed Node: Family-Fungi */
  $handler->display->display_options['arguments']['field_family_fungi']['id'] = 'field_family_fungi';
  $handler->display->display_options['arguments']['field_family_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['arguments']['field_family_fungi']['field'] = 'field_family_fungi';
  $handler->display->display_options['arguments']['field_family_fungi']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_family_fungi']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_family_fungi']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_family_fungi']['not'] = 0;
  /* Filter criterion: Indexed Node: Kingdom */
  $handler->display->display_options['filters']['field_kingdom']['id'] = 'field_kingdom';
  $handler->display->display_options['filters']['field_kingdom']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['filters']['field_kingdom']['field'] = 'field_kingdom';
  $handler->display->display_options['filters']['field_kingdom']['value'] = array(
    157 => '157',
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'fungi-list';

  /* Display: Fungi-List Desktop */
  $handler = $view->new_display('panel_pane', 'Fungi-List Desktop', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Fungi-List Desktop';

  /* Display: Fungi-List Tablet */
  $handler = $view->new_display('panel_pane', 'Fungi-List Tablet', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Fungi-List Tablet';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Image-Species-Fungal */
  $handler->display->display_options['fields']['field_image_species_fungal']['id'] = 'field_image_species_fungal';
  $handler->display->display_options['fields']['field_image_species_fungal']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_image_species_fungal']['field'] = 'field_image_species_fungal';
  $handler->display->display_options['fields']['field_image_species_fungal']['label'] = 'Image';
  $handler->display->display_options['fields']['field_image_species_fungal']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_species_fungal']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_image_species_fungal']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_species_fungal']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus/Species';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Family-Fungi */
  $handler->display->display_options['fields']['field_family_fungi']['id'] = 'field_family_fungi';
  $handler->display->display_options['fields']['field_family_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_family_fungi']['field'] = 'field_family_fungi';
  $handler->display->display_options['fields']['field_family_fungi']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family_fungi']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Fungi */
  $handler->display->display_options['fields']['field_order_fungi']['id'] = 'field_order_fungi';
  $handler->display->display_options['fields']['field_order_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_order_fungi']['field'] = 'field_order_fungi';
  $handler->display->display_options['fields']['field_order_fungi']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order_fungi']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Fungi */
  $handler->display->display_options['fields']['field_class_fungi']['id'] = 'field_class_fungi';
  $handler->display->display_options['fields']['field_class_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_class_fungi']['field'] = 'field_class_fungi';
  $handler->display->display_options['fields']['field_class_fungi']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class_fungi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class_fungi']['bypass_access'] = 0;
  /* Field: Indexed Node: Division-Fungi */
  $handler->display->display_options['fields']['field_division_fungi']['id'] = 'field_division_fungi';
  $handler->display->display_options['fields']['field_division_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_division_fungi']['field'] = 'field_division_fungi';
  $handler->display->display_options['fields']['field_division_fungi']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_division_fungi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_division_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_division_fungi']['bypass_access'] = 0;

  /* Display: Fungi-List Mobile */
  $handler = $view->new_display('panel_pane', 'Fungi-List Mobile', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Fungi-List Mobile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Image-Species-Fungal */
  $handler->display->display_options['fields']['field_image_species_fungal']['id'] = 'field_image_species_fungal';
  $handler->display->display_options['fields']['field_image_species_fungal']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_image_species_fungal']['field'] = 'field_image_species_fungal';
  $handler->display->display_options['fields']['field_image_species_fungal']['label'] = '';
  $handler->display->display_options['fields']['field_image_species_fungal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_species_fungal']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_species_fungal']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_image_species_fungal']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_image_species_fungal']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus/Species';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = '';
  $handler->display->display_options['fields']['field_common_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_common_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Family-Fungi */
  $handler->display->display_options['fields']['field_family_fungi']['id'] = 'field_family_fungi';
  $handler->display->display_options['fields']['field_family_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_family_fungi']['field'] = 'field_family_fungi';
  $handler->display->display_options['fields']['field_family_fungi']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family_fungi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_family_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family_fungi']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Common name: [field_common_name]<br />
Genus species: [title]<br />
Family: [field_family_fungi]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Order-Fungi */
  $handler->display->display_options['fields']['field_order_fungi']['id'] = 'field_order_fungi';
  $handler->display->display_options['fields']['field_order_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_order_fungi']['field'] = 'field_order_fungi';
  $handler->display->display_options['fields']['field_order_fungi']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order_fungi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order_fungi']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Fungi */
  $handler->display->display_options['fields']['field_class_fungi']['id'] = 'field_class_fungi';
  $handler->display->display_options['fields']['field_class_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_class_fungi']['field'] = 'field_class_fungi';
  $handler->display->display_options['fields']['field_class_fungi']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class_fungi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class_fungi']['bypass_access'] = 0;
  /* Field: Indexed Node: Division-Fungi */
  $handler->display->display_options['fields']['field_division_fungi']['id'] = 'field_division_fungi';
  $handler->display->display_options['fields']['field_division_fungi']['table'] = 'search_api_index_fungi';
  $handler->display->display_options['fields']['field_division_fungi']['field'] = 'field_division_fungi';
  $handler->display->display_options['fields']['field_division_fungi']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_division_fungi']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_fungi']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_division_fungi']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_division_fungi']['bypass_access'] = 0;
  $export['fungi'] = $view;

  return $export;
}
