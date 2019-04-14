<?php
require_once 'sites/all/modules/custom/natal/functions.php';
$components[3] = NULL;
$components[4] = NULL;

// lookup the taxonomy id number from the 'field_data_field_twelve' table
/*$query = db_select('field_data_field_twelve', 'field_twelve_tid')
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
*/
$components = explode(' ',$title); // e.g., "mercury_saturn_square"
/*echo "components[0]: " . $components[0] . "<br />";
echo "components[1]: " . $components[1] . "<br />";
echo "components[2]: " . $components[2] . "<br />";
if (isset($components[3])) {
	echo "components[3]: " . $components[3] . "<br />";
}
if (isset($components[4])) {
	echo "components[4]: " . $components[4] . "<br />";
}
*/
$planet = $components[0];
$placement = $components[2];
if ($components[2] == "the") {
	$fh = $components[3];
	fix_house($fh) . "<br />";
}

$trunc_placement = substr(strtolower($placement),0,3);  // e.g., "lib" or "06"

// for planets in houses, e.g., Mars in the 1st House
if (isset($components[3])) {
	$house_sign = fix_house($components[3]);
} else {
	$house_sign = $trunc_placement;
}

// for North Node, e.g., North Node in the 1st House
if (($components[0] == "North") && ($components[1] == "Node")) {
	$planet = "nnode";
	if (($components[2] == "in") && ($components[3] != "the")) {
		$house_sign = substr(strtolower($components[3]),0,3);
	}
	if (($components[2] == "in") && ($components[3] == "the")) {
		$house_sign = fix_house($components[4]);
	}
	
}

//echo $title . "<br />";  // e.g., "mercury"
//echo "planet = " . strtolower($planet) . "<br />";  // e.g., "mercury"
//echo "placement = " . strtolower($placement) . "<br />";  // e.g., "libra" or "6th house"
//echo "truncated planet = " . substr(strtolower($planet),0,3) . "<br />";  // e.g., "mercury"
//echo "truncated placement = " . substr(strtolower($placement),0,3) . "<br />";  // e.g., "libra" or "6th house"

echo "<p>";
echo "<div class=\"planet-placement-format\">";
//echo "<img src=\"../sites/default/files/glyphs/" . strtolower($planet) . ".jpg\" style=\"width:41px;height:54px\" alt=\"glyph of the {$planet}\" title=\"symbol for the {$planet}\">";
echo "<img src=\"../sites/default/files/glyphs/" . strtolower($planet) . ".jpg\" alt=\"glyph of the {$planet}\" title=\"symbol for the {$planet}\">";
echo "<span class=\"align-middle\"> in </span>";
//echo "<img src=\"../sites/default/files/glyphs/" . $house_sign . ".jpg\" style=\"width:41px;height:54px\" alt=\"glyph of {$placement}\" title=\"symbol for {$placement}\" >";
echo "<img src=\"../sites/default/files/glyphs/" . $house_sign . ".jpg\" alt=\"glyph of {$placement}\" title=\"symbol for {$placement}\" >";
echo "</div>";
echo "</p>";

?>