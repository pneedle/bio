<?php
/**
 * @file
 * bio_fungi.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function bio_fungi_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'clone_of_taxonomy';
  $mini->category = '';
  $mini->admin_title = 'Fungi Taxonomy';
  $mini->admin_description = 'Fungi Taxonomy mini-panel';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Node',
      'keyword' => 'node',
      'name' => 'entity:node',
      'entity_id' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Fungi Classification';
  $display->uuid = '56944f72-be07-430d-9e9d-463dfdd41b89';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'clone_of_taxonomy';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a2163bf1-7f05-45da-8d05-cefeed4a8682';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_kingdom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a2163bf1-7f05-45da-8d05-cefeed4a8682';
  $display->content['new-a2163bf1-7f05-45da-8d05-cefeed4a8682'] = $pane;
  $display->panels['center'][0] = 'new-a2163bf1-7f05-45da-8d05-cefeed4a8682';
  $pane = new stdClass();
  $pane->pid = 'new-e1ce342f-aaca-43d5-b68c-5cf583b2bd40';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_subkingdom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e1ce342f-aaca-43d5-b68c-5cf583b2bd40';
  $display->content['new-e1ce342f-aaca-43d5-b68c-5cf583b2bd40'] = $pane;
  $display->panels['center'][1] = 'new-e1ce342f-aaca-43d5-b68c-5cf583b2bd40';
  $pane = new stdClass();
  $pane->pid = 'new-0a6540c6-eac5-4d41-a939-6b95c1ef2793';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_superdivision';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '0a6540c6-eac5-4d41-a939-6b95c1ef2793';
  $display->content['new-0a6540c6-eac5-4d41-a939-6b95c1ef2793'] = $pane;
  $display->panels['center'][2] = 'new-0a6540c6-eac5-4d41-a939-6b95c1ef2793';
  $pane = new stdClass();
  $pane->pid = 'new-002238b6-08de-498f-b966-4ddf5289a3b5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_division_fungi';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Phylum',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '002238b6-08de-498f-b966-4ddf5289a3b5';
  $display->content['new-002238b6-08de-498f-b966-4ddf5289a3b5'] = $pane;
  $display->panels['center'][3] = 'new-002238b6-08de-498f-b966-4ddf5289a3b5';
  $pane = new stdClass();
  $pane->pid = 'new-ab5a9ddb-09ac-46c4-8294-2aba3c9509e3';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_class_fungi';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Class',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ab5a9ddb-09ac-46c4-8294-2aba3c9509e3';
  $display->content['new-ab5a9ddb-09ac-46c4-8294-2aba3c9509e3'] = $pane;
  $display->panels['center'][4] = 'new-ab5a9ddb-09ac-46c4-8294-2aba3c9509e3';
  $pane = new stdClass();
  $pane->pid = 'new-c84a059b-f720-4223-96d1-abed3d7e6511';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_order_fungi';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Order',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'c84a059b-f720-4223-96d1-abed3d7e6511';
  $display->content['new-c84a059b-f720-4223-96d1-abed3d7e6511'] = $pane;
  $display->panels['center'][5] = 'new-c84a059b-f720-4223-96d1-abed3d7e6511';
  $pane = new stdClass();
  $pane->pid = 'new-32285258-c4d2-4145-a7a7-56f2598921c4';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_family_fungi';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Family',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '32285258-c4d2-4145-a7a7-56f2598921c4';
  $display->content['new-32285258-c4d2-4145-a7a7-56f2598921c4'] = $pane;
  $display->panels['center'][6] = 'new-32285258-c4d2-4145-a7a7-56f2598921c4';
  $pane = new stdClass();
  $pane->pid = 'new-0b6ffca3-4ae4-4fe7-b800-1fdf92925568';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_genus_fungi';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'Genus',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '0b6ffca3-4ae4-4fe7-b800-1fdf92925568';
  $display->content['new-0b6ffca3-4ae4-4fe7-b800-1fdf92925568'] = $pane;
  $display->panels['center'][7] = 'new-0b6ffca3-4ae4-4fe7-b800-1fdf92925568';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a2163bf1-7f05-45da-8d05-cefeed4a8682';
  $mini->display = $display;
  $export['clone_of_taxonomy'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'fungi_list_kpcofgs';
  $mini->category = '';
  $mini->admin_title = 'Fungi-List KPCOFGS';
  $mini->admin_description = 'Fungi-List KPCOFGS';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '090dfc7e-7443-4621-bd1d-b6e77bacc4d5';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'fungi_list_kpcofgs';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ff822e87-aaf8-4f29-b8e4-2923a80611f1';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-DD0uLkmcHVftbSIpRaX6oKKjwCCd75z2';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Kingdom',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ff822e87-aaf8-4f29-b8e4-2923a80611f1';
  $display->content['new-ff822e87-aaf8-4f29-b8e4-2923a80611f1'] = $pane;
  $display->panels['middle'][0] = 'new-ff822e87-aaf8-4f29-b8e4-2923a80611f1';
  $pane = new stdClass();
  $pane->pid = 'new-f4b21da9-c406-4277-87e3-b3b1669d7dc8';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-UivBY3lTzMY5krWuHtMEd3j4HNjj3stJ';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Subkingdom',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f4b21da9-c406-4277-87e3-b3b1669d7dc8';
  $display->content['new-f4b21da9-c406-4277-87e3-b3b1669d7dc8'] = $pane;
  $display->panels['middle'][1] = 'new-f4b21da9-c406-4277-87e3-b3b1669d7dc8';
  $pane = new stdClass();
  $pane->pid = 'new-c8fe6f42-e0b9-4440-a954-63c7276277e0';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-6M0Y1o1Int1PkzXP8M1dVHwcnx3yx8rb';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Superphylum',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c8fe6f42-e0b9-4440-a954-63c7276277e0';
  $display->content['new-c8fe6f42-e0b9-4440-a954-63c7276277e0'] = $pane;
  $display->panels['middle'][2] = 'new-c8fe6f42-e0b9-4440-a954-63c7276277e0';
  $pane = new stdClass();
  $pane->pid = 'new-1e7fdb65-42c8-4a7d-8c68-5ae1d2cdaafc';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-oVV0DwYLnMbkfSZDTAwCJsRCneK3uEFI';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Phylum',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1e7fdb65-42c8-4a7d-8c68-5ae1d2cdaafc';
  $display->content['new-1e7fdb65-42c8-4a7d-8c68-5ae1d2cdaafc'] = $pane;
  $display->panels['middle'][3] = 'new-1e7fdb65-42c8-4a7d-8c68-5ae1d2cdaafc';
  $pane = new stdClass();
  $pane->pid = 'new-31613133-4d5d-4a6e-a3f1-9159476d6983';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-1iBOI9jJdi2Si7w5pmK0oo2tbQ21QI9b';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Class',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '31613133-4d5d-4a6e-a3f1-9159476d6983';
  $display->content['new-31613133-4d5d-4a6e-a3f1-9159476d6983'] = $pane;
  $display->panels['middle'][4] = 'new-31613133-4d5d-4a6e-a3f1-9159476d6983';
  $pane = new stdClass();
  $pane->pid = 'new-3574178c-969c-4199-8de6-9d207234e6f4';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-po5VI1ZnCNWRdpOvkFyXL9oe20N6x76y';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Order',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '3574178c-969c-4199-8de6-9d207234e6f4';
  $display->content['new-3574178c-969c-4199-8de6-9d207234e6f4'] = $pane;
  $display->panels['middle'][5] = 'new-3574178c-969c-4199-8de6-9d207234e6f4';
  $pane = new stdClass();
  $pane->pid = 'new-bdd53f04-ad8e-483e-b246-3711fd3e1d3f';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-JVQfrbqO2WN4I13HnMqplpGCdajjdfys';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Family',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'bdd53f04-ad8e-483e-b246-3711fd3e1d3f';
  $display->content['new-bdd53f04-ad8e-483e-b246-3711fd3e1d3f'] = $pane;
  $display->panels['middle'][6] = 'new-bdd53f04-ad8e-483e-b246-3711fd3e1d3f';
  $pane = new stdClass();
  $pane->pid = 'new-86cc716d-9a91-46ab-9b35-b3b6a6c88d86';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-fXHh1okysfZ2ZJVssKAfh71SVUqP3jER';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Genus',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '86cc716d-9a91-46ab-9b35-b3b6a6c88d86';
  $display->content['new-86cc716d-9a91-46ab-9b35-b3b6a6c88d86'] = $pane;
  $display->panels['middle'][7] = 'new-86cc716d-9a91-46ab-9b35-b3b6a6c88d86';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-ff822e87-aaf8-4f29-b8e4-2923a80611f1';
  $mini->display = $display;
  $export['fungi_list_kpcofgs'] = $mini;

  return $export;
}
