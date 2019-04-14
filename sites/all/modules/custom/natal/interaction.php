<?php
require_once 'sites/all/modules/custom/natal/functions.php';

$full_name = array();
$query = "SELECT nid, title FROM node WHERE type = 'natal'";
$result = db_query($query);


$table = 'field_data_natal_pub_pri';
$field = 'natal_pub_pri_value';

// Get the uid of the currently logged-in user
global $user;
// echo $user->uid;

include "permission.inc";

echo "<form id=\"daily_input_form\" method=\"post\" action=\"\">";
	echo "<select id=\"element_a\" name=\"full_name_a\">";
	echo "<option label=\"-select person #1-\" value=\"\" selected=\"selected\"></option>";
	// full_name
	sort($full_name);
	for($i=0;$i<count($full_name);$i++){
		$array[$i] = array($full_name[$i]);
		echo "<option value=".$array[$i][0].">" . $array[$i][0] . "</option>";
	}
	echo "</select><br />";

	echo "<select id=\"element_b\" name=\"full_name_b\">";
	echo "<option label=\"-select person #2-\" value=\"\" selected=\"selected\"></option>";
	// full_name
	sort($full_name);
	for($i=0;$i<count($full_name);$i++){
		$array[$i] = array($full_name[$i]);
		echo "<option value=".$array[$i][0].">" . $array[$i][0] . "</option>";
	}
	echo "</select><br />";

// This is where the value for the orb is selected.
	echo "<select id=\"element_2\" name=\"orb\">";
	echo "<option label=\"-select an orb -\" selected=\"selected\" value=\"orb\"></option>";
	echo "<option value=\"1.0\" >1 degree 0 minutes or less</option>";
	echo "<option value=\"2.0\" >2 degrees 0 minutes or less</option>"; 
	echo "<option value=\"4.0\" >4 degrees 0 minutes or less</option>";
	echo "</select><br />";

	echo "<input id=\"saveForm\" class=\"button_text\" type=\"submit\" name=\"submit\" value=\"Submit\" />";
echo "</form>";

// Echos the Orb: n degrees
if(isset($_POST['submit']) && ($_POST['full_name_a'] != NULL) && ($_POST['full_name_b'] != NULL) && ($_POST['orb'] != NULL)) {
	$nid_a = get_nid($_POST['full_name_a']);
	$full_name_a = $_POST['full_name_a'];
	$orb = $_POST['orb'];	

// get person #1's first name from the database
	$query = db_select('field_data_natal_name_first', 'natal_name_first_value')
	    ->fields('natal_name_first_value')
		->condition('entity_id', $nid_a,'=')
	    ->execute()
	    ->fetchAssoc();
	$name_first_a = $query['natal_name_first_value'];
	
// get person #1's last name from the database
	$query = db_select('field_data_natal_name_last', 'natal_name_last_value')
	    ->fields('natal_name_last_value')
		->condition('entity_id', $nid_a,'=')
	    ->execute()
	    ->fetchAssoc();
	$name_last_a = $query['natal_name_last_value'];	

	$nid_b = get_nid($_POST['full_name_b']);
	$full_name_b = $_POST['full_name_b'];
	$orb = $_POST['orb'];	

// get person #2's first name from the database
	$query = db_select('field_data_natal_name_first', 'natal_name_first_value')
	    ->fields('natal_name_first_value')
		->condition('entity_id', $nid_b,'=')
	    ->execute()
	    ->fetchAssoc();
	$name_first_b = $query['natal_name_first_value'];

// get person #2's last name from the database
	$query = db_select('field_data_natal_name_last', 'natal_name_last_value')
	    ->fields('natal_name_last_value')
		->condition('entity_id', $nid_b,'=')
	    ->execute()
	    ->fetchAssoc();
	$name_last_b = $query['natal_name_last_value'];

  echo "The interaction between " . $name_first_a . " " . $name_last_a . " and " . $name_first_b . " " . $name_last_b;
  echo "<br />using an orb of: " . $orb . " degrees";


// retrieve the values for A = 'daily' from the database
$p = array("sun","moon","mercury","venus","mars","jupiter","saturn","uranus","neptune","pluto","nnode");
for ($j=0; $j<count($p); $j++) {

	$sdm = array('sign','degree','minute');
	for ($i=0; $i<3; $i++) {
		$table = 'field_data_natal_' . $p[$j] . '_' . $sdm[$i];
		$field = 'natal_' . $p[$j] . '_' . $sdm[$i] . '_value';
		$query = db_select($table, $field)
		  ->fields($field)
			->condition('entity_id', $nid_a,'=')
		  ->execute()
		  ->fetchAssoc();
		$result = $query[$field];

		$test_A = $j.$i;
		switch ($test_A) {
			case 00:
				$sign_A_sun = $result;
				break;
			case 01:
				$degree_A_sun = $result;
				break;
			case 02:
				$minute_A_sun = $result;
				break;
			case 10:
				$sign_A_moon = $result;
				break;
			case 11:
				$degree_A_moon = $result;
				break;
			case 12:
				$minute_A_moon = $result;
				break;
			case 20:
				$sign_A_mercury = $result;
				break;
			case 21:
				$degree_A_mercury = $result;
				break;
			case 22:
				$minute_A_mercury = $result;
				break;
			case 30:
				$sign_A_venus = $result;
				break;
			case 31:
				$degree_A_venus = $result;
				break;
			case 32:
				$minute_A_venus = $result;
				break;
			case 40:
				$sign_A_mars = $result;
				break;
			case 41:
				$degree_A_mars = $result;
				break;
			case 42:
				$minute_A_mars = $result;
				break;
			case 50:
				$sign_A_jupiter = $result;
				break;
			case 51:
				$degree_A_jupiter = $result;
				break;
			case 52:
				$minute_A_jupiter = $result;
				break;
			case 60:
				$sign_A_saturn = $result;
				break;
			case 61:
				$degree_A_saturn = $result;
				break;
			case 62:
				$minute_A_saturn = $result;
				break;
			case 70:
				$sign_A_uranus = $result;
				break;
			case 71:
				$degree_A_uranus = $result;
				break;
			case 72:
				$minute_A_uranus = $result;
				break;
			case 80:
				$sign_A_neptune = $result;
				break;
			case 81:
				$degree_A_neptune = $result;
				break;
			case 82:
				$minute_A_neptune = $result;
				break;
			case 90:
				$sign_A_pluto = $result;
				break;
			case 91:
				$degree_A_pluto = $result;
				break;
			case 92:
				$minute_A_pluto = $result;
				break;
			case 100:
				$sign_A_nnode = $result;
				break;
			case 101:
				$degree_A_nnode = $result;
				break;
			case 102:
				$minute_A_nnode = $result;
				break;
			default: 
		}
	}
}

// assign values (sign + degree + minute) to each planet
$sunA = angle($sign_A_sun, $degree_A_sun, $minute_A_sun);
$moonA = angle($sign_A_moon, $degree_A_moon, $minute_A_moon);
$mercuryA = angle($sign_A_mercury, $degree_A_mercury, $minute_A_mercury);
$venusA = angle($sign_A_venus, $degree_A_venus, $minute_A_venus);
$marsA = angle($sign_A_mars, $degree_A_mars, $minute_A_mars);
$jupiterA = angle($sign_A_jupiter, $degree_A_jupiter, $minute_A_jupiter);
$saturnA = angle($sign_A_saturn, $degree_A_saturn, $minute_A_saturn);
$uranusA = angle($sign_A_uranus, $degree_A_uranus, $minute_A_uranus);
$neptuneA = angle($sign_A_neptune, $degree_A_neptune, $minute_A_neptune);
$plutoA = angle($sign_A_pluto, $degree_A_pluto, $minute_A_pluto);
$nnodeA = angle($sign_A_nnode, $degree_A_nnode, $minute_A_nnode);


// retrieve the values for B = 'selected individual' from the database
for ($j=0; $j<count($p); $j++) {

	$sdm = array('sign','degree','minute');
	for ($i=0; $i<3; $i++) {
		$table = 'field_data_natal_' . $p[$j] . '_' . $sdm[$i];
		$field = 'natal_' . $p[$j] . '_' . $sdm[$i] . '_value';
		$query = db_select($table, $field)
		  ->fields($field)
			->condition('entity_id', $nid_b,'=')
		  ->execute()
		  ->fetchAssoc();
		$result = $query[$field];

		$test_B = $j.$i;
		switch ($test_B) {
			case 00:
				$sign_B_sun = $result;
				break;
			case 01:
				$degree_B_sun = $result;
				break;
			case 02:
				$minute_B_sun = $result;
				break;
			case 10:
				$sign_B_moon = $result;
				break;
			case 11:
				$degree_B_moon = $result;
				break;
			case 12:
				$minute_B_moon = $result;
				break;
			case 20:
				$sign_B_mercury = $result;
				break;
			case 21:
				$degree_B_mercury = $result;
				break;
			case 22:
				$minute_B_mercury = $result;
				break;
			case 30:
				$sign_B_venus = $result;
				break;
			case 31:
				$degree_B_venus = $result;
				break;
			case 32:
				$minute_B_venus = $result;
				break;
			case 40:
				$sign_B_mars = $result;
				break;
			case 41:
				$degree_B_mars = $result;
				break;
			case 42:
				$minute_B_mars = $result;
				break;
			case 50:
				$sign_B_jupiter = $result;
				break;
			case 51:
				$degree_B_jupiter = $result;
				break;
			case 52:
				$minute_B_jupiter = $result;
				break;
			case 60:
				$sign_B_saturn = $result;
				break;
			case 61:
				$degree_B_saturn = $result;
				break;
			case 62:
				$minute_B_saturn = $result;
				break;
			case 70:
				$sign_B_uranus = $result;
				break;
			case 71:
				$degree_B_uranus = $result;
				break;
			case 72:
				$minute_B_uranus = $result;
				break;
			case 80:
				$sign_B_neptune = $result;
				break;
			case 81:
				$degree_B_neptune = $result;
				break;
			case 82:
				$minute_B_neptune = $result;
				break;
			case 90:
				$sign_B_pluto = $result;
				break;
			case 91:
				$degree_B_pluto = $result;
				break;
			case 92:
				$minute_B_pluto = $result;
				break;
			case 100:
				$sign_B_nnode = $result;
				break;
			case 101:
				$degree_B_nnode = $result;
				break;
			case 102:
				$minute_B_nnode = $result;
				break;
			default: 
		}
	}
}

// assign values (sign + degree + minute) to each planet
$sunB = angle($sign_B_sun, $degree_B_sun, $minute_B_sun);
$moonB = angle($sign_B_moon, $degree_B_moon, $minute_B_moon);
$mercuryB = angle($sign_B_mercury, $degree_B_mercury, $minute_B_mercury);
$venusB = angle($sign_B_venus, $degree_B_venus, $minute_B_venus);
$marsB = angle($sign_B_mars, $degree_B_mars, $minute_B_mars);
$jupiterB = angle($sign_B_jupiter, $degree_B_jupiter, $minute_B_jupiter);
$saturnB = angle($sign_B_saturn, $degree_B_saturn, $minute_B_saturn);
$uranusB = angle($sign_B_uranus, $degree_B_uranus, $minute_B_uranus);
$neptuneB = angle($sign_B_neptune, $degree_B_neptune, $minute_B_neptune);
$plutoB = angle($sign_B_pluto, $degree_B_pluto, $minute_B_pluto);
$nnodeB = angle($sign_B_nnode, $degree_B_nnode, $minute_B_nnode);
echo '<hr />';

// compares A's planet position to B's -- calls function ab()
$a = array($sunA,$moonA,$mercuryA,$venusA,$marsA,$jupiterA,$saturnA,$uranusA,$neptuneA,$plutoA); //,$nnodeA);
$b = array($sunB,$moonB,$mercuryB,$venusB,$marsB,$jupiterB,$saturnB,$uranusB,$neptuneB,$plutoB); //,$nnodeB);
	for ($i=0; $i<count($a); $i++) {
		for ($j=0; $j<count($b); $j++) {
			$aspect = ab($a[$i], $b[$j]);

			if ($aspect != NULL) {
				$angle = ' (angle: ' . round(abs(($a[$i] - $b[$j])),1) . '&#176;)';

				$glyph1 = '<img src="sites/default/files/glyphs/' . $p[$i] . '.jpg" style="width:41px;height:54px" >';
				$glyph2 = '<img src="sites/default/files/glyphs/' . $aspect . '.jpg" style="width:41px;height:54px" >';
				$glyph3 = '<img src="sites/default/files/glyphs/' . $p[$j] . '.jpg" style="width:41px;height:54px" ><br />';
				echo $glyph1 . " " . $glyph2 . " " . $glyph3;

				$title = $name_first_a . '\'s ' . ucwords($p[$i]) . ' ' . $aspect . ' ' . $name_first_b . '\'s ' . ucwords($p[$j]) ;
				echo '<span style="color:rgb(57,51,127);font-size:20px;font-weight:bold">' . $title . '</span>' . $angle . '<br />';
				$condition1 = $p[$i] . '_' . $p[$j] . '_' . $aspect;
				transit($condition1);
			}
		}
	}
}

?>