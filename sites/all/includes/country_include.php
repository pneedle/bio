<?php

function rstrstr($haystack,$needle) {
  return substr($haystack, 0,strpos($haystack, $needle));
}

// 1. get the url of the current page (ex: "http://localhost/bio/country/north-korea")
$raw_url = $_SERVER['HTTP_HOST'] . request_uri();

// 2. remove the prefix to leave the last argument - the country (ex. "north-korea")
$replace = $_SERVER['HTTP_HOST'] . "/bio/country/";  // (ex: localhost/bio/country/)
//$replace_species = $_SERVER['HTTP_HOST'] . "/bio/species/";  // (ex: localhost/bio/species/)
// echo "replace_country: " . $replace_country . "<br />";

$lc_country_hyphenated = str_replace("$replace","","$raw_url");
//echo "the country argument in the url is: " . $lc_country_hyphenated . "<br />";

// 3. remove the hyphen (ex. "north korea")
$lc_country = str_replace("-"," ","$lc_country_hyphenated");

// 4. Uppercase first letter (ex. "North Korea")
$uc_country = ucwords($lc_country);

$uc_country = str_replace(" And "," and ","$uc_country");
$uc_country = str_replace(" In "," in ","$uc_country");
$uc_country = str_replace(" The "," the ","$uc_country");
$uc_country = str_replace(" Of "," of ","$uc_country");
//echo $uc_country . "<br />";

// 5. search the db table for instances where title starts with $uc_country (ex. "North Korea")
// $query = db_query("SELECT entity_id, field_stamp_image_title FROM {field_data_field_stamp_image}");
$query = db_query("SELECT fid, filename, uri FROM {file_managed}");

$records = $query->fetchAll();
foreach ($records as $record) {

  $string = $record->filename; //$record->field_stamp_image_title;
  $search = $lc_country_hyphenated;
  $found = strpos($string, $search);

  //echo "string: " . $string . "<br />";
  //echo "search: " . $search . "<br />";
  //echo "found: " . $found . "<br />";

  if (strlen($found) != 0) {
    //echo "string: " . $string;
    //echo '<br />';

    $imagepath_stamp = "http://localhost/bio/sites/default/files/Image_Stamp/" . $string;
    //echo $imagepath_stamp; //http://localhost/bio/sites/default/files/Image_Stamp/acer-rubrum_canada_1994.jpg
    //echo "<br />";


    $imagepath_species = $search;  //$replace_species . $search;
    // echo $imagepath_species;  // ex: "http://localhost/bio/species/north-korea"
    $imagepath_species = str_replace($lc_country_hyphenated,$string,$imagepath_species);
    // echo $imagepath_species;  // ex: "http://localhost/bio/species/pleurotus-ostreatus_north-korea.jpg"

    $imagepath_species = rstrstr($imagepath_species, "_");
    $genus_species = $imagepath_species;
    // echo "imagepath_species: " . $imagepath_species . "<br />";

    $imagepath_species = "http://localhost/bio/species/" . $imagepath_species;
    // want to get to: //http://localhost/bio/species/acer-rubrum

    echo "<p>";
    echo "<div class=\"country-stamp\">"; // displays "width = 50%"" for image to fit 2 per column
    echo "<a href=" . $imagepath_species . ">";
    echo "<img src=" . $imagepath_stamp . " alt=\"{$string}\" title=\"{$genus_species}\">";
    echo "</a>";
    echo "</div>";
    echo "</p>";
  }

}
