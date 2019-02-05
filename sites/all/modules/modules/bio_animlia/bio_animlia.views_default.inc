<?php
/**
 * @file
 * bio_animlia.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bio_animlia_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'animalia_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_animalia';
  $view->human_name = 'Animalia-List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'KINGDOM: ANIMALIA';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_species_image_animalia' => 'field_species_image_animalia',
    'title' => 'title',
    'field_common_name' => 'field_common_name',
    'field_genus_animalia' => 'field_genus_animalia',
    'field_family_animalia' => 'field_family_animalia',
    'field_suborder_animalia' => 'field_suborder_animalia',
    'field_order_animalia' => 'field_order_animalia',
    'field_class_animalia' => 'field_class_animalia',
    'field_subphylum_animalia' => 'field_subphylum_animalia',
    'field_division_animalia' => 'field_division_animalia',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_species_image_animalia' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_common_name' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_genus_animalia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_family_animalia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_suborder_animalia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order_animalia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_class_animalia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subphylum_animalia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_division_animalia' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Indexed Node: Family-Animalia */
  $handler->display->display_options['relationships']['field_family_animalia']['id'] = 'field_family_animalia';
  $handler->display->display_options['relationships']['field_family_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['relationships']['field_family_animalia']['field'] = 'field_family_animalia';
  /* Field: Indexed Node: Species Image Animalia */
  $handler->display->display_options['fields']['field_species_image_animalia']['id'] = 'field_species_image_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['field'] = 'field_species_image_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['label'] = 'Image';
  $handler->display->display_options['fields']['field_species_image_animalia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image_animalia']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_species_image_animalia']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image_animalia']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus/species';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Genus-Animalia */
  $handler->display->display_options['fields']['field_genus_animalia']['id'] = 'field_genus_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['field'] = 'field_genus_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['label'] = 'Genus';
  $handler->display->display_options['fields']['field_genus_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genus_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_genus_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_genus_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Family-Animalia */
  $handler->display->display_options['fields']['field_family_animalia']['id'] = 'field_family_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['field'] = 'field_family_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Animalia */
  $handler->display->display_options['fields']['field_order_animalia']['id'] = 'field_order_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['field'] = 'field_order_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Animalia */
  $handler->display->display_options['fields']['field_class_animalia']['id'] = 'field_class_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['field'] = 'field_class_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Phylum-Animalia */
  $handler->display->display_options['fields']['field_division_animalia']['id'] = 'field_division_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['field'] = 'field_division_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_division_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_division_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_division_animalia']['bypass_access'] = 0;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  /* Filter criterion: Indexed Node: Kingdom */
  $handler->display->display_options['filters']['field_kingdom']['id'] = 'field_kingdom';
  $handler->display->display_options['filters']['field_kingdom']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['filters']['field_kingdom']['field'] = 'field_kingdom';
  $handler->display->display_options['filters']['field_kingdom']['value'] = array(
    158 => '158',
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'animalia-list';

  /* Display: animal-list-mobile */
  $handler = $view->new_display('panel_pane', 'animal-list-mobile', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'animal-list-mobile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Species Image Animalia */
  $handler->display->display_options['fields']['field_species_image_animalia']['id'] = 'field_species_image_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['field'] = 'field_species_image_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['label'] = '';
  $handler->display->display_options['fields']['field_species_image_animalia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_image_animalia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image_animalia']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_species_image_animalia']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image_animalia']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus/species';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_common_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Family-Animalia */
  $handler->display->display_options['fields']['field_family_animalia']['id'] = 'field_family_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['field'] = 'field_family_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_family_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family_animalia']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Genus species: [title]<br />
Common name: [field_common_name]<br />
Family: [field_family_animalia]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Genus-Animalia */
  $handler->display->display_options['fields']['field_genus_animalia']['id'] = 'field_genus_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['field'] = 'field_genus_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['label'] = 'Genus';
  $handler->display->display_options['fields']['field_genus_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genus_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_genus_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_genus_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Suborder-Animalia */
  $handler->display->display_options['fields']['field_suborder_animalia']['id'] = 'field_suborder_animalia';
  $handler->display->display_options['fields']['field_suborder_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_suborder_animalia']['field'] = 'field_suborder_animalia';
  $handler->display->display_options['fields']['field_suborder_animalia']['label'] = 'Suborder';
  $handler->display->display_options['fields']['field_suborder_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_suborder_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_suborder_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Animalia */
  $handler->display->display_options['fields']['field_order_animalia']['id'] = 'field_order_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['field'] = 'field_order_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Animalia */
  $handler->display->display_options['fields']['field_class_animalia']['id'] = 'field_class_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['field'] = 'field_class_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Phylum-Animalia */
  $handler->display->display_options['fields']['field_division_animalia']['id'] = 'field_division_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['field'] = 'field_division_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_division_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_division_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_division_animalia']['bypass_access'] = 0;

  /* Display: animal-list-tablet */
  $handler = $view->new_display('panel_pane', 'animal-list-tablet', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'animal-list-tablet';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Species Image Animalia */
  $handler->display->display_options['fields']['field_species_image_animalia']['id'] = 'field_species_image_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['field'] = 'field_species_image_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['label'] = 'Image';
  $handler->display->display_options['fields']['field_species_image_animalia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image_animalia']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_species_image_animalia']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image_animalia']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus species';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Genus-Animalia */
  $handler->display->display_options['fields']['field_genus_animalia']['id'] = 'field_genus_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['field'] = 'field_genus_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['label'] = 'Genus';
  $handler->display->display_options['fields']['field_genus_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genus_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_genus_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_genus_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Family-Animalia */
  $handler->display->display_options['fields']['field_family_animalia']['id'] = 'field_family_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['field'] = 'field_family_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_family_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family_animalia']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Genus species: [title]<br />
Common name: [field_common_name]<br />
Family: [field_family_animalia]
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Suborder-Animalia */
  $handler->display->display_options['fields']['field_suborder_animalia']['id'] = 'field_suborder_animalia';
  $handler->display->display_options['fields']['field_suborder_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_suborder_animalia']['field'] = 'field_suborder_animalia';
  $handler->display->display_options['fields']['field_suborder_animalia']['label'] = 'Suborder';
  $handler->display->display_options['fields']['field_suborder_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_suborder_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_suborder_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Animalia */
  $handler->display->display_options['fields']['field_order_animalia']['id'] = 'field_order_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['field'] = 'field_order_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Animalia */
  $handler->display->display_options['fields']['field_class_animalia']['id'] = 'field_class_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['field'] = 'field_class_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Subphylum-Animalia */
  $handler->display->display_options['fields']['field_subphylum_animalia']['id'] = 'field_subphylum_animalia';
  $handler->display->display_options['fields']['field_subphylum_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_subphylum_animalia']['field'] = 'field_subphylum_animalia';
  $handler->display->display_options['fields']['field_subphylum_animalia']['label'] = 'Subphylum';
  $handler->display->display_options['fields']['field_subphylum_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_subphylum_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_subphylum_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Phylum-Animalia */
  $handler->display->display_options['fields']['field_division_animalia']['id'] = 'field_division_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['field'] = 'field_division_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_division_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_division_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_division_animalia']['bypass_access'] = 0;

  /* Display: animal-list-desktop */
  $handler = $view->new_display('panel_pane', 'animal-list-desktop', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'animal-list-desktop';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Species Image Animalia */
  $handler->display->display_options['fields']['field_species_image_animalia']['id'] = 'field_species_image_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['field'] = 'field_species_image_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['label'] = 'Image';
  $handler->display->display_options['fields']['field_species_image_animalia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image_animalia']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_species_image_animalia']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image_animalia']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus/species';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Genus-Animalia */
  $handler->display->display_options['fields']['field_genus_animalia']['id'] = 'field_genus_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['field'] = 'field_genus_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['label'] = 'Genus';
  $handler->display->display_options['fields']['field_genus_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genus_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_genus_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_genus_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Family-Animalia */
  $handler->display->display_options['fields']['field_family_animalia']['id'] = 'field_family_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['field'] = 'field_family_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Suborder-Animalia */
  $handler->display->display_options['fields']['field_suborder_animalia']['id'] = 'field_suborder_animalia';
  $handler->display->display_options['fields']['field_suborder_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_suborder_animalia']['field'] = 'field_suborder_animalia';
  $handler->display->display_options['fields']['field_suborder_animalia']['label'] = 'Suborder';
  $handler->display->display_options['fields']['field_suborder_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_suborder_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_suborder_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Animalia */
  $handler->display->display_options['fields']['field_order_animalia']['id'] = 'field_order_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['field'] = 'field_order_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Animalia */
  $handler->display->display_options['fields']['field_class_animalia']['id'] = 'field_class_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['field'] = 'field_class_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Subphylum-Animalia */
  $handler->display->display_options['fields']['field_subphylum_animalia']['id'] = 'field_subphylum_animalia';
  $handler->display->display_options['fields']['field_subphylum_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_subphylum_animalia']['field'] = 'field_subphylum_animalia';
  $handler->display->display_options['fields']['field_subphylum_animalia']['label'] = 'Subphylum';
  $handler->display->display_options['fields']['field_subphylum_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_subphylum_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_subphylum_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Phylum-Animalia */
  $handler->display->display_options['fields']['field_division_animalia']['id'] = 'field_division_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['field'] = 'field_division_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_division_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_division_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_division_animalia']['bypass_access'] = 0;

  /* Display: animal-list-xsmall */
  $handler = $view->new_display('panel_pane', 'animal-list-xsmall', 'panel_pane_4');
  $handler->display->display_options['display_description'] = 'animal-list-xsmall';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Species Image Animalia */
  $handler->display->display_options['fields']['field_species_image_animalia']['id'] = 'field_species_image_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['field'] = 'field_species_image_animalia';
  $handler->display->display_options['fields']['field_species_image_animalia']['label'] = '';
  $handler->display->display_options['fields']['field_species_image_animalia']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_image_animalia']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image_animalia']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_species_image_animalia']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image_animalia']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus/species';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_common_name']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Family-Animalia */
  $handler->display->display_options['fields']['field_family_animalia']['id'] = 'field_family_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['field'] = 'field_family_animalia';
  $handler->display->display_options['fields']['field_family_animalia']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_family_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family_animalia']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Genus species: [title]<br />
Common name: [field_common_name]<br />
Family: [field_family_animalia]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Genus-Animalia */
  $handler->display->display_options['fields']['field_genus_animalia']['id'] = 'field_genus_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['field'] = 'field_genus_animalia';
  $handler->display->display_options['fields']['field_genus_animalia']['label'] = 'Genus';
  $handler->display->display_options['fields']['field_genus_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_genus_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_genus_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_genus_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Animalia */
  $handler->display->display_options['fields']['field_order_animalia']['id'] = 'field_order_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['field'] = 'field_order_animalia';
  $handler->display->display_options['fields']['field_order_animalia']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Animalia */
  $handler->display->display_options['fields']['field_class_animalia']['id'] = 'field_class_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['field'] = 'field_class_animalia';
  $handler->display->display_options['fields']['field_class_animalia']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class_animalia']['bypass_access'] = 0;
  /* Field: Indexed Node: Phylum-Animalia */
  $handler->display->display_options['fields']['field_division_animalia']['id'] = 'field_division_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['table'] = 'search_api_index_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['field'] = 'field_division_animalia';
  $handler->display->display_options['fields']['field_division_animalia']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_division_animalia']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_division_animalia']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_division_animalia']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_division_animalia']['bypass_access'] = 0;
  $export['animalia_list'] = $view;

  $view = new view();
  $view->name = 'video_list_animalia';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'video_list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Video List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Plant Video */
  $handler->display->display_options['fields']['field_plant_video']['id'] = 'field_plant_video';
  $handler->display->display_options['fields']['field_plant_video']['table'] = 'field_data_field_plant_video';
  $handler->display->display_options['fields']['field_plant_video']['field'] = 'field_plant_video';
  $handler->display->display_options['fields']['field_plant_video']['label'] = '';
  $handler->display->display_options['fields']['field_plant_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_plant_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_plant_video']['settings'] = array(
    'widthxheight' => '320x180',
    'poster_image_style' => 'medium',
  );
  /* Field: Content: Animalia Video */
  $handler->display->display_options['fields']['field_animalia_video']['id'] = 'field_animalia_video';
  $handler->display->display_options['fields']['field_animalia_video']['table'] = 'field_data_field_animalia_video';
  $handler->display->display_options['fields']['field_animalia_video']['field'] = 'field_animalia_video';
  $handler->display->display_options['fields']['field_animalia_video']['label'] = '';
  $handler->display->display_options['fields']['field_animalia_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_animalia_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_animalia_video']['settings'] = array(
    'widthxheight' => '320x180',
    'poster_image_style' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'field_data_field_common_name';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Genus species: [title]<br />
Common name: [field_common_name]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  /* Filter criterion: Content: Animalia Video (field_animalia_video:fid) */
  $handler->display->display_options['filters']['field_animalia_video_fid']['id'] = 'field_animalia_video_fid';
  $handler->display->display_options['filters']['field_animalia_video_fid']['table'] = 'field_data_field_animalia_video';
  $handler->display->display_options['filters']['field_animalia_video_fid']['field'] = 'field_animalia_video_fid';
  $handler->display->display_options['filters']['field_animalia_video_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_animalia_video_fid']['group'] = 1;
  /* Filter criterion: Content: Plant Video (field_plant_video:fid) */
  $handler->display->display_options['filters']['field_plant_video_fid']['id'] = 'field_plant_video_fid';
  $handler->display->display_options['filters']['field_plant_video_fid']['table'] = 'field_data_field_plant_video';
  $handler->display->display_options['filters']['field_plant_video_fid']['field'] = 'field_plant_video_fid';
  $handler->display->display_options['filters']['field_plant_video_fid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_plant_video_fid']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'video-list';
  $export['video_list_animalia'] = $view;

  return $export;
}
