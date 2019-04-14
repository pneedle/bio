<?php
global $ss;
$daily_id = 2151;

// set variable for daily_daily (nid = $daily_id)
$nid = $daily_id;

require_once 'simple_html_dom.php';

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

// ensures that the value for degree is 2 characters in length 
for($i=0; $i<12; $i++) {
	$str = $classes[3*$i+1];
	if (strlen($str) == 1) {
		$classes[3*$i+1] = "0" . $str;
	}
}

// ensures that the value for minutes is 2 characters in length 
for($i=0; $i<12; $i++) {
	$str = $classes[3*$i+2];	
	if (substr($str, 1, 1) == "'") { 
		$classes[3*$i+2] = "0".$str;
	}
//	echo $classes[3*$i+2] . "<br />";
}

/*
echo "<pre>";
print_r($classes);
echo "</pre><br />";
*/
$title_sign = array();
$title_text = $string->find('img[title]');
if(!empty($title_text)) {
	$numOfItems = count($title_text);
	$counter = 0;
	foreach($title_text as $item) {
		if ($item->title == "Aries" || $item->title == "Taurus" || $item->title == "Gemini" || $item->title == "Cancer" ||
			$item->title == "Leo" || $item->title == "Virgo" || $item->title == "Libra" || $item->title == "Scorpio" ||
			$item->title == "Sagittarius" || $item->title == "Capricorn" || $item->title == "Aquarius" || $item->title == "Pisces") {
				array_push($title_sign, $item->title);
			}
	}
//	echo $title_sign[1];

echo "<pre>";
print_r($title_sign);
echo "</pre>";

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

$output .= "<table class=\"aspects\">";

// capture sign, degree and minute
$s = 11;
for ($i=0; $i<$s; $i++) {	
	$a = $q[$i];
	$b = substr($a, -9);
 	$nospaces = str_replace(' ', '', $b);	
 	$sign = strtoupper(substr($nospaces, 2,3));
	$degree = substr($nospaces, 0,2);
	$minute = substr($nospaces, 5,2);
/*
// replace SGR and PSC with SAG and PIS
	if ($sign == "AQR") { $sign = "AQU"; }
	if ($sign == "SGR") { $sign = "SAG"; }
	if ($sign == "CNC") { $sign = "CAN"; }
	if ($sign == "PSC") { $sign = "PIS"; }	
*/
	
/*$output .= "<table class=\"aspects\">
		<tr>
			<td width=\"12%\"><img src=\"sites/default/files/glyphs/".$p[$i].".jpg\" height=\"25\" width=\"25\"></td>
			<td class=\"word1\" width=\"38%\">".$P[$i]."</td>
			<td width=\"12%\"><img src=\"sites/default/files/glyphs/".substr(strtolower($title_sign[$i]), 0, 3).".jpg\" height=\"25\" width=\"25\"></td>
			<td class=\"word2\" width=\"38%\">".$classes[3*$i+1]."&#176;".$classes[3*$i+2]."</td>
		</tr></table>";*/

$output .=		"<tr>
				<td width=\"30%\">
					<img src=\"sites/default/files/glyphs/".$p[$i].".jpg\" height=\"25\" width=\"19\">in
					<img src=\"sites/default/files/glyphs/". substr(strtolower($title_sign[$i]), 0, 3) . ".jpg\" height=\"25\" width=\"19\"></td>
				<td class=\"word1\" width=\"45%\"><a href=\"" . $p[$i] . "-" . strtolower($title_sign[$i]) . "\">" . $p[$i] . " in " . strtolower($title_sign[$i]) . "</a></td>
				<td class=\"word1\" width=\"25%\">".$classes[3*$i+1]."&#176;".$classes[3*$i+2]."</td>
			</tr>";
}
$output .=	"</table>";


// update SUN in MySQL tables
$update = db_update('field_data_natal_sun_sign')
    ->fields(array('natal_sun_sign_value' => substr(strtoupper($title_sign[0]), 0, 3),))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_sun_degree')
    ->fields(array('natal_sun_degree_value' => $classes[1],))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_sun_minute')
    ->fields(array('natal_sun_minute_value' => substr(($classes[2]), 0, 2)))
	->condition('entity_id', $nid,'=')
    ->execute();

// update MOON in MySQL tables
$update = db_update('field_data_natal_moon_sign')
    ->fields(array('natal_moon_sign_value' => substr(strtoupper($title_sign[1]), 0, 3),))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_moon_degree')
    ->fields(array('natal_moon_degree_value' => $classes[4],))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_moon_minute')
    ->fields(array('natal_moon_minute_value' => substr(($classes[5]), 0, 2)))
	->condition('entity_id', $nid,'=')
    ->execute();

// update MERCURY in MySQL tables
$update = db_update('field_data_natal_mercury_sign')
    ->fields(array('natal_mercury_sign_value' => substr(strtoupper($title_sign[2]), 0, 3),))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_mercury_degree')
    ->fields(array('natal_mercury_degree_value' => $classes[7],))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_mercury_minute')
    ->fields(array('natal_mercury_minute_value' => substr(($classes[8]), 0, 2)))
	->condition('entity_id', $nid,'=')
    ->execute();

// update VENUS in MySQL tables
$update = db_update('field_data_natal_venus_sign')
    ->fields(array('natal_venus_sign_value' => substr(strtoupper($title_sign[3]), 0, 3),))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_venus_degree')
    ->fields(array('natal_venus_degree_value' => $classes[10],))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_venus_minute')
    ->fields(array('natal_venus_minute_value' => substr(($classes[11]), 0, 2)))
	->condition('entity_id', $nid,'=')
    ->execute();

// update MARS in MySQL tables
$update = db_update('field_data_natal_mars_sign')
    ->fields(array('natal_mars_sign_value' => substr(strtoupper($title_sign[4]), 0, 3),))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_mars_degree')
    ->fields(array('natal_mars_degree_value' => $classes[13],))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_mars_minute')
    ->fields(array('natal_mars_minute_value' => substr(($classes[14]), 0, 2)))
	->condition('entity_id', $nid,'=')
    ->execute();

// update JUPITER in MySQL tables
$update = db_update('field_data_natal_jupiter_sign')
    ->fields(array('natal_jupiter_sign_value' => substr(strtoupper($title_sign[5]), 0, 3),))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_jupiter_degree')
    ->fields(array('natal_jupiter_degree_value' => $classes[16],))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_jupiter_minute')
    ->fields(array('natal_jupiter_minute_value' => substr(($classes[17]), 0, 2)))
	->condition('entity_id', $nid,'=')
    ->execute();

// update SATURN in MySQL tables
$update = db_update('field_data_natal_saturn_sign')
    ->fields(array('natal_saturn_sign_value' => substr(strtoupper($title_sign[6]), 0, 3),))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_saturn_degree')
    ->fields(array('natal_saturn_degree_value' => $classes[19],))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_saturn_minute')
    ->fields(array('natal_saturn_minute_value' => substr(($classes[20]), 0, 2)))
	->condition('entity_id', $nid,'=')
    ->execute();

// update URANUS in MySQL tables
$update = db_update('field_data_natal_uranus_sign')
    ->fields(array('natal_uranus_sign_value' => substr(strtoupper($title_sign[7]), 0, 3),))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_uranus_degree')
    ->fields(array('natal_uranus_degree_value' => $classes[22],))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_uranus_minute')
    ->fields(array('natal_uranus_minute_value' => substr(($classes[23]), 0, 2)))
	->condition('entity_id', $nid,'=')
    ->execute();

// update NEPTUNE in MySQL tables
$update = db_update('field_data_natal_neptune_sign')
    ->fields(array('natal_neptune_sign_value' => substr(strtoupper($title_sign[8]), 0, 3),))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_neptune_degree')
    ->fields(array('natal_neptune_degree_value' => $classes[25],))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_neptune_minute')
    ->fields(array('natal_neptune_minute_value' => substr(($classes[26]), 0, 2)))
	->condition('entity_id', $nid,'=')
    ->execute();

// update PLUTO in MySQL tables
$update = db_update('field_data_natal_pluto_sign')
    ->fields(array('natal_pluto_sign_value' => substr(strtoupper($title_sign[9]), 0, 3),))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_pluto_degree')
    ->fields(array('natal_pluto_degree_value' => $classes[28],))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_pluto_minute')
    ->fields(array('natal_pluto_minute_value' => substr(($classes[29]), 0, 2)))
	->condition('entity_id', $nid,'=')
    ->execute();

// update NORTH NODE in MySQL tables
$update = db_update('field_data_natal_nnode_sign')
    ->fields(array('natal_nnode_sign_value' => substr(strtoupper($title_sign[10]), 0, 3),))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_nnode_degree')
    ->fields(array('natal_nnode_degree_value' => $classes[31],))
	->condition('entity_id', $nid,'=')
    ->execute();
$update = db_update('field_data_natal_nnode_minute')
    ->fields(array('natal_nnode_minute_value' => substr(($classes[32]), 0, 2)))
	->condition('entity_id', $nid,'=')
    ->execute();


return $output;
?>