<?php
/**
 * @file
 * bio_plantae.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function bio_plantae_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'plant_list_kpcofgs';
  $mini->category = '';
  $mini->admin_title = 'Plant-List KPCOFGS';
  $mini->admin_description = 'Plant-List KPCOFGS';
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
  $display->uuid = 'd9ee366d-fa3b-4f4f-9e64-d8a7e0458382';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'plant_list_kpcofgs';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-da7d69e7-353c-4025-9ac6-7e8a78e91bda';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-0Zi8GRyIPn4EQJb1Tiqixaz8c94GicXC';
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
  $pane->uuid = 'da7d69e7-353c-4025-9ac6-7e8a78e91bda';
  $display->content['new-da7d69e7-353c-4025-9ac6-7e8a78e91bda'] = $pane;
  $display->panels['middle'][0] = 'new-da7d69e7-353c-4025-9ac6-7e8a78e91bda';
  $pane = new stdClass();
  $pane->pid = 'new-cedaf54a-ce8a-4df8-b351-440967bd1e58';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-1580UmY2gzTLjLQlgl103fIvFWUgelan';
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
  $pane->uuid = 'cedaf54a-ce8a-4df8-b351-440967bd1e58';
  $display->content['new-cedaf54a-ce8a-4df8-b351-440967bd1e58'] = $pane;
  $display->panels['middle'][1] = 'new-cedaf54a-ce8a-4df8-b351-440967bd1e58';
  $pane = new stdClass();
  $pane->pid = 'new-e307406d-5eeb-490a-8450-ff5d01c3ea3f';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-dTGj4Zoy2N16yMHrkSSRof1QE2Zgv6Mm';
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
  $pane->uuid = 'e307406d-5eeb-490a-8450-ff5d01c3ea3f';
  $display->content['new-e307406d-5eeb-490a-8450-ff5d01c3ea3f'] = $pane;
  $display->panels['middle'][2] = 'new-e307406d-5eeb-490a-8450-ff5d01c3ea3f';
  $pane = new stdClass();
  $pane->pid = 'new-dbbb9fd2-3816-4bc8-bc4a-aa9e6663f54b';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-9pj7QjEiOGAXl17fLlvMJUNdTz0thRVZ';
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
  $pane->uuid = 'dbbb9fd2-3816-4bc8-bc4a-aa9e6663f54b';
  $display->content['new-dbbb9fd2-3816-4bc8-bc4a-aa9e6663f54b'] = $pane;
  $display->panels['middle'][3] = 'new-dbbb9fd2-3816-4bc8-bc4a-aa9e6663f54b';
  $pane = new stdClass();
  $pane->pid = 'new-39d2aa48-180e-4e55-809a-2f46d32c00c0';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-wTDL1i0xLWAvJne4AlxavgkpLXD0FBn0';
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
  $pane->uuid = '39d2aa48-180e-4e55-809a-2f46d32c00c0';
  $display->content['new-39d2aa48-180e-4e55-809a-2f46d32c00c0'] = $pane;
  $display->panels['middle'][4] = 'new-39d2aa48-180e-4e55-809a-2f46d32c00c0';
  $pane = new stdClass();
  $pane->pid = 'new-a1192730-3286-4043-a95e-022d613df64a';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-TQF8YNwBMtiQcvskIVYHo7AfPageqzsZ';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Subclass',
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
  $pane->uuid = 'a1192730-3286-4043-a95e-022d613df64a';
  $display->content['new-a1192730-3286-4043-a95e-022d613df64a'] = $pane;
  $display->panels['middle'][5] = 'new-a1192730-3286-4043-a95e-022d613df64a';
  $pane = new stdClass();
  $pane->pid = 'new-28c22d82-ad8a-402b-9b90-f0fe4b946c5f';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-xjP3Q2EbUEnApKYpFI48iBK7B863Ytfu';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '28c22d82-ad8a-402b-9b90-f0fe4b946c5f';
  $display->content['new-28c22d82-ad8a-402b-9b90-f0fe4b946c5f'] = $pane;
  $display->panels['middle'][6] = 'new-28c22d82-ad8a-402b-9b90-f0fe4b946c5f';
  $pane = new stdClass();
  $pane->pid = 'new-11667024-b80c-4636-b48a-61d28111ae19';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-PdWrCImGsDn7XLxZ0yfD01Eas9ERT34H';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '11667024-b80c-4636-b48a-61d28111ae19';
  $display->content['new-11667024-b80c-4636-b48a-61d28111ae19'] = $pane;
  $display->panels['middle'][7] = 'new-11667024-b80c-4636-b48a-61d28111ae19';
  $pane = new stdClass();
  $pane->pid = 'new-03e5b2f3-c7be-4ff2-88df-57964a37990d';
  $pane->panel = 'middle';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-PlqhgSeCwi0H3bkUn0J8hNqM6444cR9y';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '03e5b2f3-c7be-4ff2-88df-57964a37990d';
  $display->content['new-03e5b2f3-c7be-4ff2-88df-57964a37990d'] = $pane;
  $display->panels['middle'][8] = 'new-03e5b2f3-c7be-4ff2-88df-57964a37990d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-da7d69e7-353c-4025-9ac6-7e8a78e91bda';
  $mini->display = $display;
  $export['plant_list_kpcofgs'] = $mini;

  return $export;
}
