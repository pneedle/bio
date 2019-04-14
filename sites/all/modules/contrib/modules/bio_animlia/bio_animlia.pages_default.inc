<?php
/**
 * @file
 * bio_animlia.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function bio_animlia_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__content-type-animalia';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Content-Type Animalia',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'species-edit',
    'css' => '#species-edit {
	#species-image {
		div.image-preview > img {
			max-height: 400px;
			max-width: 400px;
		}
	}
}',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'content-type-animalia',
    'access' => array(
      'plugins' => array(
        2 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'animalia' => 'animalia',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
        'class' => 'edit-image',
        'hide_empty' => 0,
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
          1 => 'bottom_right',
        ),
        'parent' => 'main',
        'class' => 'Bottom-Region',
        'hide_empty' => 0,
      ),
      'left_side' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 50.0,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'bottom_right' => array(
        'type' => 'region',
        'title' => 'bottom-right',
        'width' => 50.0,
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
      'bottom_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f14b3341-fb5a-41dc-b7cd-ecc4096b2c5c';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__content-type-animalia';
  $display->content = array();
  $display->panels = array();
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
  $pane->pid = 'new-55a443ce-6cec-4fed-ae21-616930a81a72';
  $pane->panel = 'center';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_therapeutic';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'and',
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => FALSE,
      ),
    ),
  );
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
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'therapeutic-animalia',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '55a443ce-6cec-4fed-ae21-616930a81a72';
  $display->content['new-55a443ce-6cec-4fed-ae21-616930a81a72'] = $pane;
  $display->panels['center'][5] = 'new-55a443ce-6cec-4fed-ae21-616930a81a72';
  $pane = new stdClass();
  $pane->pid = 'new-e8d637b8-7628-477e-b2ec-8362fcbfad5d';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'e8d637b8-7628-477e-b2ec-8362fcbfad5d';
  $display->content['new-e8d637b8-7628-477e-b2ec-8362fcbfad5d'] = $pane;
  $display->panels['center'][6] = 'new-e8d637b8-7628-477e-b2ec-8362fcbfad5d';
  $pane = new stdClass();
  $pane->pid = 'new-437a2098-1578-4fbf-b25e-fc8b9bda8617';
  $pane->panel = 'left_side';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_animalia_video';
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
  $pane->uuid = '437a2098-1578-4fbf-b25e-fc8b9bda8617';
  $display->content['new-437a2098-1578-4fbf-b25e-fc8b9bda8617'] = $pane;
  $display->panels['left_side'][0] = 'new-437a2098-1578-4fbf-b25e-fc8b9bda8617';
  $pane = new stdClass();
  $pane->pid = 'new-2d3ffcff-c8fe-4c57-8d02-bdeef8e249bf';
  $pane->panel = 'left_side';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_species_image_animalia';
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
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => 'species-img',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2d3ffcff-c8fe-4c57-8d02-bdeef8e249bf';
  $display->content['new-2d3ffcff-c8fe-4c57-8d02-bdeef8e249bf'] = $pane;
  $display->panels['left_side'][1] = 'new-2d3ffcff-c8fe-4c57-8d02-bdeef8e249bf';
  $pane = new stdClass();
  $pane->pid = 'new-fc0225e5-6381-4fa3-b07b-cbc1f8f21191';
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
  $pane->uuid = 'fc0225e5-6381-4fa3-b07b-cbc1f8f21191';
  $display->content['new-fc0225e5-6381-4fa3-b07b-cbc1f8f21191'] = $pane;
  $display->panels['right_sidebar'][0] = 'new-fc0225e5-6381-4fa3-b07b-cbc1f8f21191';
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
  $pane->pid = 'new-c97235f4-25d9-4131-9c88-60e41147b76f';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_division_animalia';
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
  $pane->uuid = 'c97235f4-25d9-4131-9c88-60e41147b76f';
  $display->content['new-c97235f4-25d9-4131-9c88-60e41147b76f'] = $pane;
  $display->panels['right_sidebar'][3] = 'new-c97235f4-25d9-4131-9c88-60e41147b76f';
  $pane = new stdClass();
  $pane->pid = 'new-2c643447-afc5-4ea5-8408-87a5e06ab144';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_subphylum_animalia';
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
  $pane->uuid = '2c643447-afc5-4ea5-8408-87a5e06ab144';
  $display->content['new-2c643447-afc5-4ea5-8408-87a5e06ab144'] = $pane;
  $display->panels['right_sidebar'][4] = 'new-2c643447-afc5-4ea5-8408-87a5e06ab144';
  $pane = new stdClass();
  $pane->pid = 'new-9a5ee653-dc29-4ab2-a5d7-94a174359544';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_class_animalia';
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
  $pane->uuid = '9a5ee653-dc29-4ab2-a5d7-94a174359544';
  $display->content['new-9a5ee653-dc29-4ab2-a5d7-94a174359544'] = $pane;
  $display->panels['right_sidebar'][5] = 'new-9a5ee653-dc29-4ab2-a5d7-94a174359544';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'cd2f9c5b-1f6c-44fc-907e-63c73cb8ccbb';
  $display->content['new-cd2f9c5b-1f6c-44fc-907e-63c73cb8ccbb'] = $pane;
  $display->panels['right_sidebar'][6] = 'new-cd2f9c5b-1f6c-44fc-907e-63c73cb8ccbb';
  $pane = new stdClass();
  $pane->pid = 'new-ec2aef39-7878-4402-9903-146d074b0d1b';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_order_animalia';
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
  $pane->uuid = 'ec2aef39-7878-4402-9903-146d074b0d1b';
  $display->content['new-ec2aef39-7878-4402-9903-146d074b0d1b'] = $pane;
  $display->panels['right_sidebar'][7] = 'new-ec2aef39-7878-4402-9903-146d074b0d1b';
  $pane = new stdClass();
  $pane->pid = 'new-fd1a7575-b685-4f42-b8b6-c80f39d26505';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_suborder_animalia';
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
  $pane->uuid = 'fd1a7575-b685-4f42-b8b6-c80f39d26505';
  $display->content['new-fd1a7575-b685-4f42-b8b6-c80f39d26505'] = $pane;
  $display->panels['right_sidebar'][8] = 'new-fd1a7575-b685-4f42-b8b6-c80f39d26505';
  $pane = new stdClass();
  $pane->pid = 'new-7532e4cc-df84-4f93-ba0f-37d565e45ddc';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_family_animalia';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '7532e4cc-df84-4f93-ba0f-37d565e45ddc';
  $display->content['new-7532e4cc-df84-4f93-ba0f-37d565e45ddc'] = $pane;
  $display->panels['right_sidebar'][9] = 'new-7532e4cc-df84-4f93-ba0f-37d565e45ddc';
  $pane = new stdClass();
  $pane->pid = 'new-b1eb1272-d3c4-4da3-a80c-25a6e33ee9f5';
  $pane->panel = 'right_sidebar';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_genus_animalia';
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'b1eb1272-d3c4-4da3-a80c-25a6e33ee9f5';
  $display->content['new-b1eb1272-d3c4-4da3-a80c-25a6e33ee9f5'] = $pane;
  $display->panels['right_sidebar'][10] = 'new-b1eb1272-d3c4-4da3-a80c-25a6e33ee9f5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4080c419-d6c7-461b-8464-6d116a49aec8';
  $handler->conf['display'] = $display;
  $export['node_edit__content-type-animalia'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__animalia-list-layout';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -4;
  $handler->conf = array(
    'title' => 'Animalia-List Layout',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'animalia-list-layout',
    'access' => array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'animalia-list',
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
        'width' => '79.81628525300539',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'header_and_navigation',
        ),
        'parent' => 'main',
        'class' => '',
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
        'width' => '20.183714746994603',
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
      'header_and_navigation' => NULL,
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
  $display->storage_id = 'site_template__animalia-list-layout';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-a0dd715a-20d3-47a9-a289-0d6087cf3465';
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
  $pane->uuid = 'a0dd715a-20d3-47a9-a289-0d6087cf3465';
  $display->content['new-a0dd715a-20d3-47a9-a289-0d6087cf3465'] = $pane;
  $display->panels['first'][0] = 'new-a0dd715a-20d3-47a9-a289-0d6087cf3465';
  $pane = new stdClass();
  $pane->pid = 'new-8fcae57d-b7ca-419c-8e97-0c7d92e6364e';
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
  $pane->uuid = '8fcae57d-b7ca-419c-8e97-0c7d92e6364e';
  $display->content['new-8fcae57d-b7ca-419c-8e97-0c7d92e6364e'] = $pane;
  $display->panels['first'][1] = 'new-8fcae57d-b7ca-419c-8e97-0c7d92e6364e';
  $pane = new stdClass();
  $pane->pid = 'new-bf1a9f01-c988-4772-bf60-4dcd109ad6f9';
  $pane->panel = 'second';
  $pane->type = 'panels_mini';
  $pane->subtype = 'animal_list_kpcofgs';
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
  $pane->uuid = 'bf1a9f01-c988-4772-bf60-4dcd109ad6f9';
  $display->content['new-bf1a9f01-c988-4772-bf60-4dcd109ad6f9'] = $pane;
  $display->panels['second'][0] = 'new-bf1a9f01-c988-4772-bf60-4dcd109ad6f9';
  $pane = new stdClass();
  $pane->pid = 'new-70041a90-a50c-4a54-8a81-5a64d0c213c0';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'animalia_list-panel_pane_1';
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
  $pane->uuid = '70041a90-a50c-4a54-8a81-5a64d0c213c0';
  $display->content['new-70041a90-a50c-4a54-8a81-5a64d0c213c0'] = $pane;
  $display->panels['third'][0] = 'new-70041a90-a50c-4a54-8a81-5a64d0c213c0';
  $pane = new stdClass();
  $pane->pid = 'new-14ae9fa3-4747-4828-83d1-3b61a32b8d26';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'animalia_list-panel_pane_2';
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
  $pane->uuid = '14ae9fa3-4747-4828-83d1-3b61a32b8d26';
  $display->content['new-14ae9fa3-4747-4828-83d1-3b61a32b8d26'] = $pane;
  $display->panels['third'][1] = 'new-14ae9fa3-4747-4828-83d1-3b61a32b8d26';
  $pane = new stdClass();
  $pane->pid = 'new-8f97fb20-bfab-455f-acab-f94bea88bd52';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'animalia_list-panel_pane_3';
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
  $pane->uuid = '8f97fb20-bfab-455f-acab-f94bea88bd52';
  $display->content['new-8f97fb20-bfab-455f-acab-f94bea88bd52'] = $pane;
  $display->panels['third'][2] = 'new-8f97fb20-bfab-455f-acab-f94bea88bd52';
  $pane = new stdClass();
  $pane->pid = 'new-d862bddb-11f5-4e2a-851a-7fff65c263b4';
  $pane->panel = 'third';
  $pane->type = 'views_panes';
  $pane->subtype = 'animalia_list-panel_pane_4';
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
  $pane->uuid = 'd862bddb-11f5-4e2a-851a-7fff65c263b4';
  $display->content['new-d862bddb-11f5-4e2a-851a-7fff65c263b4'] = $pane;
  $display->panels['third'][3] = 'new-d862bddb-11f5-4e2a-851a-7fff65c263b4';
  $pane = new stdClass();
  $pane->pid = 'new-37e8e473-a700-487e-979e-4d7c01c7a895';
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
  $pane->uuid = '37e8e473-a700-487e-979e-4d7c01c7a895';
  $display->content['new-37e8e473-a700-487e-979e-4d7c01c7a895'] = $pane;
  $display->panels['third'][4] = 'new-37e8e473-a700-487e-979e-4d7c01c7a895';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__animalia-list-layout'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__panel_context_b0ad5d7c-8089-42f0-8d66-f65122aeff59';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -8;
  $handler->conf = array(
    'title' => 'Animalia Layout',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'animalia-layout',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'animalia-layout',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'animalia' => 'animalia',
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
        'class' => '',
        'hide_empty' => 0,
      ),
      'footer_' => array(
        'type' => 'region',
        'title' => 'content-right',
        'width' => '49.809937530626044',
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
        'width' => '165',
        'width_type' => 'px',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar_right' => array(
        'type' => 'region',
        'title' => 'sidebar-right',
        'width' => '50.190062469373956',
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
    'right_above' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5a3b5f31-a8d1-4e9e-b8e4-b202512b8f92';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__panel_context_b0ad5d7c-8089-42f0-8d66-f65122aeff59';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-0ddc3db5-921d-45bd-ba94-e4c8031dbdc5';
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
  $pane->uuid = '0ddc3db5-921d-45bd-ba94-e4c8031dbdc5';
  $display->content['new-0ddc3db5-921d-45bd-ba94-e4c8031dbdc5'] = $pane;
  $display->panels['bottom'][0] = 'new-0ddc3db5-921d-45bd-ba94-e4c8031dbdc5';
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
  $pane->pid = 'new-33396031-f335-48ce-8aad-8fc056c83618';
  $pane->panel = 'left_above';
  $pane->type = 'panels_mini';
  $pane->subtype = 'animalia_taxonomy';
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
  $pane->uuid = '33396031-f335-48ce-8aad-8fc056c83618';
  $display->content['new-33396031-f335-48ce-8aad-8fc056c83618'] = $pane;
  $display->panels['left_above'][2] = 'new-33396031-f335-48ce-8aad-8fc056c83618';
  $pane = new stdClass();
  $pane->pid = 'new-cfc87831-4dd6-4a96-b013-0956d06832e5';
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
  $pane->uuid = 'cfc87831-4dd6-4a96-b013-0956d06832e5';
  $display->content['new-cfc87831-4dd6-4a96-b013-0956d06832e5'] = $pane;
  $display->panels['left_above'][3] = 'new-cfc87831-4dd6-4a96-b013-0956d06832e5';
  $pane = new stdClass();
  $pane->pid = 'new-d26e8433-3aa0-44e4-99e2-de0701fd2b2e';
  $pane->panel = 'left_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_animalia_video';
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
      'poster_image_style' => 'large',
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
  $pane->uuid = 'd26e8433-3aa0-44e4-99e2-de0701fd2b2e';
  $display->content['new-d26e8433-3aa0-44e4-99e2-de0701fd2b2e'] = $pane;
  $display->panels['left_above'][4] = 'new-d26e8433-3aa0-44e4-99e2-de0701fd2b2e';
  $pane = new stdClass();
  $pane->pid = 'new-df2d9e4c-5754-4dff-9b9e-d63d8bcf0648';
  $pane->panel = 'left_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_species_image_animalia';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => 'medium',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'df2d9e4c-5754-4dff-9b9e-d63d8bcf0648';
  $display->content['new-df2d9e4c-5754-4dff-9b9e-d63d8bcf0648'] = $pane;
  $display->panels['left_above'][5] = 'new-df2d9e4c-5754-4dff-9b9e-d63d8bcf0648';
  $pane = new stdClass();
  $pane->pid = 'new-6acab1c6-f064-4998-9efb-ef9606afcd97';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Wikipedia insert',
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
  $pane->uuid = '6acab1c6-f064-4998-9efb-ef9606afcd97';
  $display->content['new-6acab1c6-f064-4998-9efb-ef9606afcd97'] = $pane;
  $display->panels['middle'][0] = 'new-6acab1c6-f064-4998-9efb-ef9606afcd97';
  $pane = new stdClass();
  $pane->pid = 'new-f1779ef8-13af-49d1-97c5-30da33c1d833';
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
  $pane->uuid = 'f1779ef8-13af-49d1-97c5-30da33c1d833';
  $display->content['new-f1779ef8-13af-49d1-97c5-30da33c1d833'] = $pane;
  $display->panels['middle'][1] = 'new-f1779ef8-13af-49d1-97c5-30da33c1d833';
  $pane = new stdClass();
  $pane->pid = 'new-9213f6fc-e60e-4de5-a1c8-38b0f19fce0c';
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
  $pane->uuid = '9213f6fc-e60e-4de5-a1c8-38b0f19fce0c';
  $display->content['new-9213f6fc-e60e-4de5-a1c8-38b0f19fce0c'] = $pane;
  $display->panels['right_above'][0] = 'new-9213f6fc-e60e-4de5-a1c8-38b0f19fce0c';
  $pane = new stdClass();
  $pane->pid = 'new-87fe85dc-d21c-41f7-9a46-3d38c1a37bb1';
  $pane->panel = 'right_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_issue_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
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
    'override_title_heading' => 'div',
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
  $pane->uuid = '87fe85dc-d21c-41f7-9a46-3d38c1a37bb1';
  $display->content['new-87fe85dc-d21c-41f7-9a46-3d38c1a37bb1'] = $pane;
  $display->panels['right_above'][1] = 'new-87fe85dc-d21c-41f7-9a46-3d38c1a37bb1';
  $pane = new stdClass();
  $pane->pid = 'new-0253647a-1343-4cc7-b8ce-a9971eefa6c8';
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
  $pane->uuid = '0253647a-1343-4cc7-b8ce-a9971eefa6c8';
  $display->content['new-0253647a-1343-4cc7-b8ce-a9971eefa6c8'] = $pane;
  $display->panels['right_above'][2] = 'new-0253647a-1343-4cc7-b8ce-a9971eefa6c8';
  $pane = new stdClass();
  $pane->pid = 'new-2e51eb94-8a94-4a38-ae52-6d161abc7c30';
  $pane->panel = 'right_above';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_stamp_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'node',
    'override_title' => 0,
    'override_title_text' => '%title',
    'override_title_heading' => 'h4',
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
  $pane->uuid = '2e51eb94-8a94-4a38-ae52-6d161abc7c30';
  $display->content['new-2e51eb94-8a94-4a38-ae52-6d161abc7c30'] = $pane;
  $display->panels['right_above'][3] = 'new-2e51eb94-8a94-4a38-ae52-6d161abc7c30';
  $pane = new stdClass();
  $pane->pid = 'new-d2ffb3c1-3a70-4f07-b715-f462f82daf54';
  $pane->panel = 'right_above';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'd2ffb3c1-3a70-4f07-b715-f462f82daf54';
  $display->content['new-d2ffb3c1-3a70-4f07-b715-f462f82daf54'] = $pane;
  $display->panels['right_above'][4] = 'new-d2ffb3c1-3a70-4f07-b715-f462f82daf54';
  $pane = new stdClass();
  $pane->pid = 'new-1e25079f-d59d-4221-a033-7980b713f011';
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
  $pane->uuid = '1e25079f-d59d-4221-a033-7980b713f011';
  $display->content['new-1e25079f-d59d-4221-a033-7980b713f011'] = $pane;
  $display->panels['top'][0] = 'new-1e25079f-d59d-4221-a033-7980b713f011';
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
  $export['site_template__panel_context_b0ad5d7c-8089-42f0-8d66-f65122aeff59'] = $handler;

  return $export;
}
