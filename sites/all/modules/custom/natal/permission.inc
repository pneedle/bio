<?php
// if the uid=0 then the user is "anonymous"
if ($user->uid == 0) {
	if ($result) {
		while ($row = $result->fetchAssoc()) {
			$nid = $row['nid'];
			$query = db_select($table, $field)
				->fields($field)
				->condition('entity_id', $nid,'=')
				->execute()
				->fetchAssoc();
			$result_pp = $query[$field];
			if ($result_pp == "Public") { // if the uid = 0 then access to "all"Public"" data
				array_push($full_name, $row['title']);
			}
	  	}
	}
} else {
	if ($result) {
		while ($row = $result->fetchAssoc()) {
			$nid = $row['nid'];
			$query = db_select($table, $field)
				->fields($field)
				->condition('entity_id', $nid,'=')
				->execute()
				->fetchAssoc();
			$result_pp = $query[$field];
			if (($result_pp == "Public") || ($result_pp == "Private")) { // if the uid != 0 then access to all data
				array_push($full_name, $row['title']);
			}
	  	}
	}
}
?>