<?php
    $pagetitle= "Willkommen bei terre des hommes Murgtal/Mittelbaden";
        $pageheadline ="TDH Benefizkonzert mit Peter Götzmanns Jazz Hop Rhythm";
        
        $navigation = "standard";
        
        $contentleftincludes = array(
        'contentwidget1.inc',
        'sponsorendank.inc'
        );
        $contentrightincludes = array(
		'event.inc',
        'blindtext2.inc',
        'blindtext.inc',
        'blindtext3.inc'
        );
        $sideincludes = array(
    		'cta-black.inc',
    		'cta.inc',
    		'ansprechpartner.inc'
        );

    $widecontent = array(
            'sponsoren-liste.inc'
    );

        include 'inc/templates/template-1-2.inc';
?>