<?php
// This file is the place to store all basic functions

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

// determine node ID (nid) and capture full name
function get_nid($full_name) {
	$table2 = 'node';
	$field2 = 'nid';
	$query = db_select($table2, $field2)
	  ->fields($field2)
		->condition('type', 'natal','=')
		->condition('title', $full_name,'=')
	  ->execute()
	  ->fetchAssoc();
	$nid = $query[$field2];
	return $nid;
}

//determines if there is an aspect present
function ab($a, $b) {
	$orb = "";
	$orb = $_POST['orb'];
	$x = abs($a - $b);
	if (((($x) >= 0) && (($x) < $orb) || (($x) > (360-$orb)) && (($x) < (360+$orb)))) {
		$result = "conjunct";
	} elseif (((($x) > (60-$orb)) && (($x) < (60+$orb)) || (($x) > (300-$orb)) && (($x) < (300+$orb)))) {
		$result = "sextile";
	} elseif (((($x) > (90-$orb)) && (($x) < (90+$orb)) || (($x) > (270-$orb)) && (($x) < (270+$orb)))) {
		$result = "square";
	} elseif (((($x) > (120-$orb)) && (($x) < (120+$orb)) || (($x) > (240-$orb)) && (($x) < (240+$orb)))) {
		$result = "trine";
	} elseif ((($x) > (180-$orb)) && (($x) < (180+$orb))) {
		$result = "opposite";
	} else {
		$result = NULL; 
	} 
	return $result;
}

// TRANSIT: displays data from 'node' and 'field_data_body' tables
// 'node' has the entity_ID;
// 'field_data_body' has the text;
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
	$entity_id = $result;  // numeric value (not displayed)

	$table2 = 'field_data_body';
	$field2 = 'body_value';
	$condition2 = $entity_id;
	$query = db_select($table2, $field2)
	  ->fields($field2)
		->condition('entity_id', $condition2,'=')
	  ->execute()
	  ->fetchAssoc();
	$result = $query[$field2]; // aspect description (paragraph) in black text

	$table3 = 'field_data_field_description';
	$field3 = 'field_description_value';
	$condition3 = $entity_id;
	$query = db_select($table3, $field3)
	  ->fields($field3)
		->condition('entity_id', $condition3,'=')
	  ->execute()
	  ->fetchAssoc();
	$result3 = $query[$field3];
	$description = $result3; // aspect description (title) in blue text

	echo '<span style="color:rgb(0,102,229);font-size:18px;font-weight:bold">' . $description . '</span><br /><span class="more">' . $result . '</span><br /><br /><br />';  // JS INJECTOR


}

// NATAL DELINEATION: displays data from 'node' and 'field_data_body' tables
function delineation($x, $title) {
	include "sites/all/modules/custom/natal/set_horoscope_glyph_image.inc"; 
	$table1 = 'node';
	$field1 = 'nid';
	$query = db_select($table1, $field1)
	  ->fields($field1)
		->condition('title', $x,'=')
	  ->execute()
	  ->fetchAssoc();
	$result = $query[$field1];
	$entity_id = $result;
	echo '<b>' . $x . '</b><br />';

	$table2 = 'field_data_body';
	$field2 = 'body_value';
	$condition2 = $entity_id;
	$query = db_select($table2, $field2)
	  ->fields($field2)
		->condition('entity_id', $condition2,'=')
	  ->execute()
	  ->fetchAssoc();
	$result = $query[$field2];
	// echo $result . '<br />';
	echo '<span class="more">' . $result . '</span><br />';  // JS INJECTOR

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
}

// "un-abbreviates" signs
function sign_long($s){
	switch ($s) {
		case 'ARI':
			return 'Aries';
			break;
		case 'TAU':
			return 'Taurus';
			break;
		case "GEM":
			return "Gemini";
			break;
		case "CAN":
			return "Cancer";
			break;
		case "LEO":
			return "Leo";
			break;
		case "VIR":
			return "Virgo";
			break;
		case "LIB":
			return "Libra";
			break;
		case "SCO":
			return "Scorpio";
			break;
		case 'SAG':
			return 'Sagittarius';
			break;
		case "CAP":
			return "Capricorn";
			break;
		case "AQU":
			return "Aquarius";
			break;
		case "PIS":
			return "Pisces"; 
			break;
		default:
			return "?????"; 
			break;
	}
}

// "fixes house label, e.g. 3rd-->03
function fix_house($fh){
	switch ($fh) {
		case '1st':
			return '01';
			break;
		case '2nd':
			return '02';
			break;
		case "3rd":
			return "03";
			break;
		case "4th":
			return "04";
			break;
		case "5th":
			return "05";
			break;
		case "6th":
			return "06";
			break;
		case "7th":
			return "07";
			break;
		case "8th":
			return "08";
			break;
		case '9th':
			return '09';
			break;
		case "10th":
			return "10";
			break;
		case "11th":
			return "11";
			break;
		case "12th":
			return "12"; 
			break;
		default:
			return "?????"; 
			break;
	}
}

// cusp sign fix
function cusp_fix($cf){
	switch ($cf) {
		case 'ARI':
			return 'LIB';
			break;
		case 'TAU':
			return 'SCO';
			break;
		case "GEM":
			return "SAG";
			break;
		case "CAN":
			return "CAP";
			break;
		case "LEO":
			return "AQU";
			break;
		case "VIR":
			return "PIS";
			break;
		case "LIB":
			return "ARI";
			break;
		case "SCO":
			return "TAU";
			break;
		case 'SAG':
			return 'GEM';
			break;
		case "CAP":
			return "CAN";
			break;
		case "AQU":
			return "LEO";
			break;
		case "PIS":
			return "VIR"; 
			break;
		default:
			echo "?????"; 
			break;
	}
}

/////////////////////////////////////////////////
// identifies aspects in a chart
/////////////////////////////////////////////////
// CONJUNCT
function planet1_planet2_conjunct($angle1, $angle2, $planet1, $planet2) {
	$aspect_orb = 8.0;
	$result = array();
	
	$x = abs($angle1 - $angle2);
	if ((($x) > (0-$aspect_orb)) && (($x) < (0+$aspect_orb))) {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_conjunct";
		$result2 = number_format(abs(($x)),1);
		$result = array($result1,$result2);
	} elseif ((($x) > (360-$aspect_orb)) && (($x) < (360+$aspect_orb))) {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_conjunct";
		$result2 = number_format(abs((360-$x)),1);
		$result = array($result1,$result2);
	} else {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_conjunct";
		$result2 = NULL;
		$result = array($result1,$result2);
	}
		return $result;
}

// SEXTILE
function planet1_planet2_sextile($angle1, $angle2, $planet1, $planet2) {
	$aspect_orb = 8.0;
	$result = array();
	
	$x = abs($angle1 - $angle2);
	if ((($x) > (60-$aspect_orb)) && (($x) < (60+$aspect_orb))) {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_sextile";
		$result2 = number_format(abs(($x)-60),1);
		$result = array($result1,$result2);
	} elseif ((($x) > (300-$aspect_orb)) && (($x) < (300+$aspect_orb))) {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_sextile";
		$result2 = number_format(abs(($x-180)-120),1);
		$result = array($result1,$result2);
	} else {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_sextile";
		$result2 = NULL;
		$result = array($result1,$result2);
	}
		return $result;
}

// SQUARE
function planet1_planet2_square($angle1, $angle2, $planet1, $planet2) {
	$aspect_orb = 8.0;
	$result = array();
	
	$x = abs($angle1 - $angle2);
	if ((($x) > (90-$aspect_orb)) && (($x) < (90+$aspect_orb))) {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_square";
		$result2 = number_format(abs(($x)-90),1);
		$result = array($result1,$result2);
	} elseif ((($x) > (270-$aspect_orb)) && (($x) < (270+$aspect_orb))) {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_square";
		$result2 = number_format(abs(($x-180)-90),1);
		$result = array($result1,$result2);
	} else {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_square";
		$result2 = NULL;
		$result = array($result1,$result2);
	}
		return $result;
}

// TRINE
function planet1_planet2_trine($angle1, $angle2, $planet1, $planet2) {
	$aspect_orb = 8.1; // to enable George Washington to register a Grand Trine
	$result = array();
	
	$x = abs($angle1 - $angle2);
	if ((($x) > (120-$aspect_orb)) && (($x) < (120+$aspect_orb))) {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_trine";
		$result2 = number_format(abs(($x)-120),1);
		$result = array($result1,$result2);
	} elseif ((($x) > (240-$aspect_orb)) && (($x) < (240+$aspect_orb))) {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_trine";
		$result2 = number_format(abs(($x-240)),1);
		$result = array($result1,$result2);
	} else {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_trine";
		$result2 = NULL;
		$result = array($result1,$result2);
	}
		return $result;
}

// OPPOSITE
function planet1_planet2_opposite($angle1, $angle2, $planet1, $planet2) {
	$aspect_orb = 8.0;
	$result = array();
	
	$x = abs($angle1 - $angle2);
	if ((($x) > (180-$aspect_orb)) && (($x) < (180+$aspect_orb))) {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_opposite";
		$result2 = number_format(abs(($x)-180),1);
		$result = array($result1,$result2);
	} else {
		$result1 = strtolower($planet1) . "_" . strtolower($planet2) . "_opposite";
		$result2 = NULL;
		$result = array($result1,$result2);
	}
	return $result;
}

?>