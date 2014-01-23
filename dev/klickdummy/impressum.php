<?php
    $pagetitle= "Impressum";
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
           'leer.inc'
        );

        include 'inc/templates/template-2-1.inc';
?>