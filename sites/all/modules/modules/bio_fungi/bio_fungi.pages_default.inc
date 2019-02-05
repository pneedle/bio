<?php
/**
 * @file
 * bio_fungi.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bio_fungi_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__content-type-fungi';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Content-Type Fungi',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'content-type-fungi',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'fungi' => 'fungi',
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
  $display->storage_id = 'node_edit__content-type-fungi';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-5dea4f3a-6747-4b72-af7f-466320389849';
  $pane->panel = 'bottom';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_image_species_fungal';
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
  $pane->uuid = '5dea4f3a-6747-4b72-af7f-466320389849';
  $display->content['new-5dea4f3a-6747-4b72-af7f-466320389849'] = $pane;
  $display->panels['bottom'][0] = 'new-5dea4f3a-6747-4b72-af7f-466320389849';
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
  $pane->pid = 'new-c27fd6f3-0911-4c52-ae5e-90cf8620ca85';
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
  $pane->uuid = 'c27fd6f3-0911-4c52-ae5e-90cf8620ca85';
  $display->content['new-c27fd6f3-0911-4c52-ae5e-90cf8620ca85'] = $pane;
  $display->panels['center'][4] = 'new-c27fd6f3-0911-4c52-ae5e-90cf8620ca85';
  $pane = new stdClass();
  $pane->pid = 'new-28fbe223-6b31-4b30-ac4e-0ea7af7acaaf';
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
  $pane->uuid = '28fbe223-6b31-4b30-ac4e-0ea7af7acaaf';
  $display->content['new-28fbe223-6b31-4b30-ac4e-0ea7af7acaaf'] = $pane;
  $display->panels['center'][5] = 'new-28fbe223-6b31-4b30-ac4e-0ea7af7acaaf';
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
  $pane->pid = 'new-a9b32789-dd77-412e-8338-fc25ed8f7157';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_division_fungi';
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
  $pane->uuid = 'a9b32789-dd77-412e-8338-fc25ed8f7157';
  $display->content['new-a9b32789-dd77-412e-8338-fc25ed8f7157'] = $pane;
  $display->panels['right_sidebar'][3] = 'new-a9b32789-dd77-412e-8338-fc25ed8f7157';
  $pane = new stdClass();
  $pane->pid = 'new-b409248d-470c-4070-852b-c7c59a54d368';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_class_fungi';
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
  $pane->uuid = 'b409248d-470c-4070-852b-c7c59a54d368';
  $display->content['new-b409248d-470c-4070-852b-c7c59a54d368'] = $pane;
  $display->panels['right_sidebar'][4] = 'new-b409248d-470c-4070-852b-c7c59a54d368';
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
  $pane->pid = 'new-e15979db-90e2-417f-8d24-9fca5361eaf7';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_order_fungi';
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
  $pane->uuid = 'e15979db-90e2-417f-8d24-9fca5361eaf7';
  $display->content['new-e15979db-90e2-417f-8d24-9fca5361eaf7'] = $pane;
  $display->panels['right_sidebar'][6] = 'new-e15979db-90e2-417f-8d24-9fca5361eaf7';
  $pane = new stdClass();
  $pane->pid = 'new-4c48d072-e174-418d-8e03-e4f9d1a1ab52';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_family_fungi';
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
  $pane->uuid = '4c48d072-e174-418d-8e03-e4f9d1a1ab52';
  $display->content['new-4c48d072-e174-418d-8e03-e4f9d1a1ab52'] = $pane;
  $display->panels['right_sidebar'][7] = 'new-4c48d072-e174-418d-8e03-e4f9d1a1ab52';
  $pane = new stdClass();
  $pane->pid = 'new-6fa9e28a-a5be-451b-904b-54ab853b4a5f';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_genus_fungi';
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
  $pane->uuid = '6fa9e28a-a5be-451b-904b-54ab853b4a5f';
  $display->content['new-6fa9e28a-a5be-451b-904b-54ab853b4a5f'] = $pane;
  $display->panels['right_sidebar'][8] = 'new-6fa9e28a-a5be-451b-904b-54ab853b4a5f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__content-type-fungi'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__fungi-layout';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -6;
  $handler->conf = array(
    'title' => 'Fungi Layout',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'fungi-layout',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'fungi-layout',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'fungi' => 'fungi',
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
          1 => 'footer_',
          2 => 'sidebar_right',
        ),
        'parent' => 'main',
        'class' => 'Footer',
        'hide_empty' => 0,
      ),
      'footer_' => array(
        'type' => 'region',
        'title' => 'content',
        'width' => '73.18012956310828',
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
        'title' => 'Content-body',
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
      'sidebar_right' => array(
        'type' => 'region',
        'title' => 'sidebar-right',
        'width' => '26.819870436891723',
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
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a3b5f31-a8d1-4e9e-b8e4-b202512b8f92';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__fungi-layout';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-03a7a67e-926a-435a-8035-f2e1de6f6609';
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
  $pane->uuid = '03a7a67e-926a-435a-8035-f2e1de6f6609';
  $display->content['new-03a7a67e-926a-435a-8035-f2e1de6f6609'] = $pane;
  $display->panels['bottom'][0] = 'new-03a7a67e-926a-435a-8035-f2e1de6f6609';
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
  $pane->pid = 'new-e4f9bf4e-6209-49f6-b2a3-98b5b455110a';
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
  $pane->uuid = 'e4f9bf4e-6209-49f6-b2a3-98b5b455110a';
  $display->content['new-e4f9bf4e-6209-49f6-b2a3-98b5b455110a'] = $pane;
  $display->panels['left_above'][1] = 'new-e4f9bf4e-6209-49f6-b2a3-98b5b455110a';
  $pane = new stdClass();
  $pane->pid = 'new-66c58343-18f7-45fb-bef2-7b4ac7c0784e';
  $pane->panel = 'left_above';
  $pane->type = 'panels_mini';
  $pane->subtype = 'clone_of_taxonomy';
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
  $pane->uuid = '66c58343-18f7-45fb-bef2-7b4ac7c0784e';
  $display->content['new-66c58343-18f7-45fb-bef2-7b4ac7c0784e'] = $pane;
  $display->panels['left_above'][2] = 'new-66c58343-18f7-45fb-bef2-7b4ac7c0784e';
  $pane = new stdClass();
  $pane->pid = 'new-45239f77-121c-4411-851e-c1a4d94e52dc';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '45239f77-121c-4411-851e-c1a4d94e52dc';
  $display->content['new-45239f77-121c-4411-851e-c1a4d94e52dc'] = $pane;
  $display->panels['left_above'][3] = 'new-45239f77-121c-4411-851e-c1a4d94e52dc';
  $pane = new stdClass();
  $pane->pid = 'new-46fbcd71-bfbf-4039-9e9e-f7a6fe793740';
  $pane->panel = 'left_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_species_fungal';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '46fbcd71-bfbf-4039-9e9e-f7a6fe793740';
  $display->content['new-46fbcd71-bfbf-4039-9e9e-f7a6fe793740'] = $pane;
  $display->panels['left_above'][4] = 'new-46fbcd71-bfbf-4039-9e9e-f7a6fe793740';
  $pane = new stdClass();
  $pane->pid = 'new-16648dd9-5480-42a0-bd14-f93ebdc94e38';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Wikipedia Insert',
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
  $pane->uuid = '16648dd9-5480-42a0-bd14-f93ebdc94e38';
  $display->content['new-16648dd9-5480-42a0-bd14-f93ebdc94e38'] = $pane;
  $display->panels['middle'][0] = 'new-16648dd9-5480-42a0-bd14-f93ebdc94e38';
  $pane = new stdClass();
  $pane->pid = 'new-09b894a9-74f8-4cc0-b561-0df19487be62';
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
  $pane->uuid = '09b894a9-74f8-4cc0-b561-0df19487be62';
  $display->content['new-09b894a9-74f8-4cc0-b561-0df19487be62'] = $pane;
  $display->panels['middle'][1] = 'new-09b894a9-74f8-4cc0-b561-0df19487be62';
  $pane = new stdClass();
  $pane->pid = 'new-f728b2c4-4035-47cd-b1be-ca334004c879';
  $pane->panel = 'middle';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_citations';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'citations',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f728b2c4-4035-47cd-b1be-ca334004c879';
  $display->content['new-f728b2c4-4035-47cd-b1be-ca334004c879'] = $pane;
  $display->panels['middle'][2] = 'new-f728b2c4-4035-47cd-b1be-ca334004c879';
  $pane = new stdClass();
  $pane->pid = 'new-ebbb9b1b-8c1a-49a5-ac93-72b50bcf8ff0';
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
  $pane->uuid = 'ebbb9b1b-8c1a-49a5-ac93-72b50bcf8ff0';
  $display->content['new-ebbb9b1b-8c1a-49a5-ac93-72b50bcf8ff0'] = $pane;
  $display->panels['right_above'][0] = 'new-ebbb9b1b-8c1a-49a5-ac93-72b50bcf8ff0';
  $pane = new stdClass();
  $pane->pid = 'new-891154eb-ddcb-4e82-ba73-c22d0040fddf';
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
  $pane->uuid = '891154eb-ddcb-4e82-ba73-c22d0040fddf';
  $display->content['new-891154eb-ddcb-4e82-ba73-c22d0040fddf'] = $pane;
  $display->panels['right_above'][1] = 'new-891154eb-ddcb-4e82-ba73-c22d0040fddf';
  $pane = new stdClass();
  $pane->pid = 'new-89028b80-5c70-4c73-824c-71b68a68b47a';
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
  $pane->uuid = '89028b80-5c70-4c73-824c-71b68a68b47a';
  $display->content['new-89028b80-5c70-4c73-824c-71b68a68b47a'] = $pane;
  $display->panels['right_above'][2] = 'new-89028b80-5c70-4c73-824c-71b68a68b47a';
  $pane = new stdClass();
  $pane->pid = 'new-7dcc3beb-1297-49bf-b50f-b80ac3af88d9';
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
  $pane->uuid = '7dcc3beb-1297-49bf-b50f-b80ac3af88d9';
  $display->content['new-7dcc3beb-1297-49bf-b50f-b80ac3af88d9'] = $pane;
  $display->panels['right_above'][3] = 'new-7dcc3beb-1297-49bf-b50f-b80ac3af88d9';
  $pane = new stdClass();
  $pane->pid = 'new-65c29d60-430f-45f8-8455-c531568af563';
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
  $pane->uuid = '65c29d60-430f-45f8-8455-c531568af563';
  $display->content['new-65c29d60-430f-45f8-8455-c531568af563'] = $pane;
  $display->panels['top'][0] = 'new-65c29d60-430f-45f8-8455-c531568af563';
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
  $export['site_template__fungi-layout'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__fungi-list-layout';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Fungi-List Layout',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'fungi-list-layout',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'fungi-list
fungi-sort',
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
          0 => 'sidebar',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '74.37366706508237',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header___navigation',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'header___navigation' => array(
        'type' => 'region',
        'title' => 'Header & Navigation',
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
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer' => array(
        'type' => 'region',
        'title' => 'Footer',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => '25.626332934917624',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'sidebar-first',
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
      'center' => NULL,
      'header___navigation' => NULL,
      'sidebar' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e48c8421-912d-403f-947a-4c5aa1f7135c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__fungi-list-layout';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c2bfe1f3-0b6e-4316-ac65-9356b987655a';
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
  $pane->uuid = 'c2bfe1f3-0b6e-4316-ac65-9356b987655a';
  $display->content['new-c2bfe1f3-0b6e-4316-ac65-9356b987655a'] = $pane;
  $display->panels['first'][0] = 'new-c2bfe1f3-0b6e-4316-ac65-9356b987655a';
  $pane = new stdClass();
  $pane->pid = 'new-e5d39912-e314-44de-84ba-35455fb4ef3a';
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
  $pane->uuid = 'e5d39912-e314-44de-84ba-35455fb4ef3a';
  $display->content['new-e5d39912-e314-44de-84ba-35455fb4ef3a'] = $pane;
  $display->panels['first'][1] = 'new-e5d39912-e314-44de-84ba-35455fb4ef3a';
  $pane = new stdClass();
  $pane->pid = 'new-60115f15-4105-4f78-bec6-42a7a40a601d';
  $pane->panel = 'second';
  $pane->type = 'panels_mini';
  $pane->subtype = 'fungi_list_kpcofgs';
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
  $pane->uuid = '60115f15-4105-4f78-bec6-42a7a40a601d';
  $display->content['new-60115f15-4105-4f78-bec6-42a7a40a601d'] = $pane;
  $display->panels['second'][0] = 'new-60115f15-4105-4f78-bec6-42a7a40a601d';
  $pane = new stdClass();
  $pane->pid = 'new-f92bdb50-2d67-4a6d-bde5-3cade1db7d4d';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'fungi-panel_pane_3';
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
  $pane->uuid = 'f92bdb50-2d67-4a6d-bde5-3cade1db7d4d';
  $display->content['new-f92bdb50-2d67-4a6d-bde5-3cade1db7d4d'] = $pane;
  $display->panels['third'][0] = 'new-f92bdb50-2d67-4a6d-bde5-3cade1db7d4d';
  $pane = new stdClass();
  $pane->pid = 'new-6e140200-e7f7-4807-bde1-c44ee5496a11';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'fungi-panel_pane_2';
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
  $pane->uuid = '6e140200-e7f7-4807-bde1-c44ee5496a11';
  $display->content['new-6e140200-e7f7-4807-bde1-c44ee5496a11'] = $pane;
  $display->panels['third'][1] = 'new-6e140200-e7f7-4807-bde1-c44ee5496a11';
  $pane = new stdClass();
  $pane->pid = 'new-c7e885f2-7563-42bf-9d46-ddeaa68463c7';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'fungi-panel_pane_1';
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
  $pane->uuid = 'c7e885f2-7563-42bf-9d46-ddeaa68463c7';
  $display->content['new-c7e885f2-7563-42bf-9d46-ddeaa68463c7'] = $pane;
  $display->panels['third'][2] = 'new-c7e885f2-7563-42bf-9d46-ddeaa68463c7';
  $pane = new stdClass();
  $pane->pid = 'new-1bc3ad0b-7e26-4e10-b220-736e506ea0c6';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '1bc3ad0b-7e26-4e10-b220-736e506ea0c6';
  $display->content['new-1bc3ad0b-7e26-4e10-b220-736e506ea0c6'] = $pane;
  $display->panels['third'][3] = 'new-1bc3ad0b-7e26-4e10-b220-736e506ea0c6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__fungi-list-layout'] = $handler;

  return $export;
}
