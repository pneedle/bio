<?php
/////////////////////////////////////////////////
// CREATES ALL TABLES IN THE DATABASE
/////////////////////////////////////////////////
// Create field $instances for ALL CONJUNCTIONS
	$instances['natal_sun_moon_conjunct'] = array(
		'field_name'  => 'natal_sun_moon_conjunct',
		'label'       => $t('Sun-Moon conjunct'),
		'description' => $t('Sun-Moon conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_mercury_conjunct'] = array(
		'field_name'  => 'natal_sun_mercury_conjunct',
		'label'       => $t('Sun-Mercury conjunct'),
		'description' => $t('Sun-Mercury conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_venus_conjunct'] = array(
		'field_name'  => 'natal_sun_venus_conjunct',
		'label'       => $t('Sun-Venus conjunct'),
		'description' => $t('Sun-Venus conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_mars_conjunct'] = array(
		'field_name'  => 'natal_sun_mars_conjunct',
		'label'       => $t('Sun-Mars conjunct'),
		'description' => $t('Sun-Mars conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_jupiter_conjunct'] = array(
		'field_name'  => 'natal_sun_jupiter_conjunct',
		'label'       => $t('Sun-Jupiter conjunct'),
		'description' => $t('Sun-Jupiter conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_saturn_conjunct'] = array(
		'field_name'  => 'natal_sun_saturn_conjunct',
		'label'       => $t('Sun-Saturn conjunct'),
		'description' => $t('Sun-Saturn conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_uranus_conjunct'] = array(
		'field_name'  => 'natal_sun_uranus_conjunct',
		'label'       => $t('Sun-Uranus conjunct'),
		'description' => $t('Sun-Uranus conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_neptune_conjunct'] = array(
		'field_name'  => 'natal_sun_neptune_conjunct',
		'label'       => $t('Sun-Neptune conjunct'),
		'description' => $t('Sun-Neptune conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_pluto_conjunct'] = array(
		'field_name'  => 'natal_sun_pluto_conjunct',
		'label'       => $t('Sun-Pluto conjunct'),
		'description' => $t('Sun-Pluto conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_nnode_conjunct'] = array(
		'field_name'  => 'natal_sun_nnode_conjunct',
		'label'       => $t('Sun-North Node conjunct'),
		'description' => $t('Sun-North Node conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_asc_conjunct'] = array(
		'field_name'  => 'natal_sun_asc_conjunct',
		'label'       => $t('Sun-Ascendent conjunct'),
		'description' => $t('Sun-Ascendent conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_mercury_conjunct'] = array(
		'field_name'  => 'natal_moon_mercury_conjunct',
		'label'       => $t('Moon-Mercury conjunct'),
		'description' => $t('Moon-Mercury conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_venus_conjunct'] = array(
		'field_name'  => 'natal_moon_venus_conjunct',
		'label'       => $t('Moon-Venus conjunct'),
		'description' => $t('Moon-Venus conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_mars_conjunct'] = array(
		'field_name'  => 'natal_moon_mars_conjunct',
		'label'       => $t('Moon-Mars conjunct'),
		'description' => $t('Moon-Mars conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_jupiter_conjunct'] = array(
		'field_name'  => 'natal_moon_jupiter_conjunct',
		'label'       => $t('Moon-Jupiter conjunct'),
		'description' => $t('Moon-Jupiter conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_saturn_conjunct'] = array(
		'field_name'  => 'natal_moon_saturn_conjunct',
		'label'       => $t('Moon-Saturn conjunct'),
		'description' => $t('Moon-Saturn conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_uranus_conjunct'] = array(
		'field_name'  => 'natal_moon_uranus_conjunct',
		'label'       => $t('Moon-Uranus conjunct'),
		'description' => $t('Moon-Uranus conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_neptune_conjunct'] = array(
		'field_name'  => 'natal_moon_neptune_conjunct',
		'label'       => $t('Moon-Neptune conjunct'),
		'description' => $t('Moon-Neptune conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_pluto_conjunct'] = array(
		'field_name'  => 'natal_moon_pluto_conjunct',
		'label'       => $t('Moon-Pluto conjunct'),
		'description' => $t('Moon-Pluto conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_nnode_conjunct'] = array(
		'field_name'  => 'natal_moon_nnode_conjunct',
		'label'       => $t('Moon-North Node conjunct'),
		'description' => $t('Moon-North Node conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_asc_conjunct'] = array(
		'field_name'  => 'natal_moon_asc_conjunct',
		'label'       => $t('Moon-Ascendent conjunct'),
		'description' => $t('Moon-Ascendent conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_venus_conjunct'] = array(
		'field_name'  => 'natal_mercury_venus_conjunct',
		'label'       => $t('Mercury-Venus conjunct'),
		'description' => $t('Mercury-Venus conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_mars_conjunct'] = array(
		'field_name'  => 'natal_mercury_mars_conjunct',
		'label'       => $t('Mercury-Mars conjunct'),
		'description' => $t('Mercury-Mars conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_jupiter_conjunct'] = array(
		'field_name'  => 'natal_mercury_jupiter_conjunct',
		'label'       => $t('Mercury-Jupiter conjunct'),
		'description' => $t('Mercury-Jupiter conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_saturn_conjunct'] = array(
		'field_name'  => 'natal_mercury_saturn_conjunct',
		'label'       => $t('Mercury-Saturn conjunct'),
		'description' => $t('Mercury-Saturn conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_uranus_conjunct'] = array(
		'field_name'  => 'natal_mercury_uranus_conjunct',
		'label'       => $t('Mercury-Uranus conjunct'),
		'description' => $t('Mercury-Uranus conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_neptune_conjunct'] = array(
		'field_name'  => 'natal_mercury_neptune_conjunct',
		'label'       => $t('Mercury-Neptune conjunct'),
		'description' => $t('Mercury-Neptune conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_pluto_conjunct'] = array(
		'field_name'  => 'natal_mercury_pluto_conjunct',
		'label'       => $t('Mercury-Pluto conjunct'),
		'description' => $t('Mercury-Pluto conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_nnode_conjunct'] = array(
		'field_name'  => 'natal_mercury_nnode_conjunct',
		'label'       => $t('Mercury-North Node conjunct'),
		'description' => $t('Mercury-North Node conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_asc_conjunct'] = array(
		'field_name'  => 'natal_mercury_asc_conjunct',
		'label'       => $t('Mercury-Ascendent conjunct'),
		'description' => $t('Mercury-Ascendent conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);	
	$instances['natal_venus_mars_conjunct'] = array(
		'field_name'  => 'natal_venus_mars_conjunct',
		'label'       => $t('Venus-Mars conjunct'),
		'description' => $t('Venus-Mars conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_jupiter_conjunct'] = array(
		'field_name'  => 'natal_venus_jupiter_conjunct',
		'label'       => $t('Venus-Jupiter conjunct'),
		'description' => $t('Venus-Jupiter conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_saturn_conjunct'] = array(
		'field_name'  => 'natal_venus_saturn_conjunct',
		'label'       => $t('Venus-Saturn conjunct'),
		'description' => $t('Venus-Saturn conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_uranus_conjunct'] = array(
		'field_name'  => 'natal_venus_uranus_conjunct',
		'label'       => $t('Venus-Uranus conjunct'),
		'description' => $t('Venus-Uranus conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_neptune_conjunct'] = array(
		'field_name'  => 'natal_venus_neptune_conjunct',
		'label'       => $t('Venus-Neptune conjunct'),
		'description' => $t('Venus-Neptune conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_pluto_conjunct'] = array(
		'field_name'  => 'natal_venus_pluto_conjunct',
		'label'       => $t('Venus-Pluto conjunct'),
		'description' => $t('Venus-Pluto conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_nnode_conjunct'] = array(
		'field_name'  => 'natal_venus_nnode_conjunct',
		'label'       => $t('Venus-North Node conjunct'),
		'description' => $t('Venus-North Node conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_asc_conjunct'] = array(
		'field_name'  => 'natal_venus_asc_conjunct',
		'label'       => $t('Venus-Ascendent conjunct'),
		'description' => $t('Venus-Ascendent conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_jupiter_conjunct'] = array(
		'field_name'  => 'natal_mars_jupiter_conjunct',
		'label'       => $t('Mars-Jupiter conjunct'),
		'description' => $t('Mars-Jupiter conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_saturn_conjunct'] = array(
		'field_name'  => 'natal_mars_saturn_conjunct',
		'label'       => $t('Mars-Saturn conjunct'),
		'description' => $t('Mars-Saturn conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_uranus_conjunct'] = array(
		'field_name'  => 'natal_mars_uranus_conjunct',
		'label'       => $t('Mars-Uranus conjunct'),
		'description' => $t('Mars-Uranus conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_neptune_conjunct'] = array(
		'field_name'  => 'natal_mars_neptune_conjunct',
		'label'       => $t('Mars-Neptune conjunct'),
		'description' => $t('Mars-Neptune conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_pluto_conjunct'] = array(
		'field_name'  => 'natal_mars_pluto_conjunct',
		'label'       => $t('Mars-Pluto conjunct'),
		'description' => $t('Mars-Pluto conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_nnode_conjunct'] = array(
		'field_name'  => 'natal_mars_nnode_conjunct',
		'label'       => $t('Mars-North Node conjunct'),
		'description' => $t('Mars-North Node conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_asc_conjunct'] = array(
		'field_name'  => 'natal_mars_asc_conjunct',
		'label'       => $t('Mars-Ascendent conjunct'),
		'description' => $t('Mars-Ascendent conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_saturn_conjunct'] = array(
		'field_name'  => 'natal_jupiter_saturn_conjunct',
		'label'       => $t('Jupiter-Saturn conjunct'),
		'description' => $t('Jupiter-Saturn conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_uranus_conjunct'] = array(
		'field_name'  => 'natal_jupiter_uranus_conjunct',
		'label'       => $t('Jupiter-Uranus conjunct'),
		'description' => $t('Jupiter-Uranus conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_neptune_conjunct'] = array(
		'field_name'  => 'natal_jupiter_neptune_conjunct',
		'label'       => $t('Jupiter-Neptune conjunct'),
		'description' => $t('Jupiter-Neptune conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_pluto_conjunct'] = array(
		'field_name'  => 'natal_jupiter_pluto_conjunct',
		'label'       => $t('Jupiter-Pluto conjunct'),
		'description' => $t('Jupiter-Pluto conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_nnode_conjunct'] = array(
		'field_name'  => 'natal_jupiter_nnode_conjunct',
		'label'       => $t('Jupiter-North Node conjunct'),
		'description' => $t('Jupiter-North Node conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_asc_conjunct'] = array(
		'field_name'  => 'natal_jupiter_asc_conjunct',
		'label'       => $t('Jupiter-Ascendent conjunct'),
		'description' => $t('Jupiter-Ascendent conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_uranus_conjunct'] = array(
		'field_name'  => 'natal_saturn_uranus_conjunct',
		'label'       => $t('Saturn-Uranus conjunct'),
		'description' => $t('Saturn-Uranus conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_neptune_conjunct'] = array(
		'field_name'  => 'natal_saturn_neptune_conjunct',
		'label'       => $t('Saturn-Neptune conjunct'),
		'description' => $t('Saturn-Neptune conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_pluto_conjunct'] = array(
		'field_name'  => 'natal_saturn_pluto_conjunct',
		'label'       => $t('Saturn-Pluto conjunct'),
		'description' => $t('Saturn-Pluto conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_nnode_conjunct'] = array(
		'field_name'  => 'natal_saturn_nnode_conjunct',
		'label'       => $t('Saturn-North Node conjunct'),
		'description' => $t('Saturn-North Node conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_asc_conjunct'] = array(
		'field_name'  => 'natal_saturn_asc_conjunct',
		'label'       => $t('Saturn-Ascendent conjunct'),
		'description' => $t('Saturn-Ascendent conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_neptune_conjunct'] = array(
		'field_name'  => 'natal_uranus_neptune_conjunct',
		'label'       => $t('Saturn-Neptune conjunct'),
		'description' => $t('Saturn-Neptune conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_pluto_conjunct'] = array(
		'field_name'  => 'natal_uranus_pluto_conjunct',
		'label'       => $t('Saturn-Pluto conjunct'),
		'description' => $t('Saturn-Pluto conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_nnode_conjunct'] = array(
		'field_name'  => 'natal_uranus_nnode_conjunct',
		'label'       => $t('Saturn-North Node conjunct'),
		'description' => $t('Saturn-North Node conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_asc_conjunct'] = array(
		'field_name'  => 'natal_uranus_asc_conjunct',
		'label'       => $t('Saturn-Ascendent conjunct'),
		'description' => $t('Saturn-Ascendent conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);	
	$instances['natal_neptune_pluto_conjunct'] = array(
		'field_name'  => 'natal_neptune_pluto_conjunct',
		'label'       => $t('Neptune-Pluto conjunct'),
		'description' => $t('Neptune-Pluto conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_neptune_nnode_conjunct'] = array(
		'field_name'  => 'natal_neptune_nnode_conjunct',
		'label'       => $t('Neptune-North Node conjunct'),
		'description' => $t('Neptune-North Node conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_neptune_asc_conjunct'] = array(
		'field_name'  => 'natal_neptune_asc_conjunct',
		'label'       => $t('Neptune-Ascendent conjunct'),
		'description' => $t('Neptune-Ascendent conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_pluto_nnode_conjunct'] = array(
		'field_name'  => 'natal_pluto_nnode_conjunct',
		'label'       => $t('Pluto-North Node conjunct'),
		'description' => $t('Pluto-North Node conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_pluto_asc_conjunct'] = array(
		'field_name'  => 'natal_pluto_asc_conjunct',
		'label'       => $t('Pluto-Ascendent conjunct'),
		'description' => $t('Pluto-Ascendent conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_nnode_asc_conjunct'] = array(
		'field_name'  => 'natal_nnode_asc_conjunct',
		'label'       => $t('NorthNode-Ascendent conjunct'),
		'description' => $t('NorthNode-Ascendent conjunct.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);

// Create field $instances for ALL SEXTILES
	$instances['natal_sun_moon_sextile'] = array(
		'field_name'  => 'natal_sun_moon_sextile',
		'label'       => $t('Sun-Moon sextile'),
		'description' => $t('Sun-Moon sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_mercury_sextile'] = array(
		'field_name'  => 'natal_sun_mercury_sextile',
		'label'       => $t('Sun-Mercury sextile'),
		'description' => $t('Sun-Mercury sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_venus_sextile'] = array(
		'field_name'  => 'natal_sun_venus_sextile',
		'label'       => $t('Sun-Venus sextile'),
		'description' => $t('Sun-Venus sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_mars_sextile'] = array(
		'field_name'  => 'natal_sun_mars_sextile',
		'label'       => $t('Sun-Mars sextile'),
		'description' => $t('Sun-Mars sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_jupiter_sextile'] = array(
		'field_name'  => 'natal_sun_jupiter_sextile',
		'label'       => $t('Sun-Jupiter sextile'),
		'description' => $t('Sun-Jupiter sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_saturn_sextile'] = array(
		'field_name'  => 'natal_sun_saturn_sextile',
		'label'       => $t('Sun-Saturn sextile'),
		'description' => $t('Sun-Saturn sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_uranus_sextile'] = array(
		'field_name'  => 'natal_sun_uranus_sextile',
		'label'       => $t('Sun-Uranus sextile'),
		'description' => $t('Sun-Uranus sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_neptune_sextile'] = array(
		'field_name'  => 'natal_sun_neptune_sextile',
		'label'       => $t('Sun-Neptune sextile'),
		'description' => $t('Sun-Neptune sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_pluto_sextile'] = array(
		'field_name'  => 'natal_sun_pluto_sextile',
		'label'       => $t('Sun-Pluto sextile'),
		'description' => $t('Sun-Pluto sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_nnode_sextile'] = array(
		'field_name'  => 'natal_sun_nnode_sextile',
		'label'       => $t('Sun-North Node sextile'),
		'description' => $t('Sun-North Node sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_asc_sextile'] = array(
		'field_name'  => 'natal_sun_asc_sextile',
		'label'       => $t('Sun-Ascendent sextile'),
		'description' => $t('Sun-Ascendent sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_mercury_sextile'] = array(
		'field_name'  => 'natal_moon_mercury_sextile',
		'label'       => $t('Moon-Mercury sextile'),
		'description' => $t('Moon-Mercury sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_venus_sextile'] = array(
		'field_name'  => 'natal_moon_venus_sextile',
		'label'       => $t('Moon-Venus sextile'),
		'description' => $t('Moon-Venus sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_mars_sextile'] = array(
		'field_name'  => 'natal_moon_mars_sextile',
		'label'       => $t('Moon-Mars sextile'),
		'description' => $t('Moon-Mars sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_jupiter_sextile'] = array(
		'field_name'  => 'natal_moon_jupiter_sextile',
		'label'       => $t('Moon-Jupiter sextile'),
		'description' => $t('Moon-Jupiter sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_saturn_sextile'] = array(
		'field_name'  => 'natal_moon_saturn_sextile',
		'label'       => $t('Moon-Saturn sextile'),
		'description' => $t('Moon-Saturn sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_uranus_sextile'] = array(
		'field_name'  => 'natal_moon_uranus_sextile',
		'label'       => $t('Moon-Uranus sextile'),
		'description' => $t('Moon-Uranus sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_neptune_sextile'] = array(
		'field_name'  => 'natal_moon_neptune_sextile',
		'label'       => $t('Moon-Neptune sextile'),
		'description' => $t('Moon-Neptune sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_pluto_sextile'] = array(
		'field_name'  => 'natal_moon_pluto_sextile',
		'label'       => $t('Moon-Pluto sextile'),
		'description' => $t('Moon-Pluto sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_nnode_sextile'] = array(
		'field_name'  => 'natal_moon_nnode_sextile',
		'label'       => $t('Moon-North Node sextile'),
		'description' => $t('Moon-North Node sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_asc_sextile'] = array(
		'field_name'  => 'natal_moon_asc_sextile',
		'label'       => $t('Moon-Ascendent sextile'),
		'description' => $t('Moon-Ascendent sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_venus_sextile'] = array(
		'field_name'  => 'natal_mercury_venus_sextile',
		'label'       => $t('Mercury-Venus sextile'),
		'description' => $t('Mercury-Venus sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_mars_sextile'] = array(
		'field_name'  => 'natal_mercury_mars_sextile',
		'label'       => $t('Mercury-Mars sextile'),
		'description' => $t('Mercury-Mars sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_jupiter_sextile'] = array(
		'field_name'  => 'natal_mercury_jupiter_sextile',
		'label'       => $t('Mercury-Jupiter sextile'),
		'description' => $t('Mercury-Jupiter sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_saturn_sextile'] = array(
		'field_name'  => 'natal_mercury_saturn_sextile',
		'label'       => $t('Mercury-Saturn sextile'),
		'description' => $t('Mercury-Saturn sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_uranus_sextile'] = array(
		'field_name'  => 'natal_mercury_uranus_sextile',
		'label'       => $t('Mercury-Uranus sextile'),
		'description' => $t('Mercury-Uranus sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_neptune_sextile'] = array(
		'field_name'  => 'natal_mercury_neptune_sextile',
		'label'       => $t('Mercury-Neptune sextile'),
		'description' => $t('Mercury-Neptune sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_pluto_sextile'] = array(
		'field_name'  => 'natal_mercury_pluto_sextile',
		'label'       => $t('Mercury-Pluto sextile'),
		'description' => $t('Mercury-Pluto sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_nnode_sextile'] = array(
		'field_name'  => 'natal_mercury_nnode_sextile',
		'label'       => $t('Mercury-North Node sextile'),
		'description' => $t('Mercury-North Node sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_asc_sextile'] = array(
		'field_name'  => 'natal_mercury_asc_sextile',
		'label'       => $t('Mercury-Ascendent sextile'),
		'description' => $t('Mercury-Ascendent sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);	
	$instances['natal_venus_mars_sextile'] = array(
		'field_name'  => 'natal_venus_mars_sextile',
		'label'       => $t('Venus-Mars sextile'),
		'description' => $t('Venus-Mars sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_jupiter_sextile'] = array(
		'field_name'  => 'natal_venus_jupiter_sextile',
		'label'       => $t('Venus-Jupiter sextile'),
		'description' => $t('Venus-Jupiter sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_saturn_sextile'] = array(
		'field_name'  => 'natal_venus_saturn_sextile',
		'label'       => $t('Venus-Saturn sextile'),
		'description' => $t('Venus-Saturn sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_uranus_sextile'] = array(
		'field_name'  => 'natal_venus_uranus_sextile',
		'label'       => $t('Venus-Uranus sextile'),
		'description' => $t('Venus-Uranus sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_neptune_sextile'] = array(
		'field_name'  => 'natal_venus_neptune_sextile',
		'label'       => $t('Venus-Neptune sextile'),
		'description' => $t('Venus-Neptune sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_pluto_sextile'] = array(
		'field_name'  => 'natal_venus_pluto_sextile',
		'label'       => $t('Venus-Pluto sextile'),
		'description' => $t('Venus-Pluto sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_nnode_sextile'] = array(
		'field_name'  => 'natal_venus_nnode_sextile',
		'label'       => $t('Venus-North Node sextile'),
		'description' => $t('Venus-North Node sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_asc_sextile'] = array(
		'field_name'  => 'natal_venus_asc_sextile',
		'label'       => $t('Venus-Ascendent sextile'),
		'description' => $t('Venus-Ascendent sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_jupiter_sextile'] = array(
		'field_name'  => 'natal_mars_jupiter_sextile',
		'label'       => $t('Mars-Jupiter sextile'),
		'description' => $t('Mars-Jupiter sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_saturn_sextile'] = array(
		'field_name'  => 'natal_mars_saturn_sextile',
		'label'       => $t('Mars-Saturn sextile'),
		'description' => $t('Mars-Saturn sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_uranus_sextile'] = array(
		'field_name'  => 'natal_mars_uranus_sextile',
		'label'       => $t('Mars-Uranus sextile'),
		'description' => $t('Mars-Uranus sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_neptune_sextile'] = array(
		'field_name'  => 'natal_mars_neptune_sextile',
		'label'       => $t('Mars-Neptune sextile'),
		'description' => $t('Mars-Neptune sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_pluto_sextile'] = array(
		'field_name'  => 'natal_mars_pluto_sextile',
		'label'       => $t('Mars-Pluto sextile'),
		'description' => $t('Mars-Pluto sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_nnode_sextile'] = array(
		'field_name'  => 'natal_mars_nnode_sextile',
		'label'       => $t('Mars-North Node sextile'),
		'description' => $t('Mars-North Node sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_asc_sextile'] = array(
		'field_name'  => 'natal_mars_asc_sextile',
		'label'       => $t('Mars-Ascendent sextile'),
		'description' => $t('Mars-Ascendent sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_saturn_sextile'] = array(
		'field_name'  => 'natal_jupiter_saturn_sextile',
		'label'       => $t('Jupiter-Saturn sextile'),
		'description' => $t('Jupiter-Saturn sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_uranus_sextile'] = array(
		'field_name'  => 'natal_jupiter_uranus_sextile',
		'label'       => $t('Jupiter-Uranus sextile'),
		'description' => $t('Jupiter-Uranus sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_neptune_sextile'] = array(
		'field_name'  => 'natal_jupiter_neptune_sextile',
		'label'       => $t('Jupiter-Neptune sextile'),
		'description' => $t('Jupiter-Neptune sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_pluto_sextile'] = array(
		'field_name'  => 'natal_jupiter_pluto_sextile',
		'label'       => $t('Jupiter-Pluto sextile'),
		'description' => $t('Jupiter-Pluto sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_nnode_sextile'] = array(
		'field_name'  => 'natal_jupiter_nnode_sextile',
		'label'       => $t('Jupiter-North Node sextile'),
		'description' => $t('Jupiter-North Node sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_asc_sextile'] = array(
		'field_name'  => 'natal_jupiter_asc_sextile',
		'label'       => $t('Jupiter-Ascendent sextile'),
		'description' => $t('Jupiter-Ascendent sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_uranus_sextile'] = array(
		'field_name'  => 'natal_saturn_uranus_sextile',
		'label'       => $t('Saturn-Uranus sextile'),
		'description' => $t('Saturn-Uranus sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_neptune_sextile'] = array(
		'field_name'  => 'natal_saturn_neptune_sextile',
		'label'       => $t('Saturn-Neptune sextile'),
		'description' => $t('Saturn-Neptune sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_pluto_sextile'] = array(
		'field_name'  => 'natal_saturn_pluto_sextile',
		'label'       => $t('Saturn-Pluto sextile'),
		'description' => $t('Saturn-Pluto sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_nnode_sextile'] = array(
		'field_name'  => 'natal_saturn_nnode_sextile',
		'label'       => $t('Saturn-North Node sextile'),
		'description' => $t('Saturn-North Node sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_asc_sextile'] = array(
		'field_name'  => 'natal_saturn_asc_sextile',
		'label'       => $t('Saturn-Ascendent sextile'),
		'description' => $t('Saturn-Ascendent sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_neptune_sextile'] = array(
		'field_name'  => 'natal_uranus_neptune_sextile',
		'label'       => $t('Saturn-Neptune sextile'),
		'description' => $t('Saturn-Neptune sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_pluto_sextile'] = array(
		'field_name'  => 'natal_uranus_pluto_sextile',
		'label'       => $t('Saturn-Pluto sextile'),
		'description' => $t('Saturn-Pluto sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_nnode_sextile'] = array(
		'field_name'  => 'natal_uranus_nnode_sextile',
		'label'       => $t('Saturn-North Node sextile'),
		'description' => $t('Saturn-North Node sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_asc_sextile'] = array(
		'field_name'  => 'natal_uranus_asc_sextile',
		'label'       => $t('Saturn-Ascendent sextile'),
		'description' => $t('Saturn-Ascendent sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);	
	$instances['natal_neptune_pluto_sextile'] = array(
		'field_name'  => 'natal_neptune_pluto_sextile',
		'label'       => $t('Neptune-Pluto sextile'),
		'description' => $t('Neptune-Pluto sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_neptune_nnode_sextile'] = array(
		'field_name'  => 'natal_neptune_nnode_sextile',
		'label'       => $t('Neptune-North Node sextile'),
		'description' => $t('Neptune-North Node sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_neptune_asc_sextile'] = array(
		'field_name'  => 'natal_neptune_asc_sextile',
		'label'       => $t('Neptune-Ascendent sextile'),
		'description' => $t('Neptune-Ascendent sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_pluto_nnode_sextile'] = array(
		'field_name'  => 'natal_pluto_nnode_sextile',
		'label'       => $t('Pluto-North Node sextile'),
		'description' => $t('Pluto-North Node sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_pluto_asc_sextile'] = array(
		'field_name'  => 'natal_pluto_asc_sextile',
		'label'       => $t('Pluto-Ascendent sextile'),
		'description' => $t('Pluto-Ascendent sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_nnode_asc_sextile'] = array(
		'field_name'  => 'natal_nnode_asc_sextile',
		'label'       => $t('NorthNode-Ascendent sextile'),
		'description' => $t('NorthNode-Ascendent sextile.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);

// Create field $instances for ALL SQUARES
	$instances['natal_sun_moon_square'] = array(
		'field_name'  => 'natal_sun_moon_square',
		'label'       => $t('Sun-Moon square'),
		'description' => $t('Sun-Moon square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_mercury_square'] = array(
		'field_name'  => 'natal_sun_mercury_square',
		'label'       => $t('Sun-Mercury square'),
		'description' => $t('Sun-Mercury square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_venus_square'] = array(
		'field_name'  => 'natal_sun_venus_square',
		'label'       => $t('Sun-Venus square'),
		'description' => $t('Sun-Venus square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_mars_square'] = array(
		'field_name'  => 'natal_sun_mars_square',
		'label'       => $t('Sun-Mars square'),
		'description' => $t('Sun-Mars square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_jupiter_square'] = array(
		'field_name'  => 'natal_sun_jupiter_square',
		'label'       => $t('Sun-Jupiter square'),
		'description' => $t('Sun-Jupiter square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_saturn_square'] = array(
		'field_name'  => 'natal_sun_saturn_square',
		'label'       => $t('Sun-Saturn square'),
		'description' => $t('Sun-Saturn square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_uranus_square'] = array(
		'field_name'  => 'natal_sun_uranus_square',
		'label'       => $t('Sun-Uranus square'),
		'description' => $t('Sun-Uranus square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_neptune_square'] = array(
		'field_name'  => 'natal_sun_neptune_square',
		'label'       => $t('Sun-Neptune square'),
		'description' => $t('Sun-Neptune square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_pluto_square'] = array(
		'field_name'  => 'natal_sun_pluto_square',
		'label'       => $t('Sun-Pluto square'),
		'description' => $t('Sun-Pluto square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_nnode_square'] = array(
		'field_name'  => 'natal_sun_nnode_square',
		'label'       => $t('Sun-North Node square'),
		'description' => $t('Sun-North Node square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_asc_square'] = array(
		'field_name'  => 'natal_sun_asc_square',
		'label'       => $t('Sun-Ascendent square'),
		'description' => $t('Sun-Ascendent square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_mercury_square'] = array(
		'field_name'  => 'natal_moon_mercury_square',
		'label'       => $t('Moon-Mercury square'),
		'description' => $t('Moon-Mercury square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_venus_square'] = array(
		'field_name'  => 'natal_moon_venus_square',
		'label'       => $t('Moon-Venus square'),
		'description' => $t('Moon-Venus square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_mars_square'] = array(
		'field_name'  => 'natal_moon_mars_square',
		'label'       => $t('Moon-Mars square'),
		'description' => $t('Moon-Mars square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_jupiter_square'] = array(
		'field_name'  => 'natal_moon_jupiter_square',
		'label'       => $t('Moon-Jupiter square'),
		'description' => $t('Moon-Jupiter square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_saturn_square'] = array(
		'field_name'  => 'natal_moon_saturn_square',
		'label'       => $t('Moon-Saturn square'),
		'description' => $t('Moon-Saturn square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_uranus_square'] = array(
		'field_name'  => 'natal_moon_uranus_square',
		'label'       => $t('Moon-Uranus square'),
		'description' => $t('Moon-Uranus square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_neptune_square'] = array(
		'field_name'  => 'natal_moon_neptune_square',
		'label'       => $t('Moon-Neptune square'),
		'description' => $t('Moon-Neptune square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_pluto_square'] = array(
		'field_name'  => 'natal_moon_pluto_square',
		'label'       => $t('Moon-Pluto square'),
		'description' => $t('Moon-Pluto square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_nnode_square'] = array(
		'field_name'  => 'natal_moon_nnode_square',
		'label'       => $t('Moon-North Node square'),
		'description' => $t('Moon-North Node square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_asc_square'] = array(
		'field_name'  => 'natal_moon_asc_square',
		'label'       => $t('Moon-Ascendent square'),
		'description' => $t('Moon-Ascendent square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_venus_square'] = array(
		'field_name'  => 'natal_mercury_venus_square',
		'label'       => $t('Mercury-Venus square'),
		'description' => $t('Mercury-Venus square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_mars_square'] = array(
		'field_name'  => 'natal_mercury_mars_square',
		'label'       => $t('Mercury-Mars square'),
		'description' => $t('Mercury-Mars square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_jupiter_square'] = array(
		'field_name'  => 'natal_mercury_jupiter_square',
		'label'       => $t('Mercury-Jupiter square'),
		'description' => $t('Mercury-Jupiter square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_saturn_square'] = array(
		'field_name'  => 'natal_mercury_saturn_square',
		'label'       => $t('Mercury-Saturn square'),
		'description' => $t('Mercury-Saturn square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_uranus_square'] = array(
		'field_name'  => 'natal_mercury_uranus_square',
		'label'       => $t('Mercury-Uranus square'),
		'description' => $t('Mercury-Uranus square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_neptune_square'] = array(
		'field_name'  => 'natal_mercury_neptune_square',
		'label'       => $t('Mercury-Neptune square'),
		'description' => $t('Mercury-Neptune square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_pluto_square'] = array(
		'field_name'  => 'natal_mercury_pluto_square',
		'label'       => $t('Mercury-Pluto square'),
		'description' => $t('Mercury-Pluto square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_nnode_square'] = array(
		'field_name'  => 'natal_mercury_nnode_square',
		'label'       => $t('Mercury-North Node square'),
		'description' => $t('Mercury-North Node square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_asc_square'] = array(
		'field_name'  => 'natal_mercury_asc_square',
		'label'       => $t('Mercury-Ascendent square'),
		'description' => $t('Mercury-Ascendent square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);	
	$instances['natal_venus_mars_square'] = array(
		'field_name'  => 'natal_venus_mars_square',
		'label'       => $t('Venus-Mars square'),
		'description' => $t('Venus-Mars square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_jupiter_square'] = array(
		'field_name'  => 'natal_venus_jupiter_square',
		'label'       => $t('Venus-Jupiter square'),
		'description' => $t('Venus-Jupiter square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_saturn_square'] = array(
		'field_name'  => 'natal_venus_saturn_square',
		'label'       => $t('Venus-Saturn square'),
		'description' => $t('Venus-Saturn square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_uranus_square'] = array(
		'field_name'  => 'natal_venus_uranus_square',
		'label'       => $t('Venus-Uranus square'),
		'description' => $t('Venus-Uranus square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_neptune_square'] = array(
		'field_name'  => 'natal_venus_neptune_square',
		'label'       => $t('Venus-Neptune square'),
		'description' => $t('Venus-Neptune square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_pluto_square'] = array(
		'field_name'  => 'natal_venus_pluto_square',
		'label'       => $t('Venus-Pluto square'),
		'description' => $t('Venus-Pluto square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_nnode_square'] = array(
		'field_name'  => 'natal_venus_nnode_square',
		'label'       => $t('Venus-North Node square'),
		'description' => $t('Venus-North Node square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_asc_square'] = array(
		'field_name'  => 'natal_venus_asc_square',
		'label'       => $t('Venus-Ascendent square'),
		'description' => $t('Venus-Ascendent square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_jupiter_square'] = array(
		'field_name'  => 'natal_mars_jupiter_square',
		'label'       => $t('Mars-Jupiter square'),
		'description' => $t('Mars-Jupiter square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_saturn_square'] = array(
		'field_name'  => 'natal_mars_saturn_square',
		'label'       => $t('Mars-Saturn square'),
		'description' => $t('Mars-Saturn square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_uranus_square'] = array(
		'field_name'  => 'natal_mars_uranus_square',
		'label'       => $t('Mars-Uranus square'),
		'description' => $t('Mars-Uranus square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_neptune_square'] = array(
		'field_name'  => 'natal_mars_neptune_square',
		'label'       => $t('Mars-Neptune square'),
		'description' => $t('Mars-Neptune square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_pluto_square'] = array(
		'field_name'  => 'natal_mars_pluto_square',
		'label'       => $t('Mars-Pluto square'),
		'description' => $t('Mars-Pluto square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_nnode_square'] = array(
		'field_name'  => 'natal_mars_nnode_square',
		'label'       => $t('Mars-North Node square'),
		'description' => $t('Mars-North Node square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_asc_square'] = array(
		'field_name'  => 'natal_mars_asc_square',
		'label'       => $t('Mars-Ascendent square'),
		'description' => $t('Mars-Ascendent square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_saturn_square'] = array(
		'field_name'  => 'natal_jupiter_saturn_square',
		'label'       => $t('Jupiter-Saturn square'),
		'description' => $t('Jupiter-Saturn square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_uranus_square'] = array(
		'field_name'  => 'natal_jupiter_uranus_square',
		'label'       => $t('Jupiter-Uranus square'),
		'description' => $t('Jupiter-Uranus square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_neptune_square'] = array(
		'field_name'  => 'natal_jupiter_neptune_square',
		'label'       => $t('Jupiter-Neptune square'),
		'description' => $t('Jupiter-Neptune square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_pluto_square'] = array(
		'field_name'  => 'natal_jupiter_pluto_square',
		'label'       => $t('Jupiter-Pluto square'),
		'description' => $t('Jupiter-Pluto square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_nnode_square'] = array(
		'field_name'  => 'natal_jupiter_nnode_square',
		'label'       => $t('Jupiter-North Node square'),
		'description' => $t('Jupiter-North Node square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_asc_square'] = array(
		'field_name'  => 'natal_jupiter_asc_square',
		'label'       => $t('Jupiter-Ascendent square'),
		'description' => $t('Jupiter-Ascendent square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_uranus_square'] = array(
		'field_name'  => 'natal_saturn_uranus_square',
		'label'       => $t('Saturn-Uranus square'),
		'description' => $t('Saturn-Uranus square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_neptune_square'] = array(
		'field_name'  => 'natal_saturn_neptune_square',
		'label'       => $t('Saturn-Neptune square'),
		'description' => $t('Saturn-Neptune square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_pluto_square'] = array(
		'field_name'  => 'natal_saturn_pluto_square',
		'label'       => $t('Saturn-Pluto square'),
		'description' => $t('Saturn-Pluto square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_nnode_square'] = array(
		'field_name'  => 'natal_saturn_nnode_square',
		'label'       => $t('Saturn-North Node square'),
		'description' => $t('Saturn-North Node square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_asc_square'] = array(
		'field_name'  => 'natal_saturn_asc_square',
		'label'       => $t('Saturn-Ascendent square'),
		'description' => $t('Saturn-Ascendent square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_neptune_square'] = array(
		'field_name'  => 'natal_uranus_neptune_square',
		'label'       => $t('Saturn-Neptune square'),
		'description' => $t('Saturn-Neptune square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_pluto_square'] = array(
		'field_name'  => 'natal_uranus_pluto_square',
		'label'       => $t('Saturn-Pluto square'),
		'description' => $t('Saturn-Pluto square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_nnode_square'] = array(
		'field_name'  => 'natal_uranus_nnode_square',
		'label'       => $t('Saturn-North Node square'),
		'description' => $t('Saturn-North Node square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_asc_square'] = array(
		'field_name'  => 'natal_uranus_asc_square',
		'label'       => $t('Saturn-Ascendent square'),
		'description' => $t('Saturn-Ascendent square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);	
	$instances['natal_neptune_pluto_square'] = array(
		'field_name'  => 'natal_neptune_pluto_square',
		'label'       => $t('Neptune-Pluto square'),
		'description' => $t('Neptune-Pluto square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_neptune_nnode_square'] = array(
		'field_name'  => 'natal_neptune_nnode_square',
		'label'       => $t('Neptune-North Node square'),
		'description' => $t('Neptune-North Node square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_neptune_asc_square'] = array(
		'field_name'  => 'natal_neptune_asc_square',
		'label'       => $t('Neptune-Ascendent square'),
		'description' => $t('Neptune-Ascendent square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_pluto_nnode_square'] = array(
		'field_name'  => 'natal_pluto_nnode_square',
		'label'       => $t('Pluto-North Node square'),
		'description' => $t('Pluto-North Node square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_pluto_asc_square'] = array(
		'field_name'  => 'natal_pluto_asc_square',
		'label'       => $t('Pluto-Ascendent square'),
		'description' => $t('Pluto-Ascendent square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_nnode_asc_square'] = array(
		'field_name'  => 'natal_nnode_asc_square',
		'label'       => $t('NorthNode-Ascendent square'),
		'description' => $t('NorthNode-Ascendent square.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);

// Create field $instances for ALL TRINES
	$instances['natal_sun_moon_trine'] = array(
		'field_name'  => 'natal_sun_moon_trine',
		'label'       => $t('Sun-Moon trine'),
		'description' => $t('Sun-Moon trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_mercury_trine'] = array(
		'field_name'  => 'natal_sun_mercury_trine',
		'label'       => $t('Sun-Mercury trine'),
		'description' => $t('Sun-Mercury trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_venus_trine'] = array(
		'field_name'  => 'natal_sun_venus_trine',
		'label'       => $t('Sun-Venus trine'),
		'description' => $t('Sun-Venus trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_mars_trine'] = array(
		'field_name'  => 'natal_sun_mars_trine',
		'label'       => $t('Sun-Mars trine'),
		'description' => $t('Sun-Mars trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_jupiter_trine'] = array(
		'field_name'  => 'natal_sun_jupiter_trine',
		'label'       => $t('Sun-Jupiter trine'),
		'description' => $t('Sun-Jupiter trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_saturn_trine'] = array(
		'field_name'  => 'natal_sun_saturn_trine',
		'label'       => $t('Sun-Saturn trine'),
		'description' => $t('Sun-Saturn trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_uranus_trine'] = array(
		'field_name'  => 'natal_sun_uranus_trine',
		'label'       => $t('Sun-Uranus trine'),
		'description' => $t('Sun-Uranus trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_neptune_trine'] = array(
		'field_name'  => 'natal_sun_neptune_trine',
		'label'       => $t('Sun-Neptune trine'),
		'description' => $t('Sun-Neptune trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_pluto_trine'] = array(
		'field_name'  => 'natal_sun_pluto_trine',
		'label'       => $t('Sun-Pluto trine'),
		'description' => $t('Sun-Pluto trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_nnode_trine'] = array(
		'field_name'  => 'natal_sun_nnode_trine',
		'label'       => $t('Sun-North Node trine'),
		'description' => $t('Sun-North Node trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_asc_trine'] = array(
		'field_name'  => 'natal_sun_asc_trine',
		'label'       => $t('Sun-Ascendent trine'),
		'description' => $t('Sun-Ascendent trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_mercury_trine'] = array(
		'field_name'  => 'natal_moon_mercury_trine',
		'label'       => $t('Moon-Mercury trine'),
		'description' => $t('Moon-Mercury trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_venus_trine'] = array(
		'field_name'  => 'natal_moon_venus_trine',
		'label'       => $t('Moon-Venus trine'),
		'description' => $t('Moon-Venus trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_mars_trine'] = array(
		'field_name'  => 'natal_moon_mars_trine',
		'label'       => $t('Moon-Mars trine'),
		'description' => $t('Moon-Mars trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_jupiter_trine'] = array(
		'field_name'  => 'natal_moon_jupiter_trine',
		'label'       => $t('Moon-Jupiter trine'),
		'description' => $t('Moon-Jupiter trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_saturn_trine'] = array(
		'field_name'  => 'natal_moon_saturn_trine',
		'label'       => $t('Moon-Saturn trine'),
		'description' => $t('Moon-Saturn trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_uranus_trine'] = array(
		'field_name'  => 'natal_moon_uranus_trine',
		'label'       => $t('Moon-Uranus trine'),
		'description' => $t('Moon-Uranus trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_neptune_trine'] = array(
		'field_name'  => 'natal_moon_neptune_trine',
		'label'       => $t('Moon-Neptune trine'),
		'description' => $t('Moon-Neptune trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_pluto_trine'] = array(
		'field_name'  => 'natal_moon_pluto_trine',
		'label'       => $t('Moon-Pluto trine'),
		'description' => $t('Moon-Pluto trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_nnode_trine'] = array(
		'field_name'  => 'natal_moon_nnode_trine',
		'label'       => $t('Moon-North Node trine'),
		'description' => $t('Moon-North Node trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_asc_trine'] = array(
		'field_name'  => 'natal_moon_asc_trine',
		'label'       => $t('Moon-Ascendent trine'),
		'description' => $t('Moon-Ascendent trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_venus_trine'] = array(
		'field_name'  => 'natal_mercury_venus_trine',
		'label'       => $t('Mercury-Venus trine'),
		'description' => $t('Mercury-Venus trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_mars_trine'] = array(
		'field_name'  => 'natal_mercury_mars_trine',
		'label'       => $t('Mercury-Mars trine'),
		'description' => $t('Mercury-Mars trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_jupiter_trine'] = array(
		'field_name'  => 'natal_mercury_jupiter_trine',
		'label'       => $t('Mercury-Jupiter trine'),
		'description' => $t('Mercury-Jupiter trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_saturn_trine'] = array(
		'field_name'  => 'natal_mercury_saturn_trine',
		'label'       => $t('Mercury-Saturn trine'),
		'description' => $t('Mercury-Saturn trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_uranus_trine'] = array(
		'field_name'  => 'natal_mercury_uranus_trine',
		'label'       => $t('Mercury-Uranus trine'),
		'description' => $t('Mercury-Uranus trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_neptune_trine'] = array(
		'field_name'  => 'natal_mercury_neptune_trine',
		'label'       => $t('Mercury-Neptune trine'),
		'description' => $t('Mercury-Neptune trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_pluto_trine'] = array(
		'field_name'  => 'natal_mercury_pluto_trine',
		'label'       => $t('Mercury-Pluto trine'),
		'description' => $t('Mercury-Pluto trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_nnode_trine'] = array(
		'field_name'  => 'natal_mercury_nnode_trine',
		'label'       => $t('Mercury-North Node trine'),
		'description' => $t('Mercury-North Node trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_asc_trine'] = array(
		'field_name'  => 'natal_mercury_asc_trine',
		'label'       => $t('Mercury-Ascendent trine'),
		'description' => $t('Mercury-Ascendent trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);	
	$instances['natal_venus_mars_trine'] = array(
		'field_name'  => 'natal_venus_mars_trine',
		'label'       => $t('Venus-Mars trine'),
		'description' => $t('Venus-Mars trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_jupiter_trine'] = array(
		'field_name'  => 'natal_venus_jupiter_trine',
		'label'       => $t('Venus-Jupiter trine'),
		'description' => $t('Venus-Jupiter trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_saturn_trine'] = array(
		'field_name'  => 'natal_venus_saturn_trine',
		'label'       => $t('Venus-Saturn trine'),
		'description' => $t('Venus-Saturn trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_uranus_trine'] = array(
		'field_name'  => 'natal_venus_uranus_trine',
		'label'       => $t('Venus-Uranus trine'),
		'description' => $t('Venus-Uranus trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_neptune_trine'] = array(
		'field_name'  => 'natal_venus_neptune_trine',
		'label'       => $t('Venus-Neptune trine'),
		'description' => $t('Venus-Neptune trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_pluto_trine'] = array(
		'field_name'  => 'natal_venus_pluto_trine',
		'label'       => $t('Venus-Pluto trine'),
		'description' => $t('Venus-Pluto trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_nnode_trine'] = array(
		'field_name'  => 'natal_venus_nnode_trine',
		'label'       => $t('Venus-North Node trine'),
		'description' => $t('Venus-North Node trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_asc_trine'] = array(
		'field_name'  => 'natal_venus_asc_trine',
		'label'       => $t('Venus-Ascendent trine'),
		'description' => $t('Venus-Ascendent trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_jupiter_trine'] = array(
		'field_name'  => 'natal_mars_jupiter_trine',
		'label'       => $t('Mars-Jupiter trine'),
		'description' => $t('Mars-Jupiter trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_saturn_trine'] = array(
		'field_name'  => 'natal_mars_saturn_trine',
		'label'       => $t('Mars-Saturn trine'),
		'description' => $t('Mars-Saturn trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_uranus_trine'] = array(
		'field_name'  => 'natal_mars_uranus_trine',
		'label'       => $t('Mars-Uranus trine'),
		'description' => $t('Mars-Uranus trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_neptune_trine'] = array(
		'field_name'  => 'natal_mars_neptune_trine',
		'label'       => $t('Mars-Neptune trine'),
		'description' => $t('Mars-Neptune trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_pluto_trine'] = array(
		'field_name'  => 'natal_mars_pluto_trine',
		'label'       => $t('Mars-Pluto trine'),
		'description' => $t('Mars-Pluto trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_nnode_trine'] = array(
		'field_name'  => 'natal_mars_nnode_trine',
		'label'       => $t('Mars-North Node trine'),
		'description' => $t('Mars-North Node trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_asc_trine'] = array(
		'field_name'  => 'natal_mars_asc_trine',
		'label'       => $t('Mars-Ascendent trine'),
		'description' => $t('Mars-Ascendent trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_saturn_trine'] = array(
		'field_name'  => 'natal_jupiter_saturn_trine',
		'label'       => $t('Jupiter-Saturn trine'),
		'description' => $t('Jupiter-Saturn trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_uranus_trine'] = array(
		'field_name'  => 'natal_jupiter_uranus_trine',
		'label'       => $t('Jupiter-Uranus trine'),
		'description' => $t('Jupiter-Uranus trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_neptune_trine'] = array(
		'field_name'  => 'natal_jupiter_neptune_trine',
		'label'       => $t('Jupiter-Neptune trine'),
		'description' => $t('Jupiter-Neptune trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_pluto_trine'] = array(
		'field_name'  => 'natal_jupiter_pluto_trine',
		'label'       => $t('Jupiter-Pluto trine'),
		'description' => $t('Jupiter-Pluto trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_nnode_trine'] = array(
		'field_name'  => 'natal_jupiter_nnode_trine',
		'label'       => $t('Jupiter-North Node trine'),
		'description' => $t('Jupiter-North Node trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_asc_trine'] = array(
		'field_name'  => 'natal_jupiter_asc_trine',
		'label'       => $t('Jupiter-Ascendent trine'),
		'description' => $t('Jupiter-Ascendent trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_uranus_trine'] = array(
		'field_name'  => 'natal_saturn_uranus_trine',
		'label'       => $t('Saturn-Uranus trine'),
		'description' => $t('Saturn-Uranus trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_neptune_trine'] = array(
		'field_name'  => 'natal_saturn_neptune_trine',
		'label'       => $t('Saturn-Neptune trine'),
		'description' => $t('Saturn-Neptune trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_pluto_trine'] = array(
		'field_name'  => 'natal_saturn_pluto_trine',
		'label'       => $t('Saturn-Pluto trine'),
		'description' => $t('Saturn-Pluto trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_nnode_trine'] = array(
		'field_name'  => 'natal_saturn_nnode_trine',
		'label'       => $t('Saturn-North Node trine'),
		'description' => $t('Saturn-North Node trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_asc_trine'] = array(
		'field_name'  => 'natal_saturn_asc_trine',
		'label'       => $t('Saturn-Ascendent trine'),
		'description' => $t('Saturn-Ascendent trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_neptune_trine'] = array(
		'field_name'  => 'natal_uranus_neptune_trine',
		'label'       => $t('Saturn-Neptune trine'),
		'description' => $t('Saturn-Neptune trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_pluto_trine'] = array(
		'field_name'  => 'natal_uranus_pluto_trine',
		'label'       => $t('Saturn-Pluto trine'),
		'description' => $t('Saturn-Pluto trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_nnode_trine'] = array(
		'field_name'  => 'natal_uranus_nnode_trine',
		'label'       => $t('Saturn-North Node trine'),
		'description' => $t('Saturn-North Node trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_asc_trine'] = array(
		'field_name'  => 'natal_uranus_asc_trine',
		'label'       => $t('Saturn-Ascendent trine'),
		'description' => $t('Saturn-Ascendent trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);	
	$instances['natal_neptune_pluto_trine'] = array(
		'field_name'  => 'natal_neptune_pluto_trine',
		'label'       => $t('Neptune-Pluto trine'),
		'description' => $t('Neptune-Pluto trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_neptune_nnode_trine'] = array(
		'field_name'  => 'natal_neptune_nnode_trine',
		'label'       => $t('Neptune-North Node trine'),
		'description' => $t('Neptune-North Node trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_neptune_asc_trine'] = array(
		'field_name'  => 'natal_neptune_asc_trine',
		'label'       => $t('Neptune-Ascendent trine'),
		'description' => $t('Neptune-Ascendent trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_pluto_nnode_trine'] = array(
		'field_name'  => 'natal_pluto_nnode_trine',
		'label'       => $t('Pluto-North Node trine'),
		'description' => $t('Pluto-North Node trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_pluto_asc_trine'] = array(
		'field_name'  => 'natal_pluto_asc_trine',
		'label'       => $t('Pluto-Ascendent trine'),
		'description' => $t('Pluto-Ascendent trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_nnode_asc_trine'] = array(
		'field_name'  => 'natal_nnode_asc_trine',
		'label'       => $t('NorthNode-Ascendent trine'),
		'description' => $t('NorthNode-Ascendent trine.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);

// Create field $instances for ALL OPPOSITES
	$instances['natal_sun_moon_opposite'] = array(
		'field_name'  => 'natal_sun_moon_opposite',
		'label'       => $t('Sun-Moon opposite'),
		'description' => $t('Sun-Moon opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_mercury_opposite'] = array(
		'field_name'  => 'natal_sun_mercury_opposite',
		'label'       => $t('Sun-Mercury opposite'),
		'description' => $t('Sun-Mercury opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_venus_opposite'] = array(
		'field_name'  => 'natal_sun_venus_opposite',
		'label'       => $t('Sun-Venus opposite'),
		'description' => $t('Sun-Venus opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_mars_opposite'] = array(
		'field_name'  => 'natal_sun_mars_opposite',
		'label'       => $t('Sun-Mars opposite'),
		'description' => $t('Sun-Mars opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_jupiter_opposite'] = array(
		'field_name'  => 'natal_sun_jupiter_opposite',
		'label'       => $t('Sun-Jupiter opposite'),
		'description' => $t('Sun-Jupiter opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_saturn_opposite'] = array(
		'field_name'  => 'natal_sun_saturn_opposite',
		'label'       => $t('Sun-Saturn opposite'),
		'description' => $t('Sun-Saturn opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_uranus_opposite'] = array(
		'field_name'  => 'natal_sun_uranus_opposite',
		'label'       => $t('Sun-Uranus opposite'),
		'description' => $t('Sun-Uranus opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_neptune_opposite'] = array(
		'field_name'  => 'natal_sun_neptune_opposite',
		'label'       => $t('Sun-Neptune opposite'),
		'description' => $t('Sun-Neptune opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_pluto_opposite'] = array(
		'field_name'  => 'natal_sun_pluto_opposite',
		'label'       => $t('Sun-Pluto opposite'),
		'description' => $t('Sun-Pluto opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_nnode_opposite'] = array(
		'field_name'  => 'natal_sun_nnode_opposite',
		'label'       => $t('Sun-North Node opposite'),
		'description' => $t('Sun-North Node opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_sun_asc_opposite'] = array(
		'field_name'  => 'natal_sun_asc_opposite',
		'label'       => $t('Sun-Ascendent opposite'),
		'description' => $t('Sun-Ascendent opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_mercury_opposite'] = array(
		'field_name'  => 'natal_moon_mercury_opposite',
		'label'       => $t('Moon-Mercury opposite'),
		'description' => $t('Moon-Mercury opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_venus_opposite'] = array(
		'field_name'  => 'natal_moon_venus_opposite',
		'label'       => $t('Moon-Venus opposite'),
		'description' => $t('Moon-Venus opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_mars_opposite'] = array(
		'field_name'  => 'natal_moon_mars_opposite',
		'label'       => $t('Moon-Mars opposite'),
		'description' => $t('Moon-Mars opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_jupiter_opposite'] = array(
		'field_name'  => 'natal_moon_jupiter_opposite',
		'label'       => $t('Moon-Jupiter opposite'),
		'description' => $t('Moon-Jupiter opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_saturn_opposite'] = array(
		'field_name'  => 'natal_moon_saturn_opposite',
		'label'       => $t('Moon-Saturn opposite'),
		'description' => $t('Moon-Saturn opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_uranus_opposite'] = array(
		'field_name'  => 'natal_moon_uranus_opposite',
		'label'       => $t('Moon-Uranus opposite'),
		'description' => $t('Moon-Uranus opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_neptune_opposite'] = array(
		'field_name'  => 'natal_moon_neptune_opposite',
		'label'       => $t('Moon-Neptune opposite'),
		'description' => $t('Moon-Neptune opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_pluto_opposite'] = array(
		'field_name'  => 'natal_moon_pluto_opposite',
		'label'       => $t('Moon-Pluto opposite'),
		'description' => $t('Moon-Pluto opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_nnode_opposite'] = array(
		'field_name'  => 'natal_moon_nnode_opposite',
		'label'       => $t('Moon-North Node opposite'),
		'description' => $t('Moon-North Node opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_moon_asc_opposite'] = array(
		'field_name'  => 'natal_moon_asc_opposite',
		'label'       => $t('Moon-Ascendent opposite'),
		'description' => $t('Moon-Ascendent opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_venus_opposite'] = array(
		'field_name'  => 'natal_mercury_venus_opposite',
		'label'       => $t('Mercury-Venus opposite'),
		'description' => $t('Mercury-Venus opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_mars_opposite'] = array(
		'field_name'  => 'natal_mercury_mars_opposite',
		'label'       => $t('Mercury-Mars opposite'),
		'description' => $t('Mercury-Mars opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_jupiter_opposite'] = array(
		'field_name'  => 'natal_mercury_jupiter_opposite',
		'label'       => $t('Mercury-Jupiter opposite'),
		'description' => $t('Mercury-Jupiter opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_saturn_opposite'] = array(
		'field_name'  => 'natal_mercury_saturn_opposite',
		'label'       => $t('Mercury-Saturn opposite'),
		'description' => $t('Mercury-Saturn opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_uranus_opposite'] = array(
		'field_name'  => 'natal_mercury_uranus_opposite',
		'label'       => $t('Mercury-Uranus opposite'),
		'description' => $t('Mercury-Uranus opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_neptune_opposite'] = array(
		'field_name'  => 'natal_mercury_neptune_opposite',
		'label'       => $t('Mercury-Neptune opposite'),
		'description' => $t('Mercury-Neptune opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_pluto_opposite'] = array(
		'field_name'  => 'natal_mercury_pluto_opposite',
		'label'       => $t('Mercury-Pluto opposite'),
		'description' => $t('Mercury-Pluto opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_nnode_opposite'] = array(
		'field_name'  => 'natal_mercury_nnode_opposite',
		'label'       => $t('Mercury-North Node opposite'),
		'description' => $t('Mercury-North Node opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mercury_asc_opposite'] = array(
		'field_name'  => 'natal_mercury_asc_opposite',
		'label'       => $t('Mercury-Ascendent opposite'),
		'description' => $t('Mercury-Ascendent opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);	
	$instances['natal_venus_mars_opposite'] = array(
		'field_name'  => 'natal_venus_mars_opposite',
		'label'       => $t('Venus-Mars opposite'),
		'description' => $t('Venus-Mars opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_jupiter_opposite'] = array(
		'field_name'  => 'natal_venus_jupiter_opposite',
		'label'       => $t('Venus-Jupiter opposite'),
		'description' => $t('Venus-Jupiter opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_saturn_opposite'] = array(
		'field_name'  => 'natal_venus_saturn_opposite',
		'label'       => $t('Venus-Saturn opposite'),
		'description' => $t('Venus-Saturn opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_uranus_opposite'] = array(
		'field_name'  => 'natal_venus_uranus_opposite',
		'label'       => $t('Venus-Uranus opposite'),
		'description' => $t('Venus-Uranus opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_neptune_opposite'] = array(
		'field_name'  => 'natal_venus_neptune_opposite',
		'label'       => $t('Venus-Neptune opposite'),
		'description' => $t('Venus-Neptune opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_pluto_opposite'] = array(
		'field_name'  => 'natal_venus_pluto_opposite',
		'label'       => $t('Venus-Pluto opposite'),
		'description' => $t('Venus-Pluto opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_nnode_opposite'] = array(
		'field_name'  => 'natal_venus_nnode_opposite',
		'label'       => $t('Venus-North Node opposite'),
		'description' => $t('Venus-North Node opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_venus_asc_opposite'] = array(
		'field_name'  => 'natal_venus_asc_opposite',
		'label'       => $t('Venus-Ascendent opposite'),
		'description' => $t('Venus-Ascendent opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_jupiter_opposite'] = array(
		'field_name'  => 'natal_mars_jupiter_opposite',
		'label'       => $t('Mars-Jupiter opposite'),
		'description' => $t('Mars-Jupiter opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_saturn_opposite'] = array(
		'field_name'  => 'natal_mars_saturn_opposite',
		'label'       => $t('Mars-Saturn opposite'),
		'description' => $t('Mars-Saturn opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_uranus_opposite'] = array(
		'field_name'  => 'natal_mars_uranus_opposite',
		'label'       => $t('Mars-Uranus opposite'),
		'description' => $t('Mars-Uranus opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_neptune_opposite'] = array(
		'field_name'  => 'natal_mars_neptune_opposite',
		'label'       => $t('Mars-Neptune opposite'),
		'description' => $t('Mars-Neptune opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_pluto_opposite'] = array(
		'field_name'  => 'natal_mars_pluto_opposite',
		'label'       => $t('Mars-Pluto opposite'),
		'description' => $t('Mars-Pluto opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_nnode_opposite'] = array(
		'field_name'  => 'natal_mars_nnode_opposite',
		'label'       => $t('Mars-North Node opposite'),
		'description' => $t('Mars-North Node opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_mars_asc_opposite'] = array(
		'field_name'  => 'natal_mars_asc_opposite',
		'label'       => $t('Mars-Ascendent opposite'),
		'description' => $t('Mars-Ascendent opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_saturn_opposite'] = array(
		'field_name'  => 'natal_jupiter_saturn_opposite',
		'label'       => $t('Jupiter-Saturn opposite'),
		'description' => $t('Jupiter-Saturn opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_uranus_opposite'] = array(
		'field_name'  => 'natal_jupiter_uranus_opposite',
		'label'       => $t('Jupiter-Uranus opposite'),
		'description' => $t('Jupiter-Uranus opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_neptune_opposite'] = array(
		'field_name'  => 'natal_jupiter_neptune_opposite',
		'label'       => $t('Jupiter-Neptune opposite'),
		'description' => $t('Jupiter-Neptune opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_pluto_opposite'] = array(
		'field_name'  => 'natal_jupiter_pluto_opposite',
		'label'       => $t('Jupiter-Pluto opposite'),
		'description' => $t('Jupiter-Pluto opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_nnode_opposite'] = array(
		'field_name'  => 'natal_jupiter_nnode_opposite',
		'label'       => $t('Jupiter-North Node opposite'),
		'description' => $t('Jupiter-North Node opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_jupiter_asc_opposite'] = array(
		'field_name'  => 'natal_jupiter_asc_opposite',
		'label'       => $t('Jupiter-Ascendent opposite'),
		'description' => $t('Jupiter-Ascendent opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_uranus_opposite'] = array(
		'field_name'  => 'natal_saturn_uranus_opposite',
		'label'       => $t('Saturn-Uranus opposite'),
		'description' => $t('Saturn-Uranus opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_neptune_opposite'] = array(
		'field_name'  => 'natal_saturn_neptune_opposite',
		'label'       => $t('Saturn-Neptune opposite'),
		'description' => $t('Saturn-Neptune opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_pluto_opposite'] = array(
		'field_name'  => 'natal_saturn_pluto_opposite',
		'label'       => $t('Saturn-Pluto opposite'),
		'description' => $t('Saturn-Pluto opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_nnode_opposite'] = array(
		'field_name'  => 'natal_saturn_nnode_opposite',
		'label'       => $t('Saturn-North Node opposite'),
		'description' => $t('Saturn-North Node opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_saturn_asc_opposite'] = array(
		'field_name'  => 'natal_saturn_asc_opposite',
		'label'       => $t('Saturn-Ascendent opposite'),
		'description' => $t('Saturn-Ascendent opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_neptune_opposite'] = array(
		'field_name'  => 'natal_uranus_neptune_opposite',
		'label'       => $t('Saturn-Neptune opposite'),
		'description' => $t('Saturn-Neptune opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_pluto_opposite'] = array(
		'field_name'  => 'natal_uranus_pluto_opposite',
		'label'       => $t('Saturn-Pluto opposite'),
		'description' => $t('Saturn-Pluto opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_nnode_opposite'] = array(
		'field_name'  => 'natal_uranus_nnode_opposite',
		'label'       => $t('Saturn-North Node opposite'),
		'description' => $t('Saturn-North Node opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_uranus_asc_opposite'] = array(
		'field_name'  => 'natal_uranus_asc_opposite',
		'label'       => $t('Saturn-Ascendent opposite'),
		'description' => $t('Saturn-Ascendent opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);	
	$instances['natal_neptune_pluto_opposite'] = array(
		'field_name'  => 'natal_neptune_pluto_opposite',
		'label'       => $t('Neptune-Pluto opposite'),
		'description' => $t('Neptune-Pluto opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_neptune_nnode_opposite'] = array(
		'field_name'  => 'natal_neptune_nnode_opposite',
		'label'       => $t('Neptune-North Node opposite'),
		'description' => $t('Neptune-North Node opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_neptune_asc_opposite'] = array(
		'field_name'  => 'natal_neptune_asc_opposite',
		'label'       => $t('Neptune-Ascendent opposite'),
		'description' => $t('Neptune-Ascendent opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_pluto_nnode_opposite'] = array(
		'field_name'  => 'natal_pluto_nnode_opposite',
		'label'       => $t('Pluto-North Node opposite'),
		'description' => $t('Pluto-North Node opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_pluto_asc_opposite'] = array(
		'field_name'  => 'natal_pluto_asc_opposite',
		'label'       => $t('Pluto-Ascendent opposite'),
		'description' => $t('Pluto-Ascendent opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);
	$instances['natal_nnode_asc_opposite'] = array(
		'field_name'  => 'natal_nnode_asc_opposite',
		'label'       => $t('NorthNode-Ascendent opposite'),
		'description' => $t('NorthNode-Ascendent opposite.'),
		'widget'      => array('type' => 'text_textfield',),
		'required'    => TRUE,
		'settings'    => array('text_processing' => 0,),
		'display'     => array('default' => array('label' => 'inline',),),
	);

?>
