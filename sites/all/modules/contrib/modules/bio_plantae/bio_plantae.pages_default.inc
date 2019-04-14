<?php
/**
 * @file
 * bio_plantae.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bio_plantae_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_81091265-a1e3-43e3-b647-fd590923b0dd';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Content-Type Plantae',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'flora' => 'flora',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right_sidebar',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 74.89135325545404,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right_sidebar' => array(
        'type' => 'region',
        'title' => 'Right-Sidebar',
        'width' => '25.108646744545965',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_side',
          1 => 'bottom',
        ),
        'parent' => 'main',
        'class' => 'Bottom-Region',
        'hide_empty' => 0,
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'Right-Side',
        'width' => '66.32706374085684',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left_side' => array(
        'type' => 'region',
        'title' => 'Left-Side',
        'width' => '33.672936259143164',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center_',
          2 => 'right',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '57.30695473931189',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '21.371724628137038',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '21.321320632551068',
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'sidebar_first' => NULL,
      'footer' => NULL,
      'center' => NULL,
      'left_sidebar' => NULL,
      'right_sidebar' => NULL,
      'bottom' => NULL,
      'left_side' => NULL,
      'left' => NULL,
      'center_' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f14b3341-fb5a-41dc-b7cd-ecc4096b2c5c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__panel_context_81091265-a1e3-43e3-b647-fd590923b0dd';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-79d6949a-fff9-4b49-9470-b9f67a3f5a23';
  $pane->panel = 'bottom';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_plant_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '79d6949a-fff9-4b49-9470-b9f67a3f5a23';
  $display->content['new-79d6949a-fff9-4b49-9470-b9f67a3f5a23'] = $pane;
  $display->panels['bottom'][0] = 'new-79d6949a-fff9-4b49-9470-b9f67a3f5a23';
  $pane = new stdClass();
  $pane->pid = 'new-6ece114b-0357-4492-87a8-22ba51e439d3';
  $pane->panel = 'bottom';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_species_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '6ece114b-0357-4492-87a8-22ba51e439d3';
  $display->content['new-6ece114b-0357-4492-87a8-22ba51e439d3'] = $pane;
  $display->panels['bottom'][1] = 'new-6ece114b-0357-4492-87a8-22ba51e439d3';
  $pane = new stdClass();
  $pane->pid = 'new-dbb032cd-748d-479f-acb3-c99545b87db1';
  $pane->panel = 'center';
  $pane->type = 'node_form_title';
  $pane->subtype = 'node_form_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = 'dbb032cd-748d-479f-acb3-c99545b87db1';
  $display->content['new-dbb032cd-748d-479f-acb3-c99545b87db1'] = $pane;
  $display->panels['center'][0] = 'new-dbb032cd-748d-479f-acb3-c99545b87db1';
  $pane = new stdClass();
  $pane->pid = 'new-6894fbb2-0db9-467d-9afd-10191ed6c374';
  $pane->panel = 'center';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_common_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '6894fbb2-0db9-467d-9afd-10191ed6c374';
  $display->content['new-6894fbb2-0db9-467d-9afd-10191ed6c374'] = $pane;
  $display->panels['center'][1] = 'new-6894fbb2-0db9-467d-9afd-10191ed6c374';
  $pane = new stdClass();
  $pane->pid = 'new-12fd82bd-fa88-4cb4-9e87-7457535e9972';
  $pane->panel = 'center';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_chinese_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '12fd82bd-fa88-4cb4-9e87-7457535e9972';
  $display->content['new-12fd82bd-fa88-4cb4-9e87-7457535e9972'] = $pane;
  $display->panels['center'][2] = 'new-12fd82bd-fa88-4cb4-9e87-7457535e9972';
  $pane = new stdClass();
  $pane->pid = 'new-dee7880c-a88e-4f85-a110-2c15fbd41186';
  $pane->panel = 'center';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_sanskrit_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'dee7880c-a88e-4f85-a110-2c15fbd41186';
  $display->content['new-dee7880c-a88e-4f85-a110-2c15fbd41186'] = $pane;
  $display->panels['center'][3] = 'new-dee7880c-a88e-4f85-a110-2c15fbd41186';
  $pane = new stdClass();
  $pane->pid = 'new-4080c419-d6c7-461b-8464-6d116a49aec8';
  $pane->panel = 'center';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '4080c419-d6c7-461b-8464-6d116a49aec8';
  $display->content['new-4080c419-d6c7-461b-8464-6d116a49aec8'] = $pane;
  $display->panels['center'][4] = 'new-4080c419-d6c7-461b-8464-6d116a49aec8';
  $pane = new stdClass();
  $pane->pid = 'new-8a9781a8-9a24-4c37-be11-5a5ce5a211e3';
  $pane->panel = 'center';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '8a9781a8-9a24-4c37-be11-5a5ce5a211e3';
  $display->content['new-8a9781a8-9a24-4c37-be11-5a5ce5a211e3'] = $pane;
  $display->panels['center'][5] = 'new-8a9781a8-9a24-4c37-be11-5a5ce5a211e3';
  $pane = new stdClass();
  $pane->pid = 'new-8cb33a72-5a6c-4e0e-b8da-db7092b380b0';
  $pane->panel = 'center_';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_margin_id';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => 'Leaf Margins',
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
  $pane->uuid = '8cb33a72-5a6c-4e0e-b8da-db7092b380b0';
  $display->content['new-8cb33a72-5a6c-4e0e-b8da-db7092b380b0'] = $pane;
  $display->panels['center_'][0] = 'new-8cb33a72-5a6c-4e0e-b8da-db7092b380b0';
  $pane = new stdClass();
  $pane->pid = 'new-63850eba-9ba2-4bfa-a676-bafb06e228d1';
  $pane->panel = 'center_';
  $pane->type = 'views_panes';
  $pane->subtype = 'leaf_margins-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '63850eba-9ba2-4bfa-a676-bafb06e228d1';
  $display->content['new-63850eba-9ba2-4bfa-a676-bafb06e228d1'] = $pane;
  $display->panels['center_'][1] = 'new-63850eba-9ba2-4bfa-a676-bafb06e228d1';
  $pane = new stdClass();
  $pane->pid = 'new-7bb3e946-ff64-4d51-b58f-a2deac977803';
  $pane->panel = 'left';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_shape_id';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '7bb3e946-ff64-4d51-b58f-a2deac977803';
  $display->content['new-7bb3e946-ff64-4d51-b58f-a2deac977803'] = $pane;
  $display->panels['left'][0] = 'new-7bb3e946-ff64-4d51-b58f-a2deac977803';
  $pane = new stdClass();
  $pane->pid = 'new-603e4c17-6d59-4945-a416-7d5ecb0bf324';
  $pane->panel = 'left';
  $pane->type = 'views_panes';
  $pane->subtype = 'leaf_shape-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '603e4c17-6d59-4945-a416-7d5ecb0bf324';
  $display->content['new-603e4c17-6d59-4945-a416-7d5ecb0bf324'] = $pane;
  $display->panels['left'][1] = 'new-603e4c17-6d59-4945-a416-7d5ecb0bf324';
  $pane = new stdClass();
  $pane->pid = 'new-fac7698c-0b7f-497e-92c6-9f33f5f610cd';
  $pane->panel = 'left_side';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_therapeutic';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = 'fac7698c-0b7f-497e-92c6-9f33f5f610cd';
  $display->content['new-fac7698c-0b7f-497e-92c6-9f33f5f610cd'] = $pane;
  $display->panels['left_side'][0] = 'new-fac7698c-0b7f-497e-92c6-9f33f5f610cd';
  $pane = new stdClass();
  $pane->pid = 'new-236ff770-aeb0-4a65-88ea-c64904f6b743';
  $pane->panel = 'left_side';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_needles';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '236ff770-aeb0-4a65-88ea-c64904f6b743';
  $display->content['new-236ff770-aeb0-4a65-88ea-c64904f6b743'] = $pane;
  $display->panels['left_side'][1] = 'new-236ff770-aeb0-4a65-88ea-c64904f6b743';
  $pane = new stdClass();
  $pane->pid = 'new-47b6d6c1-65ea-4789-9002-b42cf19bac76';
  $pane->panel = 'left_side';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_thorns';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => 'Thorns',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '47b6d6c1-65ea-4789-9002-b42cf19bac76';
  $display->content['new-47b6d6c1-65ea-4789-9002-b42cf19bac76'] = $pane;
  $display->panels['left_side'][2] = 'new-47b6d6c1-65ea-4789-9002-b42cf19bac76';
  $pane = new stdClass();
  $pane->pid = 'new-f40e548a-1563-44e1-8919-29d8ac9eb071';
  $pane->panel = 'right';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = 'f40e548a-1563-44e1-8919-29d8ac9eb071';
  $display->content['new-f40e548a-1563-44e1-8919-29d8ac9eb071'] = $pane;
  $display->panels['right'][0] = 'new-f40e548a-1563-44e1-8919-29d8ac9eb071';
  $pane = new stdClass();
  $pane->pid = 'new-844c2914-b457-4a27-a301-155193edb037';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'leaf_id-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '844c2914-b457-4a27-a301-155193edb037';
  $display->content['new-844c2914-b457-4a27-a301-155193edb037'] = $pane;
  $display->panels['right'][1] = 'new-844c2914-b457-4a27-a301-155193edb037';
  $pane = new stdClass();
  $pane->pid = 'new-42bc61f8-3b04-4169-9d63-9974c2baada2';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_kingdom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '42bc61f8-3b04-4169-9d63-9974c2baada2';
  $display->content['new-42bc61f8-3b04-4169-9d63-9974c2baada2'] = $pane;
  $display->panels['right_sidebar'][0] = 'new-42bc61f8-3b04-4169-9d63-9974c2baada2';
  $pane = new stdClass();
  $pane->pid = 'new-1ffe7b39-809c-41b1-bf22-b4c76a76c3e9';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_subkingdom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '1ffe7b39-809c-41b1-bf22-b4c76a76c3e9';
  $display->content['new-1ffe7b39-809c-41b1-bf22-b4c76a76c3e9'] = $pane;
  $display->panels['right_sidebar'][1] = 'new-1ffe7b39-809c-41b1-bf22-b4c76a76c3e9';
  $pane = new stdClass();
  $pane->pid = 'new-5dfbafc0-41d4-464f-841a-dbc27c7f70e1';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_superdivision';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = '5dfbafc0-41d4-464f-841a-dbc27c7f70e1';
  $display->content['new-5dfbafc0-41d4-464f-841a-dbc27c7f70e1'] = $pane;
  $display->panels['right_sidebar'][2] = 'new-5dfbafc0-41d4-464f-841a-dbc27c7f70e1';
  $pane = new stdClass();
  $pane->pid = 'new-025646f4-2498-4f2e-911d-68637d952f3b';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_phylum';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '025646f4-2498-4f2e-911d-68637d952f3b';
  $display->content['new-025646f4-2498-4f2e-911d-68637d952f3b'] = $pane;
  $display->panels['right_sidebar'][3] = 'new-025646f4-2498-4f2e-911d-68637d952f3b';
  $pane = new stdClass();
  $pane->pid = 'new-0eb02d5c-f277-47fd-809c-7cd51706d168';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_class';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '0eb02d5c-f277-47fd-809c-7cd51706d168';
  $display->content['new-0eb02d5c-f277-47fd-809c-7cd51706d168'] = $pane;
  $display->panels['right_sidebar'][4] = 'new-0eb02d5c-f277-47fd-809c-7cd51706d168';
  $pane = new stdClass();
  $pane->pid = 'new-cd2f9c5b-1f6c-44fc-907e-63c73cb8ccbb';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_subclass';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'cd2f9c5b-1f6c-44fc-907e-63c73cb8ccbb';
  $display->content['new-cd2f9c5b-1f6c-44fc-907e-63c73cb8ccbb'] = $pane;
  $display->panels['right_sidebar'][5] = 'new-cd2f9c5b-1f6c-44fc-907e-63c73cb8ccbb';
  $pane = new stdClass();
  $pane->pid = 'new-4414cebb-f96d-4c31-8a35-fe1bff983701';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_order';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '4414cebb-f96d-4c31-8a35-fe1bff983701';
  $display->content['new-4414cebb-f96d-4c31-8a35-fe1bff983701'] = $pane;
  $display->panels['right_sidebar'][6] = 'new-4414cebb-f96d-4c31-8a35-fe1bff983701';
  $pane = new stdClass();
  $pane->pid = 'new-4b6185d3-d90a-4dea-b6d7-f8e8a5ba70da';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_family';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '4b6185d3-d90a-4dea-b6d7-f8e8a5ba70da';
  $display->content['new-4b6185d3-d90a-4dea-b6d7-f8e8a5ba70da'] = $pane;
  $display->panels['right_sidebar'][7] = 'new-4b6185d3-d90a-4dea-b6d7-f8e8a5ba70da';
  $pane = new stdClass();
  $pane->pid = 'new-b750b5e9-86a8-4167-9d81-9e32a2cf9428';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_genus';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'b750b5e9-86a8-4167-9d81-9e32a2cf9428';
  $display->content['new-b750b5e9-86a8-4167-9d81-9e32a2cf9428'] = $pane;
  $display->panels['right_sidebar'][8] = 'new-b750b5e9-86a8-4167-9d81-9e32a2cf9428';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4080c419-d6c7-461b-8464-6d116a49aec8';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_81091265-a1e3-43e3-b647-fd590923b0dd'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__flora_layout';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -5;
  $handler->conf = array(
    'title' => 'Plantae Layout',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'plantae-layout',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'flora_layout',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'flora' => 'flora',
            ),
          ),
          'context' => 'node',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 6,
          1 => 1,
          2 => 5,
          3 => 7,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'Top',
        'hide_empty' => 0,
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_left',
          1 => 'content_right',
          2 => 'sidebar_right',
        ),
        'parent' => 'main',
        'class' => 'Footer',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => 'Footer',
        'hide_empty' => 0,
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar_left' => array(
        'type' => 'region',
        'title' => 'sidebar-left',
        'width' => '165',
        'width_type' => 'px',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'content_right' => array(
        'type' => 'region',
        'title' => 'content-right',
        'width' => '50.42045013268232',
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar_right' => array(
        'type' => 'region',
        'title' => 'sidebar-right',
        'width' => '49.57954986731768',
        'width_type' => '%',
        'parent' => '5',
        'class' => 'sidebar-right',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'center' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'left_sidebar' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'images' => NULL,
      'footer_' => NULL,
      'sidebar_left' => NULL,
      'content_right' => NULL,
      'sidebar_right' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
    ),
    'sidebar_second' => array(
      'style' => '-1',
    ),
    'style' => 'naked',
    'sidebar_left' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a3b5f31-a8d1-4e9e-b8e4-b202512b8f92';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__flora_layout';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-375e7bf1-2db5-403e-8a64-2a7e3cd6f132';
  $pane->panel = 'bottom';
  $pane->type = 'panels_mini';
  $pane->subtype = 'subdomains';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'footer',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '375e7bf1-2db5-403e-8a64-2a7e3cd6f132';
  $display->content['new-375e7bf1-2db5-403e-8a64-2a7e3cd6f132'] = $pane;
  $display->panels['bottom'][0] = 'new-375e7bf1-2db5-403e-8a64-2a7e3cd6f132';
  $pane = new stdClass();
  $pane->pid = 'new-21a7b588-9bd3-444e-b522-95e36a65946b';
  $pane->panel = 'left_above';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'markup' => 'none',
    'id' => '',
    'class' => '',
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => '%title',
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
  $pane->uuid = '21a7b588-9bd3-444e-b522-95e36a65946b';
  $display->content['new-21a7b588-9bd3-444e-b522-95e36a65946b'] = $pane;
  $display->panels['left_above'][0] = 'new-21a7b588-9bd3-444e-b522-95e36a65946b';
  $pane = new stdClass();
  $pane->pid = 'new-39fd4561-c473-49c3-bd9f-e52a920c071b';
  $pane->panel = 'left_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_common_name';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
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
  $pane->uuid = '39fd4561-c473-49c3-bd9f-e52a920c071b';
  $display->content['new-39fd4561-c473-49c3-bd9f-e52a920c071b'] = $pane;
  $display->panels['left_above'][1] = 'new-39fd4561-c473-49c3-bd9f-e52a920c071b';
  $pane = new stdClass();
  $pane->pid = 'new-fd005efd-b75c-4948-9b76-05ebbad1fd3e';
  $pane->panel = 'left_above';
  $pane->type = 'panels_mini';
  $pane->subtype = 'taxonomy';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'node',
    ),
    'override_title' => 1,
    'override_title_text' => 'Classification',
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
  $pane->uuid = 'fd005efd-b75c-4948-9b76-05ebbad1fd3e';
  $display->content['new-fd005efd-b75c-4948-9b76-05ebbad1fd3e'] = $pane;
  $display->panels['left_above'][2] = 'new-fd005efd-b75c-4948-9b76-05ebbad1fd3e';
  $pane = new stdClass();
  $pane->pid = 'new-847cf2b5-cf01-450b-aaa8-eb9e7da6588d';
  $pane->panel = 'left_above';
  $pane->type = 'panels_mini';
  $pane->subtype = 'therapeutic';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'node',
    ),
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '847cf2b5-cf01-450b-aaa8-eb9e7da6588d';
  $display->content['new-847cf2b5-cf01-450b-aaa8-eb9e7da6588d'] = $pane;
  $display->panels['left_above'][3] = 'new-847cf2b5-cf01-450b-aaa8-eb9e7da6588d';
  $pane = new stdClass();
  $pane->pid = 'new-961076b0-b972-4431-8d53-5fb6445acd93';
  $pane->panel = 'left_above';
  $pane->type = 'panels_mini';
  $pane->subtype = 'identifying_features';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'node',
    ),
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '961076b0-b972-4431-8d53-5fb6445acd93';
  $display->content['new-961076b0-b972-4431-8d53-5fb6445acd93'] = $pane;
  $display->panels['left_above'][4] = 'new-961076b0-b972-4431-8d53-5fb6445acd93';
  $pane = new stdClass();
  $pane->pid = 'new-e873f5ab-9d0b-49d7-a789-4e40a164acfc';
  $pane->panel = 'left_above';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Edit',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<?php
   $x = "%user:uid";
  if ($x == 1) {
      echo "<a href=\\"%node:edit-url\\">edit</a>";
  }
?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'e873f5ab-9d0b-49d7-a789-4e40a164acfc';
  $display->content['new-e873f5ab-9d0b-49d7-a789-4e40a164acfc'] = $pane;
  $display->panels['left_above'][5] = 'new-e873f5ab-9d0b-49d7-a789-4e40a164acfc';
  $pane = new stdClass();
  $pane->pid = 'new-967738f2-6484-4f41-8a45-2e827c268640';
  $pane->panel = 'left_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_plant_video';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'video_formatter_player',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'widthxheight' => '640x360',
      'poster_image_style' => '',
    ),
    'context' => 'node',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '967738f2-6484-4f41-8a45-2e827c268640';
  $display->content['new-967738f2-6484-4f41-8a45-2e827c268640'] = $pane;
  $display->panels['left_above'][6] = 'new-967738f2-6484-4f41-8a45-2e827c268640';
  $pane = new stdClass();
  $pane->pid = 'new-da3ee30f-e77f-4e47-86d1-8144660c9bad';
  $pane->panel = 'left_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_species_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => 'large',
      'image_link' => 'file',
    ),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'species_image',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'da3ee30f-e77f-4e47-86d1-8144660c9bad';
  $display->content['new-da3ee30f-e77f-4e47-86d1-8144660c9bad'] = $pane;
  $display->panels['left_above'][7] = 'new-da3ee30f-e77f-4e47-86d1-8144660c9bad';
  $pane = new stdClass();
  $pane->pid = 'new-17b73aa0-df45-4c6c-9168-9afb6db6dbde';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'wikipedia insert',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<?php
        $status = "%node:field-wiki-page";
	//echo "status: " . $status . "<br />";

	if ($status == "Wiki Page Exists") {
		$node_title = "%node:title";
		echo $node_title . "<br />";
		$node_title = preg_replace("/[\\s_]/", "_", $node_title);
		echo token_replace(\'[puzzler:wikipedia-matching-intro:%node:title]\');
		echo "<hr />";
		echo "Reference:<br /><a href=\\"http://en.wikipedia.org/wiki/" . $node_title . "\\">wikipedia</a><br />";
	}
?>',
    'format' => 'php_code',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'species-body wikipedia',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '17b73aa0-df45-4c6c-9168-9afb6db6dbde';
  $display->content['new-17b73aa0-df45-4c6c-9168-9afb6db6dbde'] = $pane;
  $display->panels['middle'][0] = 'new-17b73aa0-df45-4c6c-9168-9afb6db6dbde';
  $pane = new stdClass();
  $pane->pid = 'new-3126034f-0fbd-468c-becd-68ccaed92691';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'species-body',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3126034f-0fbd-468c-becd-68ccaed92691';
  $display->content['new-3126034f-0fbd-468c-becd-68ccaed92691'] = $pane;
  $display->panels['middle'][1] = 'new-3126034f-0fbd-468c-becd-68ccaed92691';
  $pane = new stdClass();
  $pane->pid = 'new-87eca0f5-3951-49d6-8207-2d86b76024c6';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_citations';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'citations',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '87eca0f5-3951-49d6-8207-2d86b76024c6';
  $display->content['new-87eca0f5-3951-49d6-8207-2d86b76024c6'] = $pane;
  $display->panels['middle'][2] = 'new-87eca0f5-3951-49d6-8207-2d86b76024c6';
  $pane = new stdClass();
  $pane->pid = 'new-dfb67cee-65bc-475e-a42b-8c4c4f98fcf0';
  $pane->panel = 'right_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_stamp_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => '',
      'image_link' => 'file',
    ),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'stamp-image',
    'css_class' => 'stamp',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'dfb67cee-65bc-475e-a42b-8c4c4f98fcf0';
  $display->content['new-dfb67cee-65bc-475e-a42b-8c4c4f98fcf0'] = $pane;
  $display->panels['right_above'][0] = 'new-dfb67cee-65bc-475e-a42b-8c4c4f98fcf0';
  $pane = new stdClass();
  $pane->pid = 'new-ffa9d249-41d0-40cd-9288-7880e387cceb';
  $pane->panel = 'right_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_issue_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'search_api_facetapi_DAY',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
    ),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'stamp',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ffa9d249-41d0-40cd-9288-7880e387cceb';
  $display->content['new-ffa9d249-41d0-40cd-9288-7880e387cceb'] = $pane;
  $display->panels['right_above'][1] = 'new-ffa9d249-41d0-40cd-9288-7880e387cceb';
  $pane = new stdClass();
  $pane->pid = 'new-9d8b5190-70bc-4ac1-9849-35ff5894781f';
  $pane->panel = 'right_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_stamp_country_issued';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'stamp',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9d8b5190-70bc-4ac1-9849-35ff5894781f';
  $display->content['new-9d8b5190-70bc-4ac1-9849-35ff5894781f'] = $pane;
  $display->panels['right_above'][2] = 'new-9d8b5190-70bc-4ac1-9849-35ff5894781f';
  $pane = new stdClass();
  $pane->pid = 'new-12fb398b-4107-489b-816d-5feabdea8a85';
  $pane->panel = 'right_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_stamp_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'stamp',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '12fb398b-4107-489b-816d-5feabdea8a85';
  $display->content['new-12fb398b-4107-489b-816d-5feabdea8a85'] = $pane;
  $display->panels['right_above'][3] = 'new-12fb398b-4107-489b-816d-5feabdea8a85';
  $pane = new stdClass();
  $pane->pid = 'new-d031a081-53a3-4432-869a-1ba00269d56b';
  $pane->panel = 'top';
  $pane->type = 'panels_mini';
  $pane->subtype = 'header';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = 'd031a081-53a3-4432-869a-1ba00269d56b';
  $display->content['new-d031a081-53a3-4432-869a-1ba00269d56b'] = $pane;
  $display->panels['top'][0] = 'new-d031a081-53a3-4432-869a-1ba00269d56b';
  $pane = new stdClass();
  $pane->pid = 'new-48da74d8-d757-4239-8632-218567ec3d5d';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'system-navigation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = '48da74d8-d757-4239-8632-218567ec3d5d';
  $display->content['new-48da74d8-d757-4239-8632-218567ec3d5d'] = $pane;
  $display->panels['top'][1] = 'new-48da74d8-d757-4239-8632-218567ec3d5d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__flora_layout'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__floralist_layout';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -1;
  $handler->conf = array(
    'title' => 'Plantae-List Layout',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'floralist_layout',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'plantae-list',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    ),
  );
  $display = new panels_display();
  $display->layout = 'sample_layout';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_first',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Content',
        'width' => '69.7320715206943',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'content',
        'hide_empty' => 0,
      ),
      'sidebar_first' => array(
        'type' => 'region',
        'title' => 'Sidebar First',
        'width' => '30.26792847930569',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'sidebar-first',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_and_navigation',
        ),
        'parent' => 'main',
        'class' => 'Top',
        'hide_empty' => 0,
      ),
      'header_and_navigation' => array(
        'type' => 'region',
        'title' => 'Header and Navigation',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => 'Bottom',
        'hide_empty' => 0,
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'footer',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'sidebar_first' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'center' => NULL,
      'header_and_navigation' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e48c8421-912d-403f-947a-4c5aa1f7135c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__floralist_layout';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9218d2bc-2fd4-4503-b6b1-411c7b1c65aa';
  $pane->panel = 'first';
  $pane->type = 'panels_mini';
  $pane->subtype = 'header';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = '9218d2bc-2fd4-4503-b6b1-411c7b1c65aa';
  $display->content['new-9218d2bc-2fd4-4503-b6b1-411c7b1c65aa'] = $pane;
  $display->panels['first'][0] = 'new-9218d2bc-2fd4-4503-b6b1-411c7b1c65aa';
  $pane = new stdClass();
  $pane->pid = 'new-7923e1d6-0f3d-4703-896b-dd2f54a0d256';
  $pane->panel = 'first';
  $pane->type = 'block';
  $pane->subtype = 'system-navigation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = '7923e1d6-0f3d-4703-896b-dd2f54a0d256';
  $display->content['new-7923e1d6-0f3d-4703-896b-dd2f54a0d256'] = $pane;
  $display->panels['first'][1] = 'new-7923e1d6-0f3d-4703-896b-dd2f54a0d256';
  $pane = new stdClass();
  $pane->pid = 'new-c91e2eeb-67c7-4f29-b9a4-2fcc0a58115e';
  $pane->panel = 'second';
  $pane->type = 'panels_mini';
  $pane->subtype = 'plant_list_kpcofgs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = 'c91e2eeb-67c7-4f29-b9a4-2fcc0a58115e';
  $display->content['new-c91e2eeb-67c7-4f29-b9a4-2fcc0a58115e'] = $pane;
  $display->panels['second'][0] = 'new-c91e2eeb-67c7-4f29-b9a4-2fcc0a58115e';
  $pane = new stdClass();
  $pane->pid = 'new-f75272cd-f5ce-456a-8d0b-6a8e8c855c7f';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'flora_sort-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f75272cd-f5ce-456a-8d0b-6a8e8c855c7f';
  $display->content['new-f75272cd-f5ce-456a-8d0b-6a8e8c855c7f'] = $pane;
  $display->panels['third'][0] = 'new-f75272cd-f5ce-456a-8d0b-6a8e8c855c7f';
  $pane = new stdClass();
  $pane->pid = 'new-ea908ec1-2bda-4cd5-af00-88e43bc176cc';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'flora_sort-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'ea908ec1-2bda-4cd5-af00-88e43bc176cc';
  $display->content['new-ea908ec1-2bda-4cd5-af00-88e43bc176cc'] = $pane;
  $display->panels['third'][1] = 'new-ea908ec1-2bda-4cd5-af00-88e43bc176cc';
  $pane = new stdClass();
  $pane->pid = 'new-9c80d54e-f2bf-4ce9-998a-b56a6efdfe5c';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'flora_sort-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9c80d54e-f2bf-4ce9-998a-b56a6efdfe5c';
  $display->content['new-9c80d54e-f2bf-4ce9-998a-b56a6efdfe5c'] = $pane;
  $display->panels['third'][2] = 'new-9c80d54e-f2bf-4ce9-998a-b56a6efdfe5c';
  $pane = new stdClass();
  $pane->pid = 'new-72fc85b6-3758-4e0f-a20d-952693bdfc8b';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'flora_sort-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '72fc85b6-3758-4e0f-a20d-952693bdfc8b';
  $display->content['new-72fc85b6-3758-4e0f-a20d-952693bdfc8b'] = $pane;
  $display->panels['third'][3] = 'new-72fc85b6-3758-4e0f-a20d-952693bdfc8b';
  $pane = new stdClass();
  $pane->pid = 'new-83998dc3-be25-4c7d-a60f-81f020c023e6';
  $pane->panel = 'third';
  $pane->type = 'panels_mini';
  $pane->subtype = 'subdomains';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'footer',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '83998dc3-be25-4c7d-a60f-81f020c023e6';
  $display->content['new-83998dc3-be25-4c7d-a60f-81f020c023e6'] = $pane;
  $display->panels['third'][4] = 'new-83998dc3-be25-4c7d-a60f-81f020c023e6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__floralist_layout'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__plant-id';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Plant ID',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'plantae-id',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'plant-id',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'plantae-id',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 6,
          1 => 1,
          2 => 5,
          3 => 7,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header',
        ),
        'parent' => 'main',
        'class' => 'Top',
        'hide_empty' => 0,
      ),
      'header' => array(
        'type' => 'region',
        'title' => 'Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar_left',
          1 => 'footer_',
        ),
        'parent' => 'main',
        'class' => 'Footer',
        'hide_empty' => 0,
      ),
      'footer_' => array(
        'type' => 'region',
        'title' => 'content',
        'width' => '100',
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'footer',
        ),
        'parent' => 'main',
        'class' => 'Footer',
        'hide_empty' => 0,
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar_left' => array(
        'type' => 'region',
        'title' => 'sidebar-left',
        'width' => '200',
        'width_type' => 'px',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'navigation' => NULL,
      'highlighted' => NULL,
      'help' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'sidebar_first' => NULL,
      'sidebar_second' => NULL,
      'center' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'left_sidebar' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'images' => NULL,
      'footer_' => NULL,
      'sidebar_left' => NULL,
    ),
    'sidebar_second' => array(
      'style' => '-1',
    ),
    'style' => 'naked',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a3b5f31-a8d1-4e9e-b8e4-b202512b8f92';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__plant-id';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-3126034f-0fbd-468c-becd-68ccaed92691';
  $pane->panel = 'footer';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 1,
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
  $pane->uuid = '3126034f-0fbd-468c-becd-68ccaed92691';
  $display->content['new-3126034f-0fbd-468c-becd-68ccaed92691'] = $pane;
  $display->panels['footer'][0] = 'new-3126034f-0fbd-468c-becd-68ccaed92691';
  $pane = new stdClass();
  $pane->pid = 'new-dc07250d-6c47-47af-8a94-6e577fdf42ca';
  $pane->panel = 'footer';
  $pane->type = 'panels_mini';
  $pane->subtype = 'subdomains';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'footer',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dc07250d-6c47-47af-8a94-6e577fdf42ca';
  $display->content['new-dc07250d-6c47-47af-8a94-6e577fdf42ca'] = $pane;
  $display->panels['footer'][1] = 'new-dc07250d-6c47-47af-8a94-6e577fdf42ca';
  $pane = new stdClass();
  $pane->pid = 'new-b33ab5c0-22c5-4d1a-8058-7f0d98791652';
  $pane->panel = 'footer_';
  $pane->type = 'views';
  $pane->subtype = 'identification_flora';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '25',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'page',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'flora-id-pane',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b33ab5c0-22c5-4d1a-8058-7f0d98791652';
  $display->content['new-b33ab5c0-22c5-4d1a-8058-7f0d98791652'] = $pane;
  $display->panels['footer_'][0] = 'new-b33ab5c0-22c5-4d1a-8058-7f0d98791652';
  $pane = new stdClass();
  $pane->pid = 'new-43748a0e-9ba6-44be-93c4-84ef1b190885';
  $pane->panel = 'header';
  $pane->type = 'panels_mini';
  $pane->subtype = 'header';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = '43748a0e-9ba6-44be-93c4-84ef1b190885';
  $display->content['new-43748a0e-9ba6-44be-93c4-84ef1b190885'] = $pane;
  $display->panels['header'][0] = 'new-43748a0e-9ba6-44be-93c4-84ef1b190885';
  $pane = new stdClass();
  $pane->pid = 'new-48da74d8-d757-4239-8632-218567ec3d5d';
  $pane->panel = 'header';
  $pane->type = 'block';
  $pane->subtype = 'system-navigation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
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
  $pane->uuid = '48da74d8-d757-4239-8632-218567ec3d5d';
  $display->content['new-48da74d8-d757-4239-8632-218567ec3d5d'] = $pane;
  $display->panels['header'][1] = 'new-48da74d8-d757-4239-8632-218567ec3d5d';
  $pane = new stdClass();
  $pane->pid = 'new-e1d9c1b8-a7ba-49a7-8188-f8eb798199f2';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-ghRQMcekzFRh5zgPER5baeIKVTS6jNrP';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Leaf Margin',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'plant-id',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e1d9c1b8-a7ba-49a7-8188-f8eb798199f2';
  $display->content['new-e1d9c1b8-a7ba-49a7-8188-f8eb798199f2'] = $pane;
  $display->panels['sidebar_left'][0] = 'new-e1d9c1b8-a7ba-49a7-8188-f8eb798199f2';
  $pane = new stdClass();
  $pane->pid = 'new-6e34bebb-4ad0-49b1-8f63-deebbcf37d51';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-ktRhjy800WZARkRnoq5nMAUPIdaHcEIK';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Leaf Shape',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'plant-id',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6e34bebb-4ad0-49b1-8f63-deebbcf37d51';
  $display->content['new-6e34bebb-4ad0-49b1-8f63-deebbcf37d51'] = $pane;
  $display->panels['sidebar_left'][1] = 'new-6e34bebb-4ad0-49b1-8f63-deebbcf37d51';
  $pane = new stdClass();
  $pane->pid = 'new-bdda6449-ec2a-4c60-9da3-ec56d2d8e406';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-2tCA85Zsyu0tuPUZ3eYKX3D4pF2aziLO';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Vein Structure',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'plant-id',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bdda6449-ec2a-4c60-9da3-ec56d2d8e406';
  $display->content['new-bdda6449-ec2a-4c60-9da3-ec56d2d8e406'] = $pane;
  $display->panels['sidebar_left'][2] = 'new-bdda6449-ec2a-4c60-9da3-ec56d2d8e406';
  $pane = new stdClass();
  $pane->pid = 'new-117fa76b-9117-4231-a837-299606848376';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-VkdPTxdTy2APGYewX0lCJqtfxjyIZv0l';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Needles',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'plant-id',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '117fa76b-9117-4231-a837-299606848376';
  $display->content['new-117fa76b-9117-4231-a837-299606848376'] = $pane;
  $display->panels['sidebar_left'][3] = 'new-117fa76b-9117-4231-a837-299606848376';
  $pane = new stdClass();
  $pane->pid = 'new-b08f8bda-b240-4c4c-9ddd-26bdc0d1c50a';
  $pane->panel = 'sidebar_left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-g41aO6iUikyyhLVuY4EA3eCOdxgHOwFS';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Thorns',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'plant-id',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b08f8bda-b240-4c4c-9ddd-26bdc0d1c50a';
  $display->content['new-b08f8bda-b240-4c4c-9ddd-26bdc0d1c50a'] = $pane;
  $display->panels['sidebar_left'][4] = 'new-b08f8bda-b240-4c4c-9ddd-26bdc0d1c50a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__plant-id'] = $handler;

  return $export;
}
