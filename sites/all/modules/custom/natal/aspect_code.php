<?php
global $user;
$daily_id = 2151;

$title = drupal_get_title();  // e.g., "mercury_saturn_square"
$components = explode('_',$title);
$planet_0 = ucfirst($components[0]);
$planet_1 = ucfirst($components[1]);
$angle = $components[2];
$result3 = "";
$result4 = "";

$field = "natal_" . $title . "_value";  // e.g.,: "natal_mercury_saturn_square_value"
$table = "field_data_natal_" . $title ;  // e.g., "field_data_natal_mercury_saturn_square"

$shared_aspect = $planet_0 . " " . $angle . " " . $planet_1;
echo "<br />Others with the <span style=\"color:red\"; >" . $shared_aspect . " </span>aspect include:<br />";
echo "<span style=\"font-size:smaller\"; >Note: the additional house information.</span><br /><br />";

$result = db_query("SELECT entity_id, $field FROM {$table}")->fetchAll(PDO::FETCH_ASSOC);

// select all the entries in the table that are not NULL, i.e., a major aspect exists
foreach ($result as $record) {
	if($record[$field] != NULL) {
		$result2 = db_query("SELECT nid, title, type FROM {node}")->fetchAll(PDO::FETCH_ASSOC);
		foreach ($result2 as $record2) {
			if(($record2['type'] == 'natal') && ($record2['nid'] == $record['entity_id']) && ($record['entity_id'] != $daily_id)) {  // omit daily_daily = 2151
				$full = explode('_',$record2['title']);
				$first = ucfirst($full[1]);
				$last = ucfirst($full[0]);
				$nid = $record2['nid'];
				
				$t3 = explode("_", $table);
				$t4 = explode("_", $table);
				$table3 = "field_data_natal_" . $t3[3]. "_house";  // e.g., "field_data_natal_mercury_house"
				$table4 = "field_data_natal_" . $t4[4]. "_house";  // e.g., "field_data_natal_mercury_house"
				if ($t3[3] != "asc") { 
					$column3 = "natal_" . $t3[3]. "_house_value";  // e.g., "natal_mercury_house_value" 
					$result3 = db_query("SELECT $column3 FROM {$table3} WHERE entity_id = $nid")->fetchField(); // e.g., 3rd house
				} else {
					$result3 = "01";
				}
				if ($t4[4] != "asc") {
					$column4 = "natal_" . $t4[4]. "_house_value";  // e.g., "natal_mercury_house_value" 
					$result4 = db_query("SELECT $column4 FROM {$table4} WHERE entity_id = $nid")->fetchField(); // e.g., 	5th house
				} else {
					$result4 = "01";
				}

				// code for permission to view "Other people with this aspect include:"
				// Get a single value out of the database (Public or Private).
				$pub_pri = db_query("SELECT natal_pub_pri_value FROM {field_data_natal_pub_pri} WHERE entity_id = $nid")->fetchField();
				
				if ($user->uid == 0) { // When uid=0, then the user is "anonymous" ==> only view public records
					if ($pub_pri == "Public") {
            // echo $nid . "<br />";
						echo "<table><col style=\"width:40%\"><col style=\"width:50%\"><col style=\"width:10%\"><tr>";
						echo "<td><a href=\"../natal/" . $record2['title'] . "\"<span class=\"fullname\" ; >"  . $first . " " . $last . ":</span></a></td>";
						echo "<td> <img src=\"../sites/default/files/glyphs/". $components[0] . ".jpg\" height=\"30\" width=\"23\">";
						echo "<img src=\"../sites/default/files/glyphs/". $result3 . ".jpg\" height=\"30\" width=\"23\">";
						echo "&nbsp;&nbsp;<img src=\"../sites/default/files/glyphs/". $angle . ".jpg\" height=\"30\" width=\"23\">";
						echo "&nbsp;&nbsp;<img src=\"../sites/default/files/glyphs/". $components[1] . ".jpg\" height=\"30\" width=\"23\">";
						echo "<img src=\"../sites/default/files/glyphs/". $result4 . ".jpg\" height=\"30\" width=\"23\"></td>";
						echo "<td> " . $record[$field] . "&deg;</td>";
						echo "</tr></table>";
					}
				} else { // When (uid != 0), then the user has logged in ==> can view both private and public records
					if (($pub_pri == "Private") || ($pub_pri == "Public")) {
//						echo $nid . "<br />";
						echo "<table><col style=\"width:40%\"><col style=\"width:50%\"><col style=\"width:10%\"><tr>";
						echo "<td><a href=\"../natal/" . $record2['title'] . "\"<span class=\"fullname\" ; >"  . $first . " " . $last . ":</span></a></td>";
						echo "<td> <img src=\"../sites/default/files/glyphs/". $components[0] . ".jpg\" height=\"30\" width=\"23\">";
						echo "<img src=\"../sites/default/files/glyphs/". $result3 . ".jpg\" height=\"30\" width=\"23\">";
						echo "&nbsp;&nbsp;<img src=\"../sites/default/files/glyphs/". $angle . ".jpg\" height=\"30\" width=\"23\">";
						echo "&nbsp;&nbsp;<img src=\"../sites/default/files/glyphs/". $components[1] . ".jpg\" height=\"30\" width=\"23\">";
						echo "<img src=\"../sites/default/files/glyphs/". $result4 . ".jpg\" height=\"30\" width=\"23\"></td>";
						echo "<td> " . $record[$field] . "&deg;</td>";
						echo "</tr></table>";
					}
				}
				
			}
		}
	}
}

// Others with this (natal) aspect include: 
// echo "planet1 = " . $planet_0 . "<br />";  // e.g., "Mercury"
// echo "planet2 = " . $planet_1 . "<br />";  // e.g., "Saturn"
// echo "aspect = " . $angle . "<br />";  // e.g., "square"

?>