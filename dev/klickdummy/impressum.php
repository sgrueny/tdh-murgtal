<?php
        $pagetitle= "Impressum";
        
        $navigation = "standard";
        
        $pageheadline = "Impressum";
        
        $contentleftincludes = array(
           'impressum-grafiken-fotos.inc',
           'impressum-haftungsausschluss.inc',
           'impressum-datenschutzhinweis.inc'
        );
        $contentrightincludes = array(
           'impressum-ansprechpartner.inc',
           ''
        );
        $sideincludes = array(
           'leer.inc',
		   'ansprechlink.inc'
        );

        include 'inc/templates/template-2-1.inc';
?>