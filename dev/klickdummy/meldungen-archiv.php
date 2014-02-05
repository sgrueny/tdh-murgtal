<?php
    $pagetitle= "Willkommen bei terre des hommes Murgtal/Mittelbaden";

    $navigation = "archiv";
    
    $artikelincludes = array(
        'archiv-navigation.inc',    
        'archiv-liste.inc'
    );
    $sideincludes = array(
		'cta-black.inc',
		'cta.inc',
		'ansprechpartner.inc'
    );
    
    include 'inc/templates/template-artikel.inc';
?>