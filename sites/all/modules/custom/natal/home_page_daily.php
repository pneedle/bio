<h2 style="text-align: center;">Astrology<br /> of the Moment</h2>
<h3> These are the major aspects in effect, at this moment, for everyone.</h3>
<p>Note: these major aspects use an "orb" of +/- 3 degrees.
<?php 
   $orb = 3.0;
   $full_name = "Daily_Daily";
   $nid = 2151;
   $name_first = "Daily";
   $name_last = "Daily";
?>
<?php
// include_once 'sites/all/modules/custom/natal/functions.php';  // was require
$daily_id = 2151;

// $full_name = array();
// $query = "SELECT nid, title FROM node WHERE type = 'natal'";
// $result = db_query($query);

$table = 'field_data_natal_pub_pri';
$field = 'natal_pub_pri_value';

/*
echo "<form id=\"daily_input_form\" method=\"post\" action=\"\">";
echo "<select id=\"element_1\" name=\"full_name\">";
echo "<option label=\"-select a name-\" value=\"\" selected=\"selected\"></option>";
// full_name
// sort($full_name);
for($i=0;$i<count($full_name);$i++){
	// if content author = logged-in user, then show results
	$array[$i] = array($full_name[$i]);
	echo "<option value='Daily_Daily'>Daily</option>";
}

echo "</select>";

// This is where the value for the orb is selected.
echo "<select id=\"element_2\" name=\"orb\">";
echo "<option label=\"-select an orb -\" value=\"\"></option>";
echo "<option value=\"0.33\" >0 degrees 20 minutes</option>";
echo "<option value=\"0.5\" >0 degrees 30 minutes</option>";
echo "<option value=\"1.0\" >1 degree 0 minutes</option>";
echo "<option value=\"2.0\" selected=\"selected\" >2 degrees 0 minutes</option>";
echo "</select>";

echo "<input id=\"saveForm\" class=\"button_text\" type=\"submit\" name=\"submit\" value=\"Submit\" />";
echo "</form>";
*/
// retrieve the values for A = 'daily' from the database
$p = array("sun","moon","mercury","venus","mars","jupiter","saturn","uranus","neptune","pluto","nnode");
for ($j=0; $j<count($p); $j++) {

	$sdm = array('sign','degree','minute');
	for ($i=0; $i<3; $i++) {
		$table = 'field_data_natal_' . $p[$j] . '_' . $sdm[$i];
		$field = 'natal_' . $p[$j] . '_' . $sdm[$i] . '_value';
		$query = db_select($table, $field)
		    ->fields($field)
			->condition('entity_id', $daily_id,'=')
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
			->condition('entity_id', $nid,'=')
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

// TRANSITS
// compares A's planet position to B's -- calls function ab()
$a = array($sunA,$moonA,$mercuryA,$venusA,$marsA,$jupiterA,$saturnA,$uranusA,$neptuneA,$plutoA); //,$nnodeA);
$b = array($sunB,$moonB,$mercuryB,$venusB,$marsB,$jupiterB,$saturnB,$uranusB,$neptuneB,$plutoB); //,$nnodeB);
	for ($i=0; $i<count($a); $i++) {
		for ($j=0; $j<count($b); $j++) {
			$aspect = ab($a[$i], $b[$j]);
			$numeric_angle = round(abs(($a[$i] - $b[$j])),1); // calculates the daily_daliy aspects (leaving out 0 degrees)
			if (($aspect != NULL) && ($nid != $daily_id) && ($i != 10)) {
				$angle = ' (angle: ' . round(abs(($a[$i] - $b[$j])),1) . '&#176;)';
					$glyph1 = '<img src="sites/default/files/glyphs/' . $p[$i] . '.jpg" style="width:41px;height:54px" >';
					$glyph2 = '<img src="sites/default/files/glyphs/' . $aspect . '.jpg" style="width:41px;height:54px" >';
					$glyph3 = '<img src="sites/default/files/glyphs/' . $p[$j] . '.jpg" style="width:41px;height:54px" ><br />';
					echo $glyph1 . " " . $glyph2 . " " . $glyph3;
					$title = 'Transiting ' . ucwords($p[$i]) . ' ' . $aspect . ' natal ' . ucwords($p[$j]) ;
					echo '<span style="color:rgb(57,51,127);font-size:20px;font-weight:bold">' . $title . '</span>' . $angle . '<br />';
					$condition1 = $p[$i] . '_' . $p[$j] . '_' . $aspect;
					transit($condition1);
			}
			if (($aspect != NULL) && ($nid == $daily_id) && ($numeric_angle != 0) && ($i < $j)) { // lists transits for today (daily_daily)
				$angle = ' (angle: ' . round(abs(($a[$i] - $b[$j])),1) . '&#176;)';
					$glyph1 = '<img src="sites/default/files/glyphs/' . $p[$i] . '.jpg" style="width:41px;height:54px" >';
					$glyph2 = '<img src="sites/default/files/glyphs/' . $aspect . '.jpg" style="width:41px;height:54px" >';
					$glyph3 = '<img src="sites/default/files/glyphs/' . $p[$j] . '.jpg" style="width:41px;height:54px" ><br />';
					echo $glyph1 . " " . $glyph2 . " " . $glyph3;
					$title = ucwords($p[$i]) . ' ' . $aspect . ' ' . ucwords($p[$j]) ;
					echo '<span style="color:rgb(57,51,127);font-size:20px;font-weight:bold">' . $title . '</span>' . $angle . '<br />';
					$condition1 = $p[$i] . '_' . $p[$j] . '_' . $aspect;
					transit($condition1);
			} 
		}
	}
// }

// absoulute degree calculations
function angle($s, $d, $m) {
	$degree = round(($d + ($m / 60)),1);

	if ($s == "ARI") {	
		$sign = (0);
	} elseif ($s == "TAU") { 
		$sign = (30);
	} elseif ($s == "GEM") {
		$sign = (60);
	} elseif ($s == "CAN") {
		$sign = (90);
	} elseif ($s == "LEO") {
		$sign = (120);
	} elseif ($s == "VIR") {
		$sign = (150);
	} elseif ($s == "LIB") {
		$sign = (180);
	} elseif ($s == "SCO") {
		$sign = (210);
	} elseif ($s == "SAG") {
		$sign = (240);
	} elseif ($s == "CAP") {
		$sign = (270);
	} elseif ($s == "AQU") {
		$sign = (300);
	} elseif ($s == "PIS")  { 
		$sign = (330); 
	} else {
		$sign = (99999); 
	}
	$result = $sign + $degree;
	return $result;
}

//determines if there is an aspect present
function ab($a, $b) { 
        $orb = 3.0;
	$x = abs($a - $b);
	if (((($x) >= 0) && (($x) < $orb) || (($x) > (360-$orb)) && (($x) < (360+$orb)))) {
		$result = "conjunct";
	} elseif (((($x) > (60-$orb)) && (($x) < (60+$orb)) || (($x) > (300-$orb)) && (($x) < (300+$orb)))) {
		$result =  "sextile";
	} elseif (((($x) > (90-$orb)) && (($x) < (90+$orb)) || (($x) > (270-$orb)) && (($x) < (270+$orb)))) {
		$result =  "square";
	} elseif (((($x) > (120-$orb)) && (($x) < (120+$orb)) || (($x) > (240-$orb)) && (($x) < (240+$orb)))) {
		$result =  "trine";
	} elseif ((($x) > (180-$orb)) && (($x) < (180+$orb))) {
		$result =  "opposite";
	} else {
		$result = NULL; 
	} 
	return $result;
}

// TRANSIT: displays data from 'node' and 'field_data_body' tables
function transit($condition1) {
$table1 = 'node';
$field1 = 'nid';
//$condition1 = 'sun_moon_sextile';
$query = db_select($table1, $field1)
    ->fields($field1)
	->condition('title', $condition1,'=')
	->condition('type','transit', '=')
    ->execute()
    ->fetchAssoc();
$result = $query[$field1];
$entity_id = $result;

$table2 = 'field_data_body';
$field2 = 'body_value';
$condition2 = $entity_id;
$query = db_select($table2, $field2)
    ->fields($field2)
	->condition('entity_id', $condition2,'=')
    ->execute()
    ->fetchAssoc();
$result = $query[$field2];

$table3 = 'field_data_field_description';
$field3 = 'field_description_value';
$condition3 = $entity_id;
$query = db_select($table3, $field3)
    ->fields($field3)
	->condition('entity_id', $condition3,'=')
    ->execute()
    ->fetchAssoc();
$result3 = $query[$field3];
$description = $result3;

//echo '<span style="color:rgb(0,102,229);font-size:18px;font-weight:bold">' . $description . '</span><br />' . $result . '<br /><br />';
if ($description != "") {
	echo '<span style="color:rgb(0,102,229);font-size:18px;font-weight:bold">' . $description . '</span><br /><span class="more">' . $result . '</span><br /><br /><br />'; 
	} // JS INJECTOR
}
?>