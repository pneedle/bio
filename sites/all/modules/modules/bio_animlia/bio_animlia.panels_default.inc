<?php
/**
 * @file
 * bio_animlia.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function bio_animlia_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'animal_list_kpcofgs';
  $mini->category = '';
  $mini->admin_title = 'Animal-List KPCOFGS';
  $mini->admin_description = 'Animal-List KPCOFGS';
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
  $display->uuid = 'c4dcc2bc-153f-4fbd-a347-737fc2da4f4f';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'animal_list_kpcofgs';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2b61f908-29a2-430e-829c-ecffe33b5a4b';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-wn5gjyw6BYYmbmnOG9s0EwnepK2EPaHc';
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
  $pane->uuid = '2b61f908-29a2-430e-829c-ecffe33b5a4b';
  $display->content['new-2b61f908-29a2-430e-829c-ecffe33b5a4b'] = $pane;
  $display->panels['middle'][0] = 'new-2b61f908-29a2-430e-829c-ecffe33b5a4b';
  $pane = new stdClass();
  $pane->pid = 'new-42e1e218-9217-4a70-b0e6-109cbc965683';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-R0fJlhW4Jg1ZTHq1nyF01w8mFAgV537P';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '42e1e218-9217-4a70-b0e6-109cbc965683';
  $display->content['new-42e1e218-9217-4a70-b0e6-109cbc965683'] = $pane;
  $display->panels['middle'][1] = 'new-42e1e218-9217-4a70-b0e6-109cbc965683';
  $pane = new stdClass();
  $pane->pid = 'new-61c9e6ae-0bb3-4c3a-adfe-aa682e82c80c';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-9gE9PNT4XhT1u46OssdY0T448yZIrLy1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Subphylum',
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
  $pane->uuid = '61c9e6ae-0bb3-4c3a-adfe-aa682e82c80c';
  $display->content['new-61c9e6ae-0bb3-4c3a-adfe-aa682e82c80c'] = $pane;
  $display->panels['middle'][2] = 'new-61c9e6ae-0bb3-4c3a-adfe-aa682e82c80c';
  $pane = new stdClass();
  $pane->pid = 'new-63165a65-50b0-4059-b664-bec63bb7a5dc';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-jFhl2B0vB1hxBRe3N4JBTpteqwXQ4Mtl';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '63165a65-50b0-4059-b664-bec63bb7a5dc';
  $display->content['new-63165a65-50b0-4059-b664-bec63bb7a5dc'] = $pane;
  $display->panels['middle'][3] = 'new-63165a65-50b0-4059-b664-bec63bb7a5dc';
  $pane = new stdClass();
  $pane->pid = 'new-c8212341-3731-4064-9e41-b4eca72d6c0a';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-b084HW1IJBfQ1ZgNuT4xwMTBTIG92q2h';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c8212341-3731-4064-9e41-b4eca72d6c0a';
  $display->content['new-c8212341-3731-4064-9e41-b4eca72d6c0a'] = $pane;
  $display->panels['middle'][4] = 'new-c8212341-3731-4064-9e41-b4eca72d6c0a';
  $pane = new stdClass();
  $pane->pid = 'new-31393a47-4ee2-4f71-be33-885447a2905d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-019FF7XcNZjA5yf2lSJbb8IB0xq5Vwm1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Suborder',
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
  $pane->uuid = '31393a47-4ee2-4f71-be33-885447a2905d';
  $display->content['new-31393a47-4ee2-4f71-be33-885447a2905d'] = $pane;
  $display->panels['middle'][5] = 'new-31393a47-4ee2-4f71-be33-885447a2905d';
  $pane = new stdClass();
  $pane->pid = 'new-1c51aab9-6f53-4bf2-9e59-6668a4d58411';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-DlXsUPnBf5XBE7gzIjviFYIN4sxt1Ut9';
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
  $pane->uuid = '1c51aab9-6f53-4bf2-9e59-6668a4d58411';
  $display->content['new-1c51aab9-6f53-4bf2-9e59-6668a4d58411'] = $pane;
  $display->panels['middle'][6] = 'new-1c51aab9-6f53-4bf2-9e59-6668a4d58411';
  $pane = new stdClass();
  $pane->pid = 'new-0643b2ef-6589-4faa-8e15-353fc6c4f745';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-9i1o0UbyNIvdoj0tke1EnpZQgqKLR87c';
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
  $pane->uuid = '0643b2ef-6589-4faa-8e15-353fc6c4f745';
  $display->content['new-0643b2ef-6589-4faa-8e15-353fc6c4f745'] = $pane;
  $display->panels['middle'][7] = 'new-0643b2ef-6589-4faa-8e15-353fc6c4f745';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2b61f908-29a2-430e-829c-ecffe33b5a4b';
  $mini->display = $display;
  $export['animal_list_kpcofgs'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'animalia_taxonomy';
  $mini->category = '';
  $mini->admin_title = 'Animalia Taxonomy';
  $mini->admin_description = 'Animalia Taxonomy mini-panel';
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
  $display->title = 'Animalia Classification';
  $display->uuid = '56944f72-be07-430d-9e9d-463dfdd41b89';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'animalia_taxonomy';
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
  $pane->uuid = 'a2163bf1-7f05-45da-8d05-cefeed4a8682';
  $display->content['new-a2163bf1-7f05-45da-8d05-cefeed4a8682'] = $pane;
  $display->panels['center'][0] = 'new-a2163bf1-7f05-45da-8d05-cefeed4a8682';
  $pane = new stdClass();
  $pane->pid = 'new-174d486f-4f37-4c09-b644-abdd19ce4d82';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_division_animalia';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '174d486f-4f37-4c09-b644-abdd19ce4d82';
  $display->content['new-174d486f-4f37-4c09-b644-abdd19ce4d82'] = $pane;
  $display->panels['center'][1] = 'new-174d486f-4f37-4c09-b644-abdd19ce4d82';
  $pane = new stdClass();
  $pane->pid = 'new-d86c601f-a2d1-4c56-b158-f6ba4faeb749';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_subphylum_animalia';
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
    'override_title_text' => 'Subphylum',
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
  $pane->uuid = 'd86c601f-a2d1-4c56-b158-f6ba4faeb749';
  $display->content['new-d86c601f-a2d1-4c56-b158-f6ba4faeb749'] = $pane;
  $display->panels['center'][2] = 'new-d86c601f-a2d1-4c56-b158-f6ba4faeb749';
  $pane = new stdClass();
  $pane->pid = 'new-d5c93339-7a08-4d2d-8ebb-2124cf375a01';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_class_animalia';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'd5c93339-7a08-4d2d-8ebb-2124cf375a01';
  $display->content['new-d5c93339-7a08-4d2d-8ebb-2124cf375a01'] = $pane;
  $display->panels['center'][3] = 'new-d5c93339-7a08-4d2d-8ebb-2124cf375a01';
  $pane = new stdClass();
  $pane->pid = 'new-15345bcf-6c6f-44a8-b364-4c69cfac456a';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_order_animalia';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '15345bcf-6c6f-44a8-b364-4c69cfac456a';
  $display->content['new-15345bcf-6c6f-44a8-b364-4c69cfac456a'] = $pane;
  $display->panels['center'][4] = 'new-15345bcf-6c6f-44a8-b364-4c69cfac456a';
  $pane = new stdClass();
  $pane->pid = 'new-c952b3fc-665e-4e66-a601-9db6aae8bbc7';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_suborder_animalia';
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
    'override_title_text' => 'Suborder',
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
  $pane->uuid = 'c952b3fc-665e-4e66-a601-9db6aae8bbc7';
  $display->content['new-c952b3fc-665e-4e66-a601-9db6aae8bbc7'] = $pane;
  $display->panels['center'][5] = 'new-c952b3fc-665e-4e66-a601-9db6aae8bbc7';
  $pane = new stdClass();
  $pane->pid = 'new-7b613473-43dc-42e9-b705-758db8a1fb50';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_family_animalia';
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
  $pane->uuid = '7b613473-43dc-42e9-b705-758db8a1fb50';
  $display->content['new-7b613473-43dc-42e9-b705-758db8a1fb50'] = $pane;
  $display->panels['center'][6] = 'new-7b613473-43dc-42e9-b705-758db8a1fb50';
  $pane = new stdClass();
  $pane->pid = 'new-43e6df86-b051-42ea-9027-cb8017a0d639';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_genus_animalia';
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
  $pane->uuid = '43e6df86-b051-42ea-9027-cb8017a0d639';
  $display->content['new-43e6df86-b051-42ea-9027-cb8017a0d639'] = $pane;
  $display->panels['center'][7] = 'new-43e6df86-b051-42ea-9027-cb8017a0d639';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a2163bf1-7f05-45da-8d05-cefeed4a8682';
  $mini->display = $display;
  $export['animalia_taxonomy'] = $mini;

  return $export;
}
