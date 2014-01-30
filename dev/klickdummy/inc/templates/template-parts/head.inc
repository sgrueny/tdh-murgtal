<!doctype html>
<!--[if IE 8]>      <html class="ie8"  lang="de"> <![endif]-->
<!--[if gt IE 8]><!--> <html lang="de"> <!--<![endif]-->
<head>
	<meta charset="utf-8">
	<title><?php if (isset($pagetitle)) {echo $pagetitle;} else { echo "Platzhalter für einen Seitentitel";} ?></title>

	<script>document.documentElement.className += " js";</script>

	<meta name="description" content="">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">

  	<link rel="icon" href="favicon.ico">
	<link rel="stylesheet" href="css/styles.css">

	<!--[if IE 8]>
    	<script src="js/html5shiv-printshiv.js" type="text/javascript"></script>
	<![endif]-->
</head>

<body> 
        <!--[if lt IE 8]>
            <p class="browsehappy">Sie surfen mit einem sehr antiken Browser. Wir liefern diesem leider nur die Inhalte, aber keine Gestaltung aus. Installieren Sie bitte <a href="http://browsehappy.com/">einen modernen Browser</a>. Sie sichern damit Ihre Surferlebnisse und helfen dabei, das Internet voranzubringen.</p>
        <![endif]-->

	<!-- begin: skip link navigation -->
	<?php include 'inc/modules/skiplinks.inc'; ?>
	<!-- end: skip link navigation -->
	<div class="ym-wrapper">
        <div class="ym-wbox">

            <div class="ym-column">
                <!-- Die Inhaltsspalte -->
                <main class="ym-col1">
                    <h1 class="ym-hideme" id="maincnt">Der Inhaltsbereich</h1>

                    <div class="logo"><a href="index.php"><img src="images/logo-tdh-murgtal.gif" alt="Logo von Terre des Hommes Murgtal/Mittelbaden"><span class="ym-hideme">terre des hommes Murgtal/Mittelbaden</span></a></div>
                    <?php include "inc/modules/navigation.inc"; ?>

                    <?php if (isset($pageheadline)) {
                            echo '<h2>'.$pageheadline.'</h2>';
                            }; 
                    ?>
                    <?php
                        if (isset($topcontent)) {
                            foreach($topcontent as $top) {
                                echo '<div class="wide-cnt">';
                                include 'inc/modules/'.$top;
                                echo '</div>';
                            }
                        }
                    ?>            