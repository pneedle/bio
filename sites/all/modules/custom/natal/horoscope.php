<?php
require_once 'sites/all/modules/custom/natal/functions.php';

$full_name = array();
$query = "SELECT nid, title, uid FROM node WHERE type = 'natal'";
$result = db_query($query);

$table = 'field_data_natal_pub_pri';
$field = 'natal_pub_pri_value';

// Get the uid of the currently logged-in user
global $user;
// echo $user->uid;

include "permission.inc";

/* 
// only displays individuals created by user with uid == 36
if ($result) {
  while ($row = $result->fetchAssoc()) {
	if ($row['uid'] == 36) {
		array_push($full_name, $row['title']);
	}	
  }
}
*/

echo "<form id=\"daily_input_form\" method=\"post\" action=\"\">";
echo "<select id=\"element_1\" name=\"full_name\">";
echo "<option label=\"-select a name-\" value=\"\" selected=\"selected\"></option>";
// full_name
sort($full_name);
for($i=0;$i<count($full_name);$i++){
	$array[$i] = array($full_name[$i]);
	echo "<option value=".$array[$i][0].">" . $array[$i][0] . "</option>";
}

echo "</select><br />";
echo "<input id=\"saveForm\" class=\"button_text\" type=\"submit\" name=\"submit\" value=\"Submit\" />";
echo "</form>";

// Get the value for fullname and nid
if(isset($_POST['submit']) && ($_POST['full_name'] != NULL)) {
	$nid = get_nid($_POST['full_name']);
	$full_name = $_POST['full_name'];
//	$name_first = 
	
	$query = db_select('field_data_natal_name_first', 'natal_name_first_value')
	    ->fields('natal_name_first_value')
		->condition('entity_id', $nid,'=')
	    ->execute()
	    ->fetchAssoc();
	$name_first = $query['natal_name_first_value'];
	
	$query2 = db_select('field_data_natal_name_last', 'natal_name_last_value')
	    ->fields('natal_name_last_value')
		->condition('entity_id', $nid,'=')
	    ->execute()
	    ->fetchAssoc();
	$name_last = $query2['natal_name_last_value'];
	
	echo "Click for natal summary information: <a href=\"natal/" . $full_name . "\">" . $name_first . " " . $name_last . "<a/><br /><br />";
	echo "<h3>" . $name_first . " " . $name_last . "</h3>"; 
//	echo 'Node ID: ' . $nid . '<hr />';

// retrieve the values for B = 'selected individual' from the database
$p = array("sun","moon","mercury","venus","mars","jupiter","saturn","uranus","neptune","pluto","nnode","asc","cusp02","cusp03","mc","cusp05","cusp06","asc","cusp02","cusp03","mc","cusp05","cusp06");
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
			case 110:
				$sign_B_asc = $result;
				break;
			case 111:
				$degree_B_asc = $result;
				break;
			case 112:
				$minute_B_asc = $result;
				break;
			case 120:
				$sign_B_cusp02 = $result;
				break;
			case 121:
				$degree_B_cusp02 = $result;
				break;
			case 122:
				$minute_B_cusp02 = $result;
				break;
			case 130:
				$sign_B_cusp03 = $result;
				break;
			case 131:
				$degree_B_cusp03 = $result;
				break;
			case 132:
				$minute_B_cusp03 = $result;
				break;
			case 140:
				$sign_B_cusp04 = cusp_fix($result);
				break;
			case 141:
				$degree_B_cusp04 = $result;
				break;
			case 142:
				$minute_B_cusp04 = $result;
				break;
			case 150:
				$sign_B_cusp05 = $result;
				break;
			case 151:
				$degree_B_cusp05 = $result;
				break;
			case 152:
				$minute_B_cusp05 = $result;
				break;
			case 160:
				$sign_B_cusp06 = $result;
				break;
			case 161:
				$degree_B_cusp06 = $result;
				break;
			case 162:
				$minute_B_cusp06 = $result;
				break;
			case 170:
				$sign_B_cusp07 = cusp_fix($result);
				break;
			case 171:
				$degree_B_cusp07 = $result;
				break;
			case 172:
				$minute_B_cusp07 = $result;
				break;
			case 180:
				$sign_B_cusp08 = cusp_fix($result);
				break;
			case 181:
				$degree_B_cusp08 = $result;
				break;
			case 182:
				$minute_B_cusp08 = $result;
				break;
			case 190:
				$sign_B_cusp09 = cusp_fix($result);
				break;
			case 191:
				$degree_B_cusp09 = $result;
				break;
			case 192:
				$minute_B_cusp09 = $result;
				break;
			case 200:
				$sign_B_cusp10 = $result;
				break;
			case 201:
				$degree_B_cusp10 = $result;
				break;
			case 202:
				$minute_B_cusp10 = $result;
				break;
			case 210:
				$sign_B_cusp11 = cusp_fix($result);
				break;
			case 211:
				$degree_B_cusp11 = $result;
				break;
			case 212:
				$minute_B_cusp11 = $result;
				break;
			case 220:
				$sign_B_cusp12 = cusp_fix($result);
				break;
			case 221:
				$degree_B_cusp12 = $result;
				break;
			case 222:
				$minute_B_cusp12 = $result;
				break;
			default: 
		}
	}
}

// assign values (sign + degree + minute) to each planet and cusp
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
$cusp01B = angle($sign_B_asc, $degree_B_asc, $minute_B_asc);
$cusp02B = angle($sign_B_cusp02, $degree_B_cusp02, $minute_B_cusp02);
$cusp03B = angle($sign_B_cusp03, $degree_B_cusp03, $minute_B_cusp03);
$cusp04B = angle($sign_B_cusp04, $degree_B_cusp04, $minute_B_cusp04);
$cusp05B = angle($sign_B_cusp05, $degree_B_cusp05, $minute_B_cusp05);
$cusp06B = angle($sign_B_cusp06, $degree_B_cusp06, $minute_B_cusp06);
$cusp07B = angle($sign_B_cusp07, $degree_B_cusp07, $minute_B_cusp07);
$cusp08B = angle($sign_B_cusp08, $degree_B_cusp08, $minute_B_cusp08);
$cusp09B = angle($sign_B_cusp09, $degree_B_cusp09, $minute_B_cusp09);
$cusp10B = angle($sign_B_cusp10, $degree_B_cusp10, $minute_B_cusp10);
$cusp11B = angle($sign_B_cusp11, $degree_B_cusp11, $minute_B_cusp11);
$cusp12B = angle($sign_B_cusp12, $degree_B_cusp12, $minute_B_cusp12);

$b = array($sunB,$moonB,$mercuryB,$venusB,$marsB,$jupiterB,$saturnB,$uranusB,$neptuneB,$plutoB,$nnodeB,$cusp01B,$cusp02B,$cusp03B,$cusp04B,$cusp05B,$cusp06B,$cusp07B,$cusp08B,$cusp09B,$cusp10B,$cusp11B,$cusp12B);

$q = array("sun","moon","mercury","venus","mars","jupiter","saturn","uranus","neptune","pluto","nnode","cusp01 (ASC)","cusp02","cusp03","cusp04","cusp05","cusp06","cusp07","cusp08","cusp09","cusp10 (MC)","cusp11","cusp12");
$c = array($sign_B_sun,$sign_B_moon,$sign_B_mercury,$sign_B_venus,$sign_B_mars,$sign_B_jupiter,$sign_B_saturn,$sign_B_uranus,$sign_B_neptune,$sign_B_pluto,$sign_B_nnode,$sign_B_asc,$sign_B_cusp02,$sign_B_cusp03,$sign_B_cusp04,$sign_B_cusp05,$sign_B_cusp06,$sign_B_cusp07,$sign_B_cusp08,$sign_B_cusp09,$sign_B_cusp10,$sign_B_cusp11,$sign_B_cusp12);
$planet_sign_house = array();
$planet_house = array();
	for ($j=0; $j<11; $j++) {
//		if ($j == 11) { echo '<hr />'; }
		if (ucwords($q[$j]) == "Nnode") {
			$x = 'North Node in ' . sign_long($c[$j]);
		} else {
			$x = ucwords($q[$j]) . ' in ' . sign_long($c[$j]);
		}
//q		echo $x . '<br />';
		array_push($planet_sign_house,$x);
//		echo $b[$j] . "<br />";  // displays degrees
//		delineation($x);


//$planet_house = array();
//for ($k=0; $k<11; $k++) {



/* North Node in the 1st house
		if (($b[11] < $b[12]) && (($b[11] <= $b[$j]) && ($b[$j] <= $b[12]))) { 
			if (ucwords($q[$j]) == "Nnode") {
				$return = 'North Node in the 1st House';
				$return_house = "01";
			} else {
				$return = ucwords($q[$j]) . ' in the 1st House';
				$return_house = "01";
			}
		} elseif (($b[11] > $b[12]) && (($b[$j] => $b[11])) && ($b[$j] <= 360))) {
			if (ucwords($q[$j]) == "Nnode") {
				$return = 'North Node in the 1st House';
				$return_house = "01";
			} else {
				$return = ucwords($q[$j]) . ' in the 1st House';
				$return_house = "01";
			}
		} elseif (($b[11] > $b[12]) && (($b[$j] <= $b[12])) && ($b[$j] => 0))) {
			if (ucwords($q[$j]) == "Nnode") {
				$return = 'North Node in the 1st House';
				$return_house = "01";
			} else {
				$return = ucwords($q[$j]) . ' in the 1st House';
				$return_house = "01";
			}
*/
	
	 // North Node in the 1st house
			if (($b[11] < $b[12]) && (($b[11] <= $b[$j]) && ($b[$j] <= $b[12]))) { 
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 1st House';
					$return_house = "01";
				} else {
					$return = ucwords($q[$j]) . ' in the 1st House';
					$return_house = "01";
				}
			} elseif (($b[11] > $b[12]) && (($b[$j] >= $b[11]) && ($b[$j] <= 360))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 1st House';
					$return_house = "01";
				} else {
					$return = ucwords($q[$j]) . ' in the 1st House';
					$return_house = "01";
				}
			} elseif (($b[11] > $b[12]) && (($b[$j] <= $b[12]) && ($b[$j] >= 0))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 1st House';
					$return_house = "01";
				} else {
					$return = ucwords($q[$j]) . ' in the 1st House';
					$return_house = "01";
				}

	 // North Node in the 2nd house
			} elseif (($b[12] < $b[13]) && (($b[12] <= $b[$j]) && ($b[$j] <= $b[13]))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 2nd House';
					$return_house = "02";
				} else {
					$return = ucwords($q[$j]) . ' in the 2nd House';
					$return_house = "02";
				}
			} elseif (($b[12] > $b[13]) && (($b[$j] >= $b[12]) && ($b[$j] <= 360))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 2nd House';
					$return_house = "02";
				} else {
					$return = ucwords($q[$j]) . ' in the 2nd House';
					$return_house = "02";
				}
			} elseif (($b[12] > $b[13]) && (($b[$j] <= $b[13]) && ($b[$j] >= 0))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 2nd House';
					$return_house = "02";
				} else {
					$return = ucwords($q[$j]) . ' in the 2nd House';
					$return_house = "02";
				}

	// North Node in the 3rd house
			} elseif (($b[13] < $b[14]) && (($b[13] <= $b[$j]) && ($b[$j] <= $b[14]))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 3rd House';
					$return_house = "03";
				} else {
					$return = ucwords($q[$j]) . ' in the 3rd House';
					$return_house = "03";
				}
			} elseif (($b[13] > $b[14]) && (($b[$j] >= $b[13]) && ($b[$j] <= 360))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 3rd House';
					$return_house = "03";
				} else {
					$return = ucwords($q[$j]) . ' in the 3rd House';
					$return_house = "03";
				}
			} elseif (($b[13] > $b[14]) && (($b[$j] <= $b[14]) && ($b[$j] >= 0))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 3rd House';
					$return_house = "03";
				} else {
					$return = ucwords($q[$j]) . ' in the 3rd House';
					$return_house = "03";
				}

	// North Node in the 4th house
			} elseif (($b[14] < $b[15]) && (($b[14] <= $b[$j]) && ($b[$j] <= $b[15]))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 4th House';
					$return_house = "04";
				} else {
					$return = ucwords($q[$j]) . ' in the 4th House';
					$return_house = "04";
				}
			} elseif (($b[14] > $b[15]) && (($b[$j] >= $b[14]) && ($b[$j] <= 360))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 4th House';
					$return_house = "04";
				} else {
					$return = ucwords($q[$j]) . ' in the 4th House';
					$return_house = "04";
				}
			} elseif (($b[14] > $b[15]) && (($b[$j] <= $b[15]) && ($b[$j] >= 0))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 4th House';
					$return_house = "04";
				} else {
					$return = ucwords($q[$j]) . ' in the 4th House';
					$return_house = "04";
				}

	// North Node in the 5th house
			} elseif (($b[15] < $b[16]) && (($b[15] <= $b[$j]) && ($b[$j] <= $b[16]))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 5th House';
					$return_house = "05";
				} else {
					$return = ucwords($q[$j]) . ' in the 5th House';
					$return_house = "05";
				}
			} elseif (($b[15] > $b[16]) && (($b[$j] >= $b[15]) && ($b[$j] <= 360))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 5th House';
					$return_house = "05";
				} else {
					$return = ucwords($q[$j]) . ' in the 5th House';
					$return_house = "05";
				}
			} elseif (($b[15] > $b[16]) && (($b[$j] <= $b[16]) && ($b[$j] >= 0))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 5th House';
					$return_house = "05";
				} else {
					$return = ucwords($q[$j]) . ' in the 5th House';
					$return_house = "05";
				}

	// North Node in the 6th house
			} elseif (($b[16] < $b[17]) && (($b[16] <= $b[$j]) && ($b[$j] <= $b[17]))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 6th House';
					$return_house = "06";
				} else {
					$return = ucwords($q[$j]) . ' in the 6th House';
					$return_house = "06";
				}
			} elseif (($b[16] > $b[17]) && (($b[$j] >= $b[16]) && ($b[$j] <= 360))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 6th House';
					$return_house = "06";
				} else {
					$return = ucwords($q[$j]) . ' in the 6th House';
					$return_house = "06";
				}
			} elseif (($b[16] > $b[17]) && (($b[$j] <= $b[17]) && ($b[$j] >= 0))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 6th House';
					$return_house = "06";
				} else {
					$return = ucwords($q[$j]) . ' in the 6th House';
					$return_house = "06";
				}

	// North Node in the 7th house
			} elseif (($b[17] < $b[18]) && (($b[17] <= $b[$j]) && ($b[$j] <= $b[18]))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 7th House';
					$return_house = "07";
				} else {
					$return = ucwords($q[$j]) . ' in the 7th House';
					$return_house = "07";
				}
			} elseif (($b[17] > $b[18]) && (($b[$j] >= $b[17]) && ($b[$j] <= 360))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 7th House';
					$return_house = "07";
				} else {
					$return = ucwords($q[$j]) . ' in the 7th House';
					$return_house = "07";
				}
			} elseif (($b[17] > $b[18]) && (($b[$j] <= $b[18]) && ($b[$j] >= 0))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 7th House';
					$return_house = "07";
				} else {
					$return = ucwords($q[$j]) . ' in the 7th House';
					$return_house = "07";
				}

	// North Node in the 8th house
			} elseif (($b[18] < $b[19]) && (($b[18] <= $b[$j]) && ($b[$j] <= $b[19]))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 8th House';
					$return_house = "08";
				} else {
					$return = ucwords($q[$j]) . ' in the 8th House';
					$return_house = "08";
				}
			} elseif (($b[18] > $b[19]) && (($b[$j] >= $b[18]) && ($b[$j] <= 360))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 8th House';
					$return_house = "08";
				} else {
					$return = ucwords($q[$j]) . ' in the 8th House';
					$return_house = "08";
				}
			} elseif (($b[18] > $b[19]) && (($b[$j] <= $b[19]) && ($b[$j] >= 0))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 8th House';
					$return_house = "08";
				} else {
					$return = ucwords($q[$j]) . ' in the 8th House';
					$return_house = "08";
				}

	// North Node in the 9th house
			} elseif (($b[19] < $b[20]) && (($b[19] <= $b[$j]) && ($b[$j] <= $b[20]))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 9th House';
					$return_house = "09";
				} else {
					$return = ucwords($q[$j]) . ' in the 9th House';
					$return_house = "09";
				}
			} elseif (($b[19] > $b[20]) && (($b[$j] >= $b[19]) && ($b[$j] <= 360))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 9th House';
					$return_house = "09";
				} else {
					$return = ucwords($q[$j]) . ' in the 9th House';
					$return_house = "09";
				}
			} elseif (($b[19] > $b[20]) && (($b[$j] <= $b[20]) && ($b[$j] >= 0))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 9th House';
					$return_house = "09";
				} else {
					$return = ucwords($q[$j]) . ' in the 9th House';
					$return_house = "09";
				}

	// North Node in the 10th house
			} elseif (($b[20] < $b[21]) && (($b[20] <= $b[$j]) && ($b[$j] <= $b[21]))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 10th House';
					$return_house = "10";
				} else {
					$return = ucwords($q[$j]) . ' in the 10th House';
					$return_house = "10";
				}
			} elseif (($b[20] > $b[21]) && (($b[$j] >= $b[20]) && ($b[$j] <= 360))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 10th House';
					$return_house = "10";
				} else {
					$return = ucwords($q[$j]) . ' in the 10th House';
					$return_house = "10";
				}
			} elseif (($b[20] > $b[21]) && (($b[$j] <= $b[21]) && ($b[$j] >= 0))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 10th House';
					$return_house = "10";
				} else {
					$return = ucwords($q[$j]) . ' in the 10th House';
					$return_house = "10";
				}

	// North Node in the 11th house
			} elseif (($b[21] < $b[22]) && (($b[21] <= $b[$j]) && ($b[$j] <= $b[22]))) { 	
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 11th House';
					$return_house = "11";
				} else {
					$return = ucwords($q[$j]) . ' in the 11th House';
					$return_house = "11";
				}
			} elseif (($b[21] > $b[22]) && (($b[$j] >= $b[21]) && ($b[$j] <= 360))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 11th House';
					$return_house = "11";
				} else {
					$return = ucwords($q[$j]) . ' in the 11th House';
					$return_house = "11";
				}
			} elseif (($b[21] > $b[22]) && (($b[$j] <= $b[22]) && ($b[$j] >= 0))) {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 11th House';
					$return_house = "11";
				} else {
					$return = ucwords($q[$j]) . ' in the 11th House';
					$return_house = "11";
				}

	// North Node in the 12th house
			} else {
				if (ucwords($q[$j]) == "Nnode") {
					$return = 'North Node in the 12th House';
					$return_house = "12";
				} else {
					$return = ucwords($q[$j]) . ' in the 12th House';
					$return_house = "12";
				}
			}

	array_push($planet_sign_house,$return);
	array_push($planet_house,$return_house);

//	$planet = $q[$k];
//function house($) {
	switch ($j) {
		case 0:
			$house_sun = $return;
			break;
		case 1:
			$house_moon = $return;
			break;
		case 2:
			$house_mercury = $return;
			break;
		case 3:
			$house_venus = $return;
			break;
		case 4:
			$house_mars = $return;
			break;
		case 5:
			$house_jupiter = $return;
			break;
		case 6:
			$house_saturn = $return;
			break;
		case 7:
			$house_uranus = $return;
			break;
		case 8:
			$house_neptune = $return;
			break;
		case 9:
			$house_pluto = $return;
			break;
		case 10:
			$house_nnode = $return;
			break;
	}
}

/*echo '<br /><pre>';
print_r($b);
//print_r($planet_sign_house); // Prints the array, e.g., [11] Saturn in Aquarius; [12] Saturn in the 3rd house
//$psh_array = $planet_sign_house;
//print_r($planet_house);  // Prints the array, e.g., [01] in 03; [02] in 12, etc.
echo '</pre><br />';
//echo "house_sun: " . $house_sun;
*/
// insert planet X in house Y here
	for ($i=0; $i<11; $i++) {
	$db_table_name = "field_data_natal_" . $q[$i] . "_house";
	$db_table_value = "natal_" . $q[$i] . "_house_value";
	$db_format = "natal_" . $q[$i] . "_house_format";
	db_merge($db_table_name)
		->key(array('entity_id' => $nid))
	    ->fields(array(
			'entity_type' => 'node',
			'bundle' => 'natal',
			'entity_id' => $nid,
			$db_table_value => $planet_house[$i],
			$db_format => 'plain_text',
			'language' => 'und',
			'delta' => 0,
		))
    ->execute();
	}

	for ($i=0; $i<22; $i++) {
		$title = $planet_sign_house[$i];  // e.g., "mercury_saturn_square"
		delineation($planet_sign_house[$i], $title);
		if ($i % 2 != 0) {
			echo "<br />";
		}
	}

// Add information about CSSTO aspects
	$angle = array($sunB,$moonB,$mercuryB,$venusB,$marsB,$jupiterB,$saturnB,$uranusB,$neptuneB,$plutoB,$nnodeB,$cusp01B);
	$planet = array("Sun","Moon","Mercury","Venus","Mars","Jupiter","Saturn","Uranus","Neptune","Pluto","Nnode","ASC","MC");
	$conjuncts = array();
	$sextiles = array();
	$squares = array();
	$trines = array();
	$opposites = array();

		for ($i=0; $i<12; $i++) {
			$planet1 = $planet[$i];
			$angle1 = $angle[$i];
			for ($j=$i; $j<11; $j++) {
				$angle2 = $angle[$j+1];
				$planet2 = $planet[$j+1];
				$conj = planet1_planet2_conjunct($angle1, $angle2, $planet1, $planet2);
				array_push($conjuncts,$conj);
				$sext = planet1_planet2_sextile($angle1, $angle2, $planet1, $planet2);
				array_push($sextiles,$sext);
				$squa = planet1_planet2_square($angle1, $angle2, $planet1, $planet2);
				array_push($squares,$squa);
				$trin = planet1_planet2_trine($angle1, $angle2, $planet1, $planet2);
				array_push($trines,$trin);
				$oppo = planet1_planet2_opposite($angle1, $angle2, $planet1, $planet2);
				array_push($opposites,$oppo);
		}
}
echo "<b>Click on the link to see other people with this aspect in their natal chart.</b><br /><br />";

		echo "<b>CONJUNCT ASPECTS</b><br />";
		foreach ($conjuncts as $conjunct) {
			$db_table_name = "field_data_natal_" . $conjunct[0];
			$db_table_value = "natal_" . $conjunct[0] . "_value";
			$db_format = "natal_" . $conjunct[0] . "_format";
			db_merge($db_table_name)
				->key(array('entity_id' => $nid))
			    ->fields(array(
					'entity_type' => 'node',
					'bundle' => 'natal',
					'entity_id' => $nid,
					'language' => 'und',
					'delta' => 0,
					$db_table_value => $conjunct[1],
					$db_format => 'plain_text',
				))
		    ->execute();
			if ($conjunct[1] != "") { // if the table entry is not NULL
				if ($conjunct[1] <= 2.0) { // if the orb is <= 2.0 then color the text BLUE
					echo "<span style=\"color:blue\"; >";
					$aspect = $conjunct[0] . " &#177; " . $conjunct[1] ;
					echo "<a href=aspect/" . $conjunct[0] . "> " . $conjunct[0] . " </a>&#177;" . $conjunct[1] . " degrees<br />";
					echo "</span>";

//	echo planet_A in house_A conjunct planet_B in house_B
//	if Venus then echo planet_sign_house[6], planet_sign_house[7]  ==> Venus in Aries in the 3rd house
//	if Pluto then echo planet_sign_house[17], planet_sign_house[18]  ==> Pluto in Aries in the 3rd house
	
//	Get a single value out of the database (Public or Private).	
//	$pub_pri = db_query("SELECT natal_pub_pri_value FROM {field_data_natal_pub_pri} WHERE entity_id = $nid")->fetchField();

				} else {
					echo "<a href=aspect/" . $conjunct[0] . "> " . $conjunct[0] . " </a>&#177;" . $conjunct[1] . " degrees<br />";
				}
			}
		}

		echo "<br /><b>SEXTILE ASPECTS</b><br />";
		foreach ($sextiles as $sextile) {
			$db_table_name = "field_data_natal_" . $sextile[0];
			$db_table_value = "natal_" . $sextile[0] . "_value";
			$db_format = "natal_" . $sextile[0] . "_format";
			db_merge($db_table_name)
				->key(array('entity_id' => $nid))
			    ->fields(array(
					'entity_type' => 'node',
					'bundle' => 'natal',
					'entity_id' => $nid,
					'language' => 'und',
					'delta' => 0,
					$db_table_value => $sextile[1],
					$db_format => 'plain_text',
				))
		    ->execute();
			if ($sextile[1] != "") { // if the table entry is not NULL
				if ($sextile[1] <= 2.0) {
					echo "<span style=\"color:purple\"; >";
					$aspect = $sextile[0] . " &#177; " . $sextile[1] ;
					echo "<a href=aspect/" . $sextile[0] . "> " . $sextile[0] . " </a>&#177;" . $sextile[1] . " degrees<br />";
					echo "</span>";
				} else {
					echo "<a href=aspect/" . $sextile[0] . "> " . $sextile[0] . " </a>&#177;" . $sextile[1] . " degrees<br />";
				}
			}
		}

		echo "<br /><b>SQUARE ASPECTS</b><br />";
		foreach ($squares as $square) {
			$db_table_name = "field_data_natal_" . $square[0];
			$db_table_value = "natal_" . $square[0] . "_value";
			$db_format = "natal_" . $square[0] . "_format";
			db_merge($db_table_name)
				->key(array('entity_id' => $nid))
			    ->fields(array(
					'entity_type' => 'node',
					'bundle' => 'natal',
					'entity_id' => $nid,
					'language' => 'und',
					'delta' => 0,
					$db_table_value => $square[1],
					$db_format => 'plain_text',
				))
		    ->execute();
			if ($square[1] != "") {
				if ($square[1] <= 2.0) {
					echo "<span style=\"color:red\"; >";
					$aspect = $square[0] . " &#177; " . $square[1] ;
					echo "<a href=aspect/" . $square[0] . "> " . $square[0] . " </a>&#177;" . $square[1] . " degrees<br />";
					echo "</span>";
				} else {
					echo "<a href=aspect/" . $square[0] . "> " . $square[0] . " </a>&#177;" . $square[1] . " degrees<br />";
				}
			}
		}

		echo "<br /><b>TRINE ASPECTS</b><br />";
		foreach ($trines as $trine) {
			$db_table_name = "field_data_natal_" . $trine[0];
			$db_table_value = "natal_" . $trine[0] . "_value";
			$db_format = "natal_" . $trine[0] . "_format";
			db_merge($db_table_name)
				->key(array('entity_id' => $nid))
			    ->fields(array(
					'entity_type' => 'node',
					'bundle' => 'natal',
					'entity_id' => $nid,
					'language' => 'und',
					'delta' => 0,
					$db_table_value => $trine[1],
					$db_format => 'plain_text',
				))
		    ->execute();
			if ($trine[1] != "") {
				if ($trine[1] <= 2.0) {
					echo "<span style=\"color:blue\"; >";
					$aspect = $trine[0] . " &#177; " . $trine[1] ;
					echo "<a href=aspect/" . $trine[0] . "> " . $trine[0] . " </a>&#177;" . $trine[1] . " degrees<br />";
					echo "</span>";
				} else {
					echo "<a href=aspect/" . $trine[0] . "> " . $trine[0] . " </a>&#177;" . $trine[1] . " degrees<br />";
				}
			}
		}

		echo "<br /><b>OPPOSITE ASPECTS</b><br />";
		foreach ($opposites as $opposite) {	
			$db_table_name = "field_data_natal_" . $opposite[0];
			$db_table_value = "natal_" . $opposite[0] . "_value";
			$db_format = "natal_" . $opposite[0] . "_format";
			db_merge($db_table_name)
				->key(array('entity_id' => $nid))
			    ->fields(array(
					'entity_type' => 'node',
					'bundle' => 'natal',
					'entity_id' => $nid,

					'delta' => 0,
					$db_table_value => $opposite[1],
					$db_format => 'plain_text',
				))
		    ->execute();
			if ($opposite[1] != "") {
				if ($opposite[1] <= 2.0) {
					echo "<span style=\"color:red\"; >";
					$aspect = $opposite[0] . " &#177; " . $opposite[1] ;
					echo "<a href=aspect/" . $opposite[0] . "> " . $opposite[0] . " </a>&#177;" . $opposite[1] . " degrees<br />";
					echo "</span>";
				} else {
					echo "<a href=aspect/" . $opposite[0] . "> " . $opposite[0] . " </a>&#177;" . $opposite[1] . " degrees<br />";

				}
			}
		}



}echo "<b>These are other interesting elements in the chart...</b><br /><br />"

?>