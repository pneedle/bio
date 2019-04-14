<?php
require_once 'sites/all/modules/custom/natal/functions.php';
$title = drupal_get_title();  // e.g., "mercury_saturn_square"	
if ($node = menu_get_object()) {
  // Get the nid
  $nid = $node->nid;
}

// lookup the taxonomy id number from the 'field_data_field_twelve' table
$query = db_select('field_data_field_twelve', 'field_twelve_tid')
  ->fields('field_twelve_tid')
	->condition('entity_id', $nid,'=')
  ->execute()
  ->fetchAssoc();
$tid = $query['field_twelve_tid'];
// lookup the corresponding house number from the 'taxonomy_term_data' table
$query2 = db_select('taxonomy_term_data', 'name')
  ->fields('name')
	->condition('tid', $tid,'=')
  ->execute()
  ->fetchAssoc();
$house = $query2['name'];

$components = explode(' ',$title); // e.g., "mercury_saturn_square"
$planet = $components[0];
$placement = $components[2];
if (isset($components[3])) {
	$placement = $components[3];
}
$trunc_placement = substr(strtolower($placement),0,3);  // e.g., "lib" or "06"

// for planets in houses, e.g., Mars in the 1st House
if ($house != NULL) {
	$house_sign = $house;
} else {
	$house_sign = $trunc_placement;
}

// for North Node, e.g., North Node in the 1st House
if ($planet == "North") {
	$planet = "nnode";
}

//echo $title . "<br />";  // e.g., "mercury"
//echo "planet = " . strtolower($planet) . "<br />";  // e.g., "mercury"
//echo "placement = " . strtolower($placement) . "<br />";  // e.g., "libra" or "6th house"
//echo "truncated planet = " . substr(strtolower($planet),0,3) . "<br />";  // e.g., "mercury"
//echo "truncated placement = " . substr(strtolower($placement),0,3) . "<br />";  // e.g., "libra" or "6th house"

echo "<p>";
echo "<div class=\"planet-placement-format\">";
echo "<img src=\"sites/default/files/glyphs/" . strtolower($planet) . ".jpg\" alt=\"glyph of the {$planet}\" title=\"symbol for the {$planet}\" height=\"54\" width=\"45\">";
echo "<span class=\"align-middle\"> in </span>";
echo "<img src=\"sites/default/files/glyphs/" . $house_sign . ".jpg\" alt=\"glyph of {$placement}\" title=\"symbol for {$placement}\" >";
echo "</div>";
echo "</p>";
