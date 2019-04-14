<?php
require_once 'sites/all/modules/custom/natal/functions.php';
$title = drupal_get_title();  // e.g., "mercury_saturn_square"	

$components = explode(' ',$title); // e.g., "mercury_saturn_square"
echo "components[0]: " . $components[0] . ".jpg<br />";
echo "components[1]: " . $components[1] . ".jpg<br />";
echo "components[2]: " . $components[2] . "<br />";
if (isset($components[3])) {
	echo "components[3]: " . $components[3] . "<br />";
} else {
	echo "components[3]: n/a<br />";
}

//$trunc_placement = substr(strtolower($placement),0,3);  // e.g., "lib" or "06"

// for planets in houses, e.g., Mars in the 1st House
/*if (isset($components[3])) {
	$house_sign = fix_house($components[3]);
} else {
	$house_sign = $trunc_placement;
}*/

// for North Node, e.g., North Node in the 1st House
/*if (($components[0] == "North") && ($components[1] == "Node")) {
	$planet = "nnode";
	if (($components[2] == "in") && ($components[3] != "the")) {
		$house_sign = substr(strtolower($components[3]),0,3);
	}
	if (($components[2] == "in") && ($components[3] == "the")) {
		$house_sign = fix_house($components[4]);
	}
	
}
*/
//echo $title . "<br />";  // e.g., "mercury"
//echo "planet = " . strtolower($planet) . "<br />";  // e.g., "mercury"
//echo "placement = " . strtolower($placement) . "<br />";  // e.g., "libra" or "6th house"
//echo "truncated planet = " . substr(strtolower($planet),0,3) . "<br />";  // e.g., "mercury"
//echo "truncated placement = " . substr(strtolower($placement),0,3) . "<br />";  // e.g., "libra" or "6th house"

echo "<p>";
echo "<div class=\"planet-placement-format\">";
echo "<img src=\"sites/default/files/glyphs/" . strtolower($components[0]) . ".jpg\" alt=\"glyph of the {$components[0]}\" title=\"symbol for the {$components[0]}\">";
echo "<span class=\"align-middle\"> in </span>";
echo "<img src=\"sites/default/files/glyphs/" . strtolower($components[1]) . ".jpg\" alt=\"glyph of {$components[1]}\" title=\"symbol for {$components[1]}\" >";
echo "</div>";
echo "</p>";

?>