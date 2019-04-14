<?php
require_once 'sites/all/modules/custom/natal/functions.php';
require_once 'simple_html_dom.php';
$ss = "";
$moon_sign = "";
$url = "";

//echo "<pre>";
$query = db_select('field_data_natal_moon_sign', 'natal_moon_sign_value')
    ->fields('natal_moon_sign_value')
    ->condition('entity_id', 2151,'=')
    ->execute()
    ->fetchAssoc();
$ss = $query['natal_moon_sign_value'];
//echo "The natal Moon sign is: " . $ss;
//echo "</pre>";

$moon_sign = sign_long($ss);
$url = "<a href=\"color/" . strtolower($moon_sign) . "-moon\">test</a>";

//echo $url;

if(isset($ss)){
    die("<script>location.href = \"color/" . strtolower($moon_sign) . "-moon\"</script>");
}

?>