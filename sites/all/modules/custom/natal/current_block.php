<?php

require_once 'sites/all/modules/custom/natal/functions.php';
$today = date("M. j, Y, g:i a"); // M = Jan
echo $x = "Planetary positions for: <br />" . $today;

$P = array("Sun  ","Moon  ","Mercury","Venus","Mars","Jupiter","Saturn","Uranus","Neptune","Pluto","Moon's Node  ");
$p = array("sun","moon","mercury","venus","mars","jupiter","saturn","uranus","neptune","pluto","nnode");
for ($i=0; $i<11; $i++) {

	// RETRIEVE THE CURRENT SIGN FROM THE DATABASE
	$query = db_select('field_data_natal_' . $p[$i] . '_sign', 'natal_' . $p[$i] . '_sign_value')
		->fields('natal_' . $p[$i] . '_sign_value')
		->condition('entity_id', 2151,'=')
		->execute()
		->fetchAssoc();
	$ss = $query['natal_' . $p[$i] . '_sign_value'];

	// RETRIEVE THE CURRENT DEGREE FROM THE DATABASE
	$query = db_select('field_data_natal_' . $p[$i] . '_degree', 'natal_' . $p[$i] . '_degree_value')
		->fields('natal_' . $p[$i] . '_degree_value')
		->condition('entity_id', 2151,'=')
		->execute()
		->fetchAssoc();
	$sd = $query['natal_' . $p[$i] . '_degree_value'];

	// RETRIEVE THE CURRENT MINUTE FROM THE DATABASE
	$query = db_select('field_data_natal_' . $p[$i] . '_minute', 'natal_' . $p[$i] . '_minute_value')
		->fields('natal_' . $p[$i] . '_minute_value')
		->condition('entity_id', 2151,'=')
		->execute()
		->fetchAssoc();
	$sm = $query['natal_' . $p[$i] . '_minute_value'];
	
	// PRINT OUT THE TABLE
	$output = "<table><tr><td>";
	$output .= "<a href=\"" . $p[$i] . "-" . strtolower(sign_long($ss)) . "\">
		<img src=\"sites/default/files/glyphs/".$p[$i].".jpg\" height=\"40\" width=\"40\">
			in
				<img src=\"sites/default/files/glyphs/". substr(strtolower(sign_long($ss)), 0, 3) .".jpg\" height=\"40\" width=\"40\"></a>
			<td>".$sd."&#176;".$sm."'</td>";
	$output .= "</td></tr></table>";
	echo $output;
}

?>