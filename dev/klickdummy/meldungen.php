<?php
    $pagetitle= "Willkommen bei terre des hommes Murgtal/Mittelbaden";

    $navigation = "meldungen";
    
	$topcontent = array(
		'contentwidget-2col-button.inc'
		
	);	
    $artikelincludes = array(
        'artikel1.inc',    
        'artikel2.inc'
    );
    $sideincludes = array(
		'cta.inc',
		'cta-black.inc',
		'ansprechpartner.inc'
    );
    
    include 'inc/templates/template-artikel.inc';
?>