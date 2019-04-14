<?php
require_once 'sites/all/modules/custom/natal/functions.php';

// Get the Title of the natal node
$title = drupal_get_title();  // e.g., "Bush_George-HW"

// Get the node ID (nid) from the node title (TABLE: node; COLUMN: nid)
$query = db_select('node', 'nid')
    ->fields('nid')
    ->condition('title', $title,'=')
    ->execute()
    ->fetchAssoc();
$nid = $query['nid'];

// Create an array of planets and asc, nnode
$planet = array("sun","moon","mercury","venus","mars","jupiter","saturn","uranus","neptune","pluto","nnode","asc");

/////////////////////////////////////////////////
// identifies aspects in a chart
/////////////////////////////////////////////////
// GRAND TRINE
echo "Grand Trine<br />";
$grand_trine = 0;
for ($a=0; $a<12; $a++) {
	for ($b=0; $b<12; $b++) {
		for ($c=0; $c<12; $c++) {
			if(($a<$b) && ($b<$c)) {
				if(($planet[$b] !="") && ($planet[$c] !="")){
//					echo $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c] . "<br />";
					
					$table_name_sign_ab = "field_data_natal_" . $planet[$a] . "_" . $planet[$b] . "_trine";
					$column_name_sign_ab = "natal_" . $planet[$a] . "_" . $planet[$b] . "_trine_value";
					$query = db_select($table_name_sign_ab, $column_name_sign_ab)
					    ->fields($column_name_sign_ab)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_ab = $query[$column_name_sign_ab];
					
					$table_name_sign_ac = "field_data_natal_" . $planet[$a] . "_" . $planet[$c] . "_trine";
					$column_name_sign_ac = "natal_" . $planet[$a] . "_" . $planet[$c] . "_trine_value";
					$query = db_select($table_name_sign_ac, $column_name_sign_ac)
					    ->fields($column_name_sign_ac)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_ac = $query[$column_name_sign_ac];
					
					$table_name_sign_bc = "field_data_natal_" . $planet[$b] . "_" . $planet[$c] . "_trine";
					$column_name_sign_bc = "natal_" . $planet[$b] . "_" . $planet[$c] . "_trine_value";
					$query = db_select($table_name_sign_bc, $column_name_sign_bc)
					    ->fields($column_name_sign_bc)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_bc = $query[$column_name_sign_bc];

					if(($column_name_sign_ab != NULL) && ($column_name_sign_ac != NULL) && ($column_name_sign_bc != NULL)) {
						echo "<span style=\"color:blue\"; >";
						echo "<a href=../grand-trine/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c] . "</a><br />";
						echo "</span>";
						$grand_trine = 1;
					}
				}
			}
		}
	}
}
if ($grand_trine == 0) {
	echo "(none present)<br /><br />";
} else {
	echo "<br />";
}

// T-SQUARE
echo "T-Square<br />";
$t_square = 0;
for ($a=0; $a<12; $a++) {
	for ($b=0; $b<12; $b++) {
		for ($c=0; $c<12; $c++) {
			if(($a<$b) && ($b<$c)) {
				if(($planet[$b] !="") && ($planet[$c] !="")) {
//					echo $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c] . "<br />";
					$table_name_sign_ab = "field_data_natal_" . $planet[$a] . "_" . $planet[$b] . "_opposite";
					$column_name_sign_ab = "natal_" . $planet[$a] . "_" . $planet[$b] . "_opposite_value";
					$query = db_select($table_name_sign_ab, $column_name_sign_ab)
					    ->fields($column_name_sign_ab)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_ab = $query[$column_name_sign_ab];
					
					$table_name_sign_ac = "field_data_natal_" . $planet[$a] . "_" . $planet[$c] . "_square";
					$column_name_sign_ac = "natal_" . $planet[$a] . "_" . $planet[$c] . "_square_value";
					$query = db_select($table_name_sign_ac, $column_name_sign_ac)
					    ->fields($column_name_sign_ac)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_ac = $query[$column_name_sign_ac];
					
					$table_name_sign_bc = "field_data_natal_" . $planet[$b] . "_" . $planet[$c] . "_square";
					$column_name_sign_bc = "natal_" . $planet[$b] . "_" . $planet[$c] . "_square_value";
					$query = db_select($table_name_sign_bc, $column_name_sign_bc)
					    ->fields($column_name_sign_bc)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_bc = $query[$column_name_sign_bc];

					if(($column_name_sign_ab != NULL) && ($column_name_sign_ac != NULL) && ($column_name_sign_bc != NULL)) {
						echo "<span style=\"color:blue\"; >";
						echo "<a href=../t-square/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c] . "</a><br />";
						echo "</span>";
						$t_square = 1;
					}
				}
				if(($planet[$b] !="") && ($planet[$c] !="")) {
//					echo $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c] . "<br />";
					$table_name_sign_ab = "field_data_natal_" . $planet[$a] . "_" . $planet[$b] . "_square";
					$column_name_sign_ab = "natal_" . $planet[$a] . "_" . $planet[$b] . "_square_value";
					$query = db_select($table_name_sign_ab, $column_name_sign_ab)
					    ->fields($column_name_sign_ab)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_ab = $query[$column_name_sign_ab];

					$table_name_sign_ac = "field_data_natal_" . $planet[$a] . "_" . $planet[$c] . "_opposite";
					$column_name_sign_ac = "natal_" . $planet[$a] . "_" . $planet[$c] . "_opposite_value";
					$query = db_select($table_name_sign_ac, $column_name_sign_ac)
					    ->fields($column_name_sign_ac)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_ac = $query[$column_name_sign_ac];

					$table_name_sign_bc = "field_data_natal_" . $planet[$b] . "_" . $planet[$c] . "_square";
					$column_name_sign_bc = "natal_" . $planet[$b] . "_" . $planet[$c] . "_square_value";
					$query = db_select($table_name_sign_bc, $column_name_sign_bc)
					    ->fields($column_name_sign_bc)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_bc = $query[$column_name_sign_bc];

					if(($column_name_sign_ab != NULL) && ($column_name_sign_ac != NULL) && ($column_name_sign_bc != NULL)) {
						echo "<span style=\"color:blue\"; >";
						echo "<a href=../t-square/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c] . "</a><br />";
						echo "</span>";
						$t_square = 1;
					}
				}
				if(($planet[$b] !="") && ($planet[$c] !="")){	
//					echo $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c] . "<br />";
					$table_name_sign_ab = "field_data_natal_" . $planet[$a] . "_" . $planet[$b] . "_square";
					$column_name_sign_ab = "natal_" . $planet[$a] . "_" . $planet[$b] . "_square_value";
					$query = db_select($table_name_sign_ab, $column_name_sign_ab)
					    ->fields($column_name_sign_ab)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_ab = $query[$column_name_sign_ab];

					$table_name_sign_ac = "field_data_natal_" . $planet[$a] . "_" . $planet[$c] . "_square";
					$column_name_sign_ac = "natal_" . $planet[$a] . "_" . $planet[$c] . "_square_value";
					$query = db_select($table_name_sign_ac, $column_name_sign_ac)
					    ->fields($column_name_sign_ac)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_ac = $query[$column_name_sign_ac];

					$table_name_sign_bc = "field_data_natal_" . $planet[$b] . "_" . $planet[$c] . "_opposite";
					$column_name_sign_bc = "natal_" . $planet[$b] . "_" . $planet[$c] . "_opposite_value";
					$query = db_select($table_name_sign_bc, $column_name_sign_bc)
					    ->fields($column_name_sign_bc)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_bc = $query[$column_name_sign_bc];

					if(($column_name_sign_ab != NULL) && ($column_name_sign_ac != NULL) && ($column_name_sign_bc != NULL)) {
						echo "<span style=\"color:blue\"; >";
						echo "<a href=../t-square/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c] . "</a><br />";
						echo "</span>";
						$t_square = 1;
					}
				}
			}
		}
	}
}
if ($t_square == 0) {
	echo "(none present)<br /><br />";
} else {
	echo "<br />";
}

// GRAND CROSS
$g_cross = 0; // if zero, then echo "none present"
$grand_cross = array();
echo "Grand Cross<br />";
$orb = 8.0;
//echo "orb: " . $orb . "<br />";
for ($a=0; $a<12; $a++) {
	$table_name_sign_a = "field_data_natal_" . $planet[$a] . "_sign";
	$column_name_sign_a = "natal_" . $planet[$a] . "_sign_value";
	$query = db_select($table_name_sign_a, $column_name_sign_a)
	    ->fields($column_name_sign_a)
	    ->condition('entity_id', $nid,'=')
	    ->execute()
	    ->fetchAssoc();
	$column_name_sign_a = $query[$column_name_sign_a];

	$table_name_degree_a = "field_data_natal_" . $planet[$a] . "_degree";
	$column_name_degree_a = "natal_" . $planet[$a] . "_degree_value";
	$query = db_select($table_name_degree_a, $column_name_degree_a)
	    ->fields($column_name_degree_a)
	    ->condition('entity_id', $nid,'=')
	    ->execute()
	    ->fetchAssoc();
	$column_name_degree_a = $query[$column_name_degree_a];

	$table_name_minute_a = "field_data_natal_" . $planet[$a] . "_minute";
	$column_name_minute_a = "natal_" . $planet[$a] . "_minute_value";
	$query = db_select($table_name_minute_a, $column_name_minute_a)
	    ->fields($column_name_minute_a)
	    ->condition('entity_id', $nid,'=')
	    ->execute()
	    ->fetchAssoc();
	$column_name_minute_a = $query[$column_name_minute_a];
	array_push($grand_cross, angle($column_name_sign_a, $column_name_degree_a, $column_name_minute_a));
}
$abcd = array();

for ($a=0; $a<12; $a++) {
	for ($b=0; $b<12; $b++) {
		for ($c=0; $c<12; $c++) {
			for ($d=0; $d<12; $d++) {
				if(($a<$b) && ($b<$c) && ($c<$d)) {
					$planet_abcd = $planet[$a].$grand_cross[$a]."-".$planet[$b].$grand_cross[$b]."-".$planet[$c].$grand_cross[$c]."-".$planet[$d].$grand_cross[$d];
					array_push($abcd, $planet_abcd);

					$ab = abs($grand_cross[$a] - $grand_cross[$b]);
					$ac = abs($grand_cross[$a] - $grand_cross[$c]);
					$ad = abs($grand_cross[$a] - $grand_cross[$d]);
					$bc = abs($grand_cross[$b] - $grand_cross[$c]);
					$bd = abs($grand_cross[$b] - $grand_cross[$d]);
					$cd = abs($grand_cross[$c] - $grand_cross[$d]);

					if (((($ab) > (180-$orb)) && (($ab) < (180+$orb))) && ((($cd) > (180-$orb)) && (($cd) < (180+$orb)))) {
						if (((($ac) > (90-$orb)) && (($ac) < (90+$orb)) || (($ac) > (270-$orb)) && (($ac) < (270+$orb)))) {
							if (((($ad) > (90-$orb)) && (($ad) < (90+$orb)) || (($ad) > (270-$orb)) && (($ad) < (270+$orb)))) {
								echo "<span style=\"color:blue\"; >";
								echo "<a href=../grand-cross/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c]. "-" . $planet[$d] . "</a><br />";
								echo "</span>";
								$g_cross =1;
								break;
							}
						}
					}
					if (((($ac) > (180-$orb)) && (($ac) < (180+$orb))) && ((($bd) > (180-$orb)) && (($bd) < (180+$orb)))) {
						if (((($ab) > (90-$orb)) && (($ab) < (90+$orb)) || (($ab) > (270-$orb)) && (($ab) < (270+$orb)))) {
							if (((($ad) > (90-$orb)) && (($ad) < (90+$orb)) || (($ad) > (270-$orb)) && (($ad) < (270+$orb)))) {
								//echo $planet[$a]."-".$planet[$b]."-".$planet[$c]."-".$planet[$d]."<br />";
								echo "<span style=\"color:blue\"; >";
								echo "<a href=../grand-cross/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c]. "-" . $planet[$d] . "</a><br />";
								echo "</span>";
								$g_cross =1;
								break;
							}
						}
					}
					if (((($ad) > (180-$orb)) && (($ad) < (180+$orb))) && ((($bc) > (180-$orb)) && (($bc) < (180+$orb)))) {
						if (((($ab) > (90-$orb)) && (($ab) < (90+$orb)) || (($ab) > (270-$orb)) && (($ab) < (270+$orb)))) {
							if (((($ac) > (90-$orb)) && (($ac) < (90+$orb)) || (($ac) > (270-$orb)) && (($ac) < (270+$orb)))) {
								//echo $planet[$a]."-".$planet[$b]."-".$planet[$c]."-".$planet[$d]."<br />";
								echo "<span style=\"color:blue\"; >";
								echo "<a href=../grand-cross/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c]. "-" . $planet[$d] . "</a><br />";
								echo "</span>";
								$g_cross =1;
								break;
							}
						}
					}

					if (((($ab) > (180-$orb)) && (($ab) < (180+$orb))) && ((($cd) > (180-$orb)) && (($cd) < (180+$orb)))) {
						if (((($bc) > (90-$orb)) && (($bc) < (90+$orb)) || (($bc) > (270-$orb)) && (($bc) < (270+$orb)))) {
							if (((($bd) > (90-$orb)) && (($bd) < (90+$orb)) || (($bd) > (270-$orb)) && (($bd) < (270+$orb)))) {
								//echo $planet[$a]."-".$planet[$b]."-".$planet[$c]."-".$planet[$d]."<br />";
								echo "<span style=\"color:blue\"; >";
								echo "<a href=../grand-cross/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c]. "-" . $planet[$d] . "</a><br />";
								echo "</span>";
								$g_cross =1;
								break;
							}
						}
					}
					if (((($bc) > (180-$orb)) && (($bc) < (180+$orb))) && ((($ad) > (180-$orb)) && (($ad) < (180+$orb)))) {
						if (((($ab) > (90-$orb)) && (($ab) < (90+$orb)) || (($ab) > (270-$orb)) && (($ab) < (270+$orb)))) {
							if (((($bd) > (90-$orb)) && (($bd) < (90+$orb)) || (($bd) > (270-$orb)) && (($bd) < (270+$orb)))) {
								//echo $planet[$a]."-".$planet[$b]."-".$planet[$c]."-".$planet[$d]."<br />";
								echo "<span style=\"color:blue\"; >";
								echo "<a href=../grand-cross/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c]. "-" . $planet[$d] . "</a><br />";
								echo "</span>";
								$g_cross =1;
								break;
							}
						}
					}
					if (((($bd) > (180-$orb)) && (($bd) < (180+$orb))) && ((($ac) > (180-$orb)) && (($ac) < (180+$orb)))) {
						if (((($ab) > (90-$orb)) && (($ab) < (90+$orb)) || (($ab) > (270-$orb)) && (($ab) < (270+$orb)))) {
							if (((($bc) > (90-$orb)) && (($bc) < (90+$orb)) || (($bc) > (270-$orb)) && (($bc) < (270+$orb)))) {
								//echo $planet[$a]."-".$planet[$b]."-".$planet[$c]."-".$planet[$d]."<br />";
								echo "<span style=\"color:blue\"; >";
								echo "<a href=../grand-cross/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c]. "-" . $planet[$d] . "</a><br />";
								echo "</span>";
								$g_cross =1;
								break;
							}
						}
					}

					if (((($bd) > (180-$orb)) && (($bd) < (180+$orb))) && ((($ac) > (180-$orb)) && (($ac) < (180+$orb)))) {
						if (((($bc) > (90-$orb)) && (($bc) < (90+$orb)) || (($bc) > (270-$orb)) && (($bc) < (270+$orb)))) {
							if (((($cd) > (90-$orb)) && (($cd) < (90+$orb)) || (($cd) > (270-$orb)) && (($cd) < (270+$orb)))) {
								//echo $planet[$a]."-".$planet[$b]."-".$planet[$c]."-".$planet[$d]."<br />";
								echo "<span style=\"color:blue\"; >";
								echo "<a href=../grand-cross/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c]. "-" . $planet[$d] . "</a><br />";
								echo "</span>";
								$g_cross =1;
								break;
							}
						}
					}
					if (((($bc) > (180-$orb)) && (($bc) < (180+$orb))) && ((($ad) > (180-$orb)) && (($ad) < (180+$orb)))) {
						if (((($ac) > (90-$orb)) && (($ac) < (90+$orb)) || (($ac) > (270-$orb)) && (($ac) < (270+$orb)))) {
							if (((($cd) > (90-$orb)) && (($cd) < (90+$orb)) || (($cd) > (270-$orb)) && (($cd) < (270+$orb)))) {
								//echo $planet[$a]."-".$planet[$b]."-".$planet[$c]."-".$planet[$d]."<br />";
								echo "<span style=\"color:blue\"; >";
								echo "<a href=../grand-cross/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c]. "-" . $planet[$d] . "</a><br />";
								echo "</span>";
								$g_cross =1;
								break;
							}
						}
					}
					if (((($ab) > (180-$orb)) && (($ab) < (180+$orb))) && ((($cd) > (180-$orb)) && (($cd) < (180+$orb)))) {
						if (((($ac) > (90-$orb)) && (($ac) < (90+$orb)) || (($ac) > (270-$orb)) && (($ac) < (270+$orb)))) {
							if (((($bc) > (90-$orb)) && (($bc) < (90+$orb)) || (($bc) > (270-$orb)) && (($bc) < (270+$orb)))) {
								//echo $planet[$a]."-".$planet[$b]."-".$planet[$c]."-".$planet[$d]."<br />";
								echo "<span style=\"color:blue\"; >";
								echo "<a href=../grand-cross/>" . $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c]. "-" . $planet[$d] . "</a><br />";
								echo "</span>";
								$g_cross =1;
								break;
							}
						}
					}
				}
			} 
		}
	}
}

//print "<pre>";
//print_r($abcd);
//print "</pre>";
//echo $abcd[182];

if ($g_cross == 0) {
	echo "(none present)<br /><br />";
} else {
	echo "<br />";
}


// STELLUM (3 or more planets)
/*
echo "Stellum<br />";
for ($a=0; $a<13; $a++) {
	for ($b=0; $b<13; $b++) {
		for ($c=0; $c<13; $c++) {
			if(($a<$b) && ($b<$c)) {
				if(($planet[$b] !="") && ($planet[$c] !="")){
//					echo $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c] . "<br />";
					
					$table_name_sign_ab = "field_data_natal_" . $planet[$a] . "_" . $planet[$b] . "_conjunct";
					$column_name_sign_ab = "natal_" . $planet[$a] . "_" . $planet[$b] . "_conjunct_value";
					$query = db_select($table_name_sign_ab, $column_name_sign_ab)
					    ->fields($column_name_sign_ab)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_ab = $query[$column_name_sign_ab];
					
					$table_name_sign_ac = "field_data_natal_" . $planet[$a] . "_" . $planet[$c] . "_conjunct";
					$column_name_sign_ac = "natal_" . $planet[$a] . "_" . $planet[$c] . "_conjunct_value";
					$query = db_select($table_name_sign_ac, $column_name_sign_ac)
					    ->fields($column_name_sign_ac)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_ac = $query[$column_name_sign_ac];
					
					$table_name_sign_bc = "field_data_natal_" . $planet[$b] . "_" . $planet[$c] . "_conjunct";
					$column_name_sign_bc = "natal_" . $planet[$b] . "_" . $planet[$c] . "_conjunct_value";
					$query = db_select($table_name_sign_bc, $column_name_sign_bc)
					    ->fields($column_name_sign_bc)
					    ->condition('entity_id', $nid,'=')
					    ->execute()
					    ->fetchAssoc();
					$column_name_sign_bc = $query[$column_name_sign_bc];

					if(($column_name_sign_ab != NULL) && ($column_name_sign_ac != NULL) && ($column_name_sign_bc != NULL)) {
						echo "<span style=\"color:blue\"; >";
						echo $planet[$a] . "-" . $planet[$b] . "-" . $planet[$c];
						echo "</span><br />";
					}
				}
			}
		}
	}
}
echo "<br />";
*/
?>