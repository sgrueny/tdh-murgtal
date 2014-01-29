<?php include "inc/templates/template-parts/head.inc"; ?>

<div class="ym-column">
    <!-- Die Inhaltsspalte -->
    <main class="ym-col1">
        <h1 class="ym-hideme" id="maincnt">Der Inhaltsbereich</h1>

        <div class="logo"><img src="images/logo-tdh-murgtal.gif" alt="Logo von Terre des Hommes Murgtal/Mittelbaden"><span class="ym-hideme">terre des hommes Murgtal/Mittelbaden</span></div>
        <?php include "inc/modules/navigation.inc"; ?>
        <?php if (isset($pageheadline)) {
                echo '<h2>'.$pageheadline.'</h2>';
                }; 
        ?>
        <?php
            if (isset($artikelincludes)) {
                foreach($artikelincludes as $artikel) {
                    include 'inc/modules/'.$artikel;
                }
            }
        ?>        
        
    <?php include "inc/templates/template-parts/footer.inc"; ?>       
    </main>
    <!-- /.ym-col1 -->
    <!-- Die Seitenspalte -->
    <div class="ym-col3">
        <h1 class="ym-hideme" id="sidecnt">Die Seitenspalte</h1>
        <?php 
            foreach($sideincludes as $side) {
		         include 'inc/modules/'.$side;						
            }
        ?>            
    </div>
    <!-- /.ym-col3 -->
<!--  .column wird in footer.inc geschlossen -->
<?php include "inc/templates/template-parts/foot.inc"; ?>
