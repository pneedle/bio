<?php
/**
 * @file
 * bio_plantae.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bio_plantae_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'flora_sort';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_flora';
  $view->human_name = 'Plantae-List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Kingdom: Plantae';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['search_api_bypass_access'] = 0;
  $handler->display->display_options['query']['options']['entity_access'] = 0;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_species_image' => 'field_species_image',
    'title' => 'title',
    'field_common_name' => 'field_common_name',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_species_image' => array(
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
  );
  /* Relationship: Indexed Node: Family-Plantae */
  $handler->display->display_options['relationships']['field_family']['id'] = 'field_family';
  $handler->display->display_options['relationships']['field_family']['table'] = 'search_api_index_flora';
  $handler->display->display_options['relationships']['field_family']['field'] = 'field_family';
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Genus-Plantae */
  $handler->display->display_options['fields']['field_genus']['id'] = 'field_genus';
  $handler->display->display_options['fields']['field_genus']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_genus']['field'] = 'field_genus';
  $handler->display->display_options['fields']['field_genus']['label'] = 'Genus';
  $handler->display->display_options['fields']['field_genus']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_genus']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_genus']['bypass_access'] = 0;
  /* Field: Indexed Node: Family-Plantae */
  $handler->display->display_options['fields']['field_family']['id'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_family']['field'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Plantae */
  $handler->display->display_options['fields']['field_order']['id'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_order']['field'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Plantae */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class']['bypass_access'] = 0;
  /* Field: Indexed Node: Division-Plantae */
  $handler->display->display_options['fields']['field_phylum']['id'] = 'field_phylum';
  $handler->display->display_options['fields']['field_phylum']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_phylum']['field'] = 'field_phylum';
  $handler->display->display_options['fields']['field_phylum']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_phylum']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_phylum']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_phylum']['bypass_access'] = 0;
  /* Filter criterion: Indexed Node: Kingdom */
  $handler->display->display_options['filters']['field_kingdom']['id'] = 'field_kingdom';
  $handler->display->display_options['filters']['field_kingdom']['table'] = 'search_api_index_flora';
  $handler->display->display_options['filters']['field_kingdom']['field'] = 'field_kingdom';
  $handler->display->display_options['filters']['field_kingdom']['value'] = array(
    156 => '156',
  );
  /* Filter criterion: Indexed Node: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'search_api_index_flora';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Species Image */
  $handler->display->display_options['fields']['field_species_image']['id'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_species_image']['field'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_species_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image']['delta_offset'] = '1';
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Genus-Plantae */
  $handler->display->display_options['fields']['field_genus']['id'] = 'field_genus';
  $handler->display->display_options['fields']['field_genus']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_genus']['field'] = 'field_genus';
  $handler->display->display_options['fields']['field_genus']['label'] = 'Genus';
  $handler->display->display_options['fields']['field_genus']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_genus']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_genus']['bypass_access'] = 0;
  /* Field: Indexed Node: Family-Plantae */
  $handler->display->display_options['fields']['field_family']['id'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_family']['field'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Plantae */
  $handler->display->display_options['fields']['field_order']['id'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_order']['field'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_order']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Plantae */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class']['bypass_access'] = 0;
  /* Field: Indexed Node: Division-Plantae */
  $handler->display->display_options['fields']['field_phylum']['id'] = 'field_phylum';
  $handler->display->display_options['fields']['field_phylum']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_phylum']['field'] = 'field_phylum';
  $handler->display->display_options['fields']['field_phylum']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_phylum']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_phylum']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_phylum']['bypass_access'] = 0;
  $handler->display->display_options['path'] = 'plantae-list';

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['facet_field'] = 'field_order';

  /* Display: Plant-List Desktop */
  $handler = $view->new_display('panel_pane', 'Plant-List Desktop', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Plant-List Desktop';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Species Image */
  $handler->display->display_options['fields']['field_species_image']['id'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_species_image']['field'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['label'] = 'Image';
  $handler->display->display_options['fields']['field_species_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_species_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus/Species';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Family-Plantae */
  $handler->display->display_options['fields']['field_family']['id'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_family']['field'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Plantae */
  $handler->display->display_options['fields']['field_order']['id'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_order']['field'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order']['bypass_access'] = 0;
  /* Field: Indexed Node: Subclass-Plantae */
  $handler->display->display_options['fields']['field_subclass']['id'] = 'field_subclass';
  $handler->display->display_options['fields']['field_subclass']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_subclass']['field'] = 'field_subclass';
  $handler->display->display_options['fields']['field_subclass']['label'] = 'Subclass';
  $handler->display->display_options['fields']['field_subclass']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_subclass']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_subclass']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Plantae */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class']['bypass_access'] = 0;
  /* Field: Indexed Node: Division-Plantae */
  $handler->display->display_options['fields']['field_phylum']['id'] = 'field_phylum';
  $handler->display->display_options['fields']['field_phylum']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_phylum']['field'] = 'field_phylum';
  $handler->display->display_options['fields']['field_phylum']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_phylum']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_phylum']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_phylum']['bypass_access'] = 0;
  /* Field: Indexed Node: Superdivision */
  $handler->display->display_options['fields']['field_superdivision']['id'] = 'field_superdivision';
  $handler->display->display_options['fields']['field_superdivision']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_superdivision']['field'] = 'field_superdivision';
  $handler->display->display_options['fields']['field_superdivision']['label'] = 'Superphylum';
  $handler->display->display_options['fields']['field_superdivision']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_superdivision']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_superdivision']['bypass_access'] = 0;
  /* Field: Indexed Node: Stamp Image */
  $handler->display->display_options['fields']['field_stamp_image']['id'] = 'field_stamp_image';
  $handler->display->display_options['fields']['field_stamp_image']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_stamp_image']['field'] = 'field_stamp_image';
  $handler->display->display_options['fields']['field_stamp_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_stamp_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_stamp_image']['delta_offset'] = '0';

  /* Display: Plant-List Mobile */
  $handler = $view->new_display('panel_pane', 'Plant-List Mobile', 'panel_pane_2');
  $handler->display->display_options['display_description'] = 'Plant-List Mobile';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus/Species';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Species Image */
  $handler->display->display_options['fields']['field_species_image']['id'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_species_image']['field'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['label'] = '';
  $handler->display->display_options['fields']['field_species_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_species_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image']['delta_offset'] = '0';
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Family-Plantae */
  $handler->display->display_options['fields']['field_family']['id'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_family']['field'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_family']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Common name: [field_common_name]<br />
Genus species: [title]<br />
Family: [field_family]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Class-Plantae */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Plantae */
  $handler->display->display_options['fields']['field_order']['id'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_order']['field'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order']['bypass_access'] = 0;
  /* Field: Indexed Node: Subclass-Plantae */
  $handler->display->display_options['fields']['field_subclass']['id'] = 'field_subclass';
  $handler->display->display_options['fields']['field_subclass']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_subclass']['field'] = 'field_subclass';
  $handler->display->display_options['fields']['field_subclass']['label'] = 'Subclass';
  $handler->display->display_options['fields']['field_subclass']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subclass']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_subclass']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_subclass']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Class: [field_class]<br />
Subclass: [field_subclass]<br />
Order: [field_order]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;

  /* Display: Plant-List-Tablet */
  $handler = $view->new_display('panel_pane', 'Plant-List-Tablet', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Plant-List-Tablet';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Species Image */
  $handler->display->display_options['fields']['field_species_image']['id'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_species_image']['field'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['label'] = 'Image';
  $handler->display->display_options['fields']['field_species_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_species_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image']['delta_offset'] = '0';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus/Species';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Family-Plantae */
  $handler->display->display_options['fields']['field_family']['id'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_family']['field'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_family']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Genus species: [title]<br />
Common name: [field_common_name]<br />
Family: [field_family]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Order-Plantae */
  $handler->display->display_options['fields']['field_order']['id'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_order']['field'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order']['bypass_access'] = 0;
  /* Field: Indexed Node: Subclass-Plantae */
  $handler->display->display_options['fields']['field_subclass']['id'] = 'field_subclass';
  $handler->display->display_options['fields']['field_subclass']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_subclass']['field'] = 'field_subclass';
  $handler->display->display_options['fields']['field_subclass']['label'] = 'Subclass';
  $handler->display->display_options['fields']['field_subclass']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subclass']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_subclass']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_subclass']['bypass_access'] = 0;
  /* Field: Indexed Node: Class-Plantae */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['label'] = 'Class';
  $handler->display->display_options['fields']['field_class']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Class/Subclass';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Class: [field_class]<br />
Subclass: [field_subclass]';
  /* Field: Indexed Node: Division-Plantae */
  $handler->display->display_options['fields']['field_phylum']['id'] = 'field_phylum';
  $handler->display->display_options['fields']['field_phylum']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_phylum']['field'] = 'field_phylum';
  $handler->display->display_options['fields']['field_phylum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phylum']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_phylum']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_phylum']['bypass_access'] = 0;
  /* Field: Indexed Node: Superdivision */
  $handler->display->display_options['fields']['field_superdivision']['id'] = 'field_superdivision';
  $handler->display->display_options['fields']['field_superdivision']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_superdivision']['field'] = 'field_superdivision';
  $handler->display->display_options['fields']['field_superdivision']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_superdivision']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_superdivision']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_superdivision']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Superphylum/Phylum';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Superphylum: [field_superdivision]<br />
Phylum: [field_phylum]';

  /* Display: Plant-List-xsmall */
  $handler = $view->new_display('panel_pane', 'Plant-List-xsmall', 'panel_pane_4');
  $handler->display->display_options['display_description'] = 'Plant-List xsmall';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus/Species';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Species Image */
  $handler->display->display_options['fields']['field_species_image']['id'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_species_image']['field'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['label'] = '';
  $handler->display->display_options['fields']['field_species_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_species_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_species_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image']['delta_offset'] = '0';
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common';
  $handler->display->display_options['fields']['field_common_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Indexed Node: Family-Plantae */
  $handler->display->display_options['fields']['field_family']['id'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_family']['field'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['label'] = 'Family';
  $handler->display->display_options['fields']['field_family']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_family']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_family']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_family']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Common name: [field_common_name]<br />
Genus species: [title]<br />
Family: [field_family]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Class-Plantae */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_class']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_class']['bypass_access'] = 0;
  /* Field: Indexed Node: Order-Plantae */
  $handler->display->display_options['fields']['field_order']['id'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_order']['field'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['label'] = 'Order';
  $handler->display->display_options['fields']['field_order']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_order']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_order']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_order']['bypass_access'] = 0;
  /* Field: Indexed Node: Subclass-Plantae */
  $handler->display->display_options['fields']['field_subclass']['id'] = 'field_subclass';
  $handler->display->display_options['fields']['field_subclass']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_subclass']['field'] = 'field_subclass';
  $handler->display->display_options['fields']['field_subclass']['label'] = 'Subclass';
  $handler->display->display_options['fields']['field_subclass']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_subclass']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_subclass']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_subclass']['bypass_access'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Class: [field_class]<br />
Subclass: [field_subclass]<br />
Order: [field_order]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $export['flora_sort'] = $view;

  $view = new view();
  $view->name = 'identification_flora';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_flora';
  $view->human_name = 'Plantae-ID';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Plantae ID';
  $handler->display->display_options['css_class'] = 'plantae-id-content-pane';
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
    'url' => 'url',
    'field_species_image' => 'field_species_image',
    'title' => 'title',
    'field_common_name' => 'field_common_name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'url' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_species_image' => array(
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
  );
  /* Relationship: Indexed Node: Therapeutic */
  $handler->display->display_options['relationships']['field_therapeutic']['id'] = 'field_therapeutic';
  $handler->display->display_options['relationships']['field_therapeutic']['table'] = 'search_api_index_flora';
  $handler->display->display_options['relationships']['field_therapeutic']['field'] = 'field_therapeutic';
  /* Field: Indexed Node: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Species genus';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Species Image */
  $handler->display->display_options['fields']['field_species_image']['id'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_species_image']['field'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['label'] = 'Image';
  $handler->display->display_options['fields']['field_species_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_species_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image']['delta_offset'] = '0';
  /* Field: Indexed Node: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'search_api_index_flora';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['label'] = 'Common Name(s)';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'plantae-id';

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['identification_flora'] = $view;

  $view = new view();
  $view->name = 'leaf_id';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'leaf-venation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'leaf-venation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'leaf_id' => 'leaf_id',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'leaf-venation';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['leaf_id'] = $view;

  $view = new view();
  $view->name = 'leaf_margins';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'leaf-margins';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'leaf-margins';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'margins' => 'margins',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'leaf-margins';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $export['leaf_margins'] = $view;

  $view = new view();
  $view->name = 'leaf_shape';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'leaf-shape';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'leaf-shape';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'file',
  );
  $handler->display->display_options['fields']['field_image']['delta_limit'] = '3';
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'shape' => 'shape',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'leaf-shape';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['leaf_shape'] = $view;

  $view = new view();
  $view->name = 'plantae_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Plantae-List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Plantae-List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
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
    'field_phylum' => 'field_phylum',
    'field_class' => 'field_class',
    'field_order' => 'field_order',
    'field_family' => 'field_family',
    'title' => 'title',
    'field_common_name' => 'field_common_name',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'field_phylum' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_class' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_order' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_family' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
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
  );
  /* Field: Content: Species Image */
  $handler->display->display_options['fields']['field_species_image']['id'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['table'] = 'field_data_field_species_image';
  $handler->display->display_options['fields']['field_species_image']['field'] = 'field_species_image';
  $handler->display->display_options['fields']['field_species_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_species_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_species_image']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_species_image']['delta_offset'] = '0';
  /* Field: Content: Common Name */
  $handler->display->display_options['fields']['field_common_name']['id'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['table'] = 'field_data_field_common_name';
  $handler->display->display_options['fields']['field_common_name']['field'] = 'field_common_name';
  $handler->display->display_options['fields']['field_common_name']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_common_name']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Genus species';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Family-Plantae */
  $handler->display->display_options['fields']['field_family']['id'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['table'] = 'field_data_field_family';
  $handler->display->display_options['fields']['field_family']['field'] = 'field_family';
  $handler->display->display_options['fields']['field_family']['label'] = 'Family';
  /* Field: Content: Order-Plantae */
  $handler->display->display_options['fields']['field_order']['id'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['table'] = 'field_data_field_order';
  $handler->display->display_options['fields']['field_order']['field'] = 'field_order';
  $handler->display->display_options['fields']['field_order']['label'] = 'Order';
  /* Field: Content: Class-Plantae */
  $handler->display->display_options['fields']['field_class']['id'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['table'] = 'field_data_field_class';
  $handler->display->display_options['fields']['field_class']['field'] = 'field_class';
  $handler->display->display_options['fields']['field_class']['label'] = 'Class';
  /* Field: Content: Division-Plantae */
  $handler->display->display_options['fields']['field_phylum']['id'] = 'field_phylum';
  $handler->display->display_options['fields']['field_phylum']['table'] = 'field_data_field_phylum';
  $handler->display->display_options['fields']['field_phylum']['field'] = 'field_phylum';
  $handler->display->display_options['fields']['field_phylum']['label'] = 'Phylum';
  $handler->display->display_options['fields']['field_phylum']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phylum']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_phylum']['alter']['text'] = 'Magnoliophyta';
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
    'flora' => 'flora',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'plantae-list';

  /* Display: Facets block */
  $handler = $view->new_display('search_api_views_facets_block', 'Facets block', 'search_api_views_facets_block_1');
  $handler->display->display_options['pager']['type'] = 'some';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['plantae_list'] = $view;

  return $export;
}
