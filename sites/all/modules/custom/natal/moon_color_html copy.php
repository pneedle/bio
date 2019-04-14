<?php
require_once 'simple_html_dom.php';
$daily_id = 2151;

$output = "<style type=\"text/css\">";
$output .= ".word1 { font-size: 14px; color: #1A446C; vertical-align:top; }";
$output .= ".word2 {font-size: 14px; color: #1A446C; vertical-align:top; }";
$output .= ".aspects {margin: 0 0; }";
$output .= "</style>";

$p = array("sun","moon","mercury","venus","mars","jupiter","saturn","uranus","neptune","pluto","nnode");
$P = array("Sun  ","Moon  ","Mercury","Venus","Mars","Jupiter","Saturn","Uranus","Neptune","Pluto","Moon's Node  ");
$q = array("","","","","","","","","","","");
$string = file_get_html('http://www.astro.com');
$classes = array();
foreach($string->find('td[class="txt8p"]') as $td) {
	$classes[] = $td->plaintext;
}

$n = 11;
for ($i=0; $i<$n; $i++) {
	$keyword = $P[$i];
	$position = strpos($string, $keyword);
//	echo $keyword.": ".$position."<br />";
	$q[$i] = substr($string, $position, 24);
//  echo $q[$i]."<br />";

}	
$output .= "<hr />";

// capture sign, degree and minute
$s = 11;
for ($i=0; $i<$s; $i++) {	
	$a = $q[$i];
	$b = substr($a, -9);
 	$nospaces = str_replace(' ', '', $b);	
 	$sign = strtoupper(substr($nospaces, 2,3));
	$degree = substr($nospaces, 0,2);
	$minute = substr($nospaces, 5,2);

// replace SGR and PSC with SAG and PIS
	if ($sign == "AQR") { $sign = "AQU"; }
	if ($sign == "SGR") { $sign = "SAG"; }
	if ($sign == "CNC") { $sign = "CAN"; }
	if ($sign == "PSC") { $sign = "PIS"; }	
	
/*$output .= "<table class=\"aspects\">
		<tr>
			<td width=\"12%\"><img src=\"sites/default/files/glyphs/".$p[$i].".jpg\" height=\"25\" width=\"25\"></td>
			<td class=\"word1\" width=\"38%\">".$P[$i]."</td>
			<td width=\"12%\"><img src=\"sites/default/files/glyphs/".strtolower($sign).".jpg\" height=\"25\" width=\"25\"></td>
			<td class=\"word2\" width=\"38%\">".$sign." ".$degree."&#176;".$minute."'</td>
		</tr></table>";
*/

$output .= $p[$i] . " " . $P[$i] . "<br />" . $sign . " " . $degree . "&#176;" . $minute . "<br />";

echo "<pre>";
$query = db_select('field_data_natal_moon_sign', 'natal_moon_sign_value')
    ->fields('natal_moon_sign_value')
	->condition('entity_id', 2151,'=')
    ->execute()
    ->fetchAssoc();
$ss = $query['natal_moon_sign_value'];
echo "The natal Moon sign is: " . $ss;
echo "</pre>";

// set variable for daily_daily (nid = 2151)
$nid = 2151;

$test = $i;
switch ($test) {
	case 0:
		$sign_sun = $sign;
		$degree_sun = $degree;
		$minute_sun = $minute;
		break;
	case 1:
		$sign_moon = $sign;
		$degree_moon = $degree;
		$minute_moon = $minute;
		break;
	case 2:
		$sign_mercury = $sign;
		$degree_mercury = $degree;
		$minute_mercury = $minute;
		break;
	case 3:
		$sign_venus = $sign;
		$degree_venus = $degree;
		$minute_venus = $minute;
		break;
	case 4:
		$sign_mars = $sign;
		$degree_mars = $degree;
		$minute_mars = $minute;
		break;
	case 5:
		$sign_jupiter = $sign;
		$degree_jupiter = $degree;
		$minute_jupiter = $minute;
		break;
	case 6:
		$sign_saturn = $sign;
		$degree_saturn = $degree;
		$minute_saturn = $minute;
		break;
	case 7:
		$sign_uranus = $sign;
		$degree_uranus = $degree;
		$minute_uranus = $minute;
		break;
	case 8:
		$sign_neptune = $sign;
		$degree_neptune = $degree;
		$minute_neptune = $minute;
		break;
	case 9:
		$sign_pluto = $sign;
		$degree_pluto = $degree;
		$minute_pluto = $minute;
		break;
	case 10:
		$sign_nnode = $sign;
		$degree_nnode = $degree;
		$minute_nnode = $minute;
		break;
	default: 
	}
}

// update SUN in MySQL tables
$update = db_update('field_data_natal_sun_sign')
    ->fields(array('natal_sun_sign_value' => $sign_sun,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_sun_degree')
    ->fields(array('natal_sun_degree_value' => $degree_sun,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_sun_minute')
    ->fields(array('natal_sun_minute_value' => $minute_sun,))
	->condition('entity_id', $nid,'=')
    ->execute();

// update MOON in MySQL tables
$update = db_update('field_data_natal_moon_sign')
    ->fields(array('natal_moon_sign_value' => $sign_moon,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_moon_degree')
    ->fields(array('natal_moon_degree_value' => $degree_moon,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_moon_minute')
    ->fields(array('natal_moon_minute_value' => $minute_moon,))
	->condition('entity_id', $nid,'=')
    ->execute();

// update MERCURY in MySQL tables
$update = db_update('field_data_natal_mercury_sign')
    ->fields(array('natal_mercury_sign_value' => $sign_mercury,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_mercury_degree')
    ->fields(array('natal_mercury_degree_value' => $degree_mercury,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_mercury_minute')
    ->fields(array('natal_mercury_minute_value' => $minute_mercury,))
	->condition('entity_id', $nid,'=')
    ->execute();

// update VENUS in MySQL tables
$update = db_update('field_data_natal_venus_sign')
    ->fields(array('natal_venus_sign_value' => $sign_venus,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_venus_degree')
    ->fields(array('natal_venus_degree_value' => $degree_venus,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_venus_minute')
    ->fields(array('natal_venus_minute_value' => $minute_venus,))
	->condition('entity_id', $nid,'=')
    ->execute();

// update MARS in MySQL tables
$update = db_update('field_data_natal_mars_sign')
    ->fields(array('natal_mars_sign_value' => $sign_mars,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_mars_degree')
    ->fields(array('natal_mars_degree_value' => $degree_mars,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_mars_minute')
    ->fields(array('natal_mars_minute_value' => $minute_mars,))
	->condition('entity_id', $nid,'=')
    ->execute();

// update JUPITER in MySQL tables
$update = db_update('field_data_natal_jupiter_sign')
    ->fields(array('natal_jupiter_sign_value' => $sign_jupiter,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_jupiter_degree')
    ->fields(array('natal_jupiter_degree_value' => $degree_jupiter,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_jupiter_minute')
    ->fields(array('natal_jupiter_minute_value' => $minute_jupiter,))
	->condition('entity_id', $nid,'=')
    ->execute();

// update SATURN in MySQL tables
$update = db_update('field_data_natal_saturn_sign')
    ->fields(array('natal_saturn_sign_value' => $sign_saturn,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_saturn_degree')
    ->fields(array('natal_saturn_degree_value' => $degree_saturn,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_saturn_minute')
    ->fields(array('natal_saturn_minute_value' => $minute_saturn,))
	->condition('entity_id', $nid,'=')
    ->execute();

// update URANUS in MySQL tables
$update = db_update('field_data_natal_uranus_sign')
    ->fields(array('natal_uranus_sign_value' => $sign_uranus,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_uranus_degree')
    ->fields(array('natal_uranus_degree_value' => $degree_uranus,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_uranus_minute')
    ->fields(array('natal_uranus_minute_value' => $minute_uranus,))
	->condition('entity_id', $nid,'=')
    ->execute();

// update NEPTUNE in MySQL tables
$update = db_update('field_data_natal_neptune_sign')
    ->fields(array('natal_neptune_sign_value' => $sign_neptune,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_neptune_degree')
    ->fields(array('natal_neptune_degree_value' => $degree_neptune,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_neptune_minute')
    ->fields(array('natal_neptune_minute_value' => $minute_neptune,))
	->condition('entity_id', $nid,'=')
    ->execute();

// update PLUTO in MySQL tables
$update = db_update('field_data_natal_pluto_sign')
    ->fields(array('natal_pluto_sign_value' => $sign_pluto,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_pluto_degree')
    ->fields(array('natal_pluto_degree_value' => $degree_pluto,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_pluto_minute')
    ->fields(array('natal_pluto_minute_value' => $minute_pluto,))
	->condition('entity_id', $nid,'=')
    ->execute();

// update NORTH NODE in MySQL tables
$update = db_update('field_data_natal_nnode_sign')
    ->fields(array('natal_nnode_sign_value' => $sign_nnode,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_nnode_degree')
    ->fields(array('natal_nnode_degree_value' => $degree_nnode,))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_nnode_minute')
    ->fields(array('natal_nnode_minute_value' => $minute_nnode,))
	->condition('entity_id', $nid,'=')
    ->execute();

// retrieve sign from MySQL table "field_data_natal_sun_sign"
/*
echo "<pre>";
$query = db_select('field_data_natal_sun_sign', 'natal_sun_sign_value')
    ->fields('natal_sun_sign_value')
	->condition('entity_id', 977,'=')
    ->execute()
    ->fetchAssoc();
$ss = $query['natal_sun_sign_value'];
echo "The natal Sun sign is: " . $ss;
echo "</pre>";

// retrieve degree from MySQL table "field_data_natal_sun_degree"
echo "<pre>";
$query = db_select('field_data_natal_sun_degree', 'natal_sun_degree_value')
    ->fields('natal_sun_degree_value')
	->condition('entity_id', 977,'=')
    ->execute()
    ->fetchAssoc();
$sd = $query['natal_sun_degree_value'];
echo "The natal Sun degree is: " . $sd;
echo "</pre>";
*/
return $output;
?>