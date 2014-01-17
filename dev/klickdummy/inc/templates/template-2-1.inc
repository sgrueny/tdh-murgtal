<?php include "inc/templates/template-parts/head.inc"; ?>

<div class="ym-column">
    <!-- Die Inhaltsspalte -->
    <main class="ym-col1">
        <h1 class="ym-hideme" id="maincnt">Der Inhaltsbereich</h1>

        <div class="logo"><img src="images/logo-tdh-murgtal.gif" alt="Logo von Terre des Hommes Murgtal/Mittelbaden"><span class="ym-hideme">terre des hommes Murgtal/Mittelbaden</span></div>

        <?php if (isset($pageheadline)) {
                echo '<h2>'.$pageheadline.'</h2>';
                }; 
        ?>

        <div class="ym-grid">
            <div class="ym-g66 ym-gl">
                <?php 
                    foreach($contentleftincludes as $contentleft) {
                         include 'inc/modules/'.$contentleft;                       
                    }
                ?>
                
            </div>
            <div class="ym-g33 ym-gr">
                <?php 
                    foreach($contentrightincludes as $contentright) {
                         include 'inc/modules/'.$contentright;                       
                    }
                ?>
                
            </div>
        </div>
        <!-- /.ym-grid  -->
        <?php
            if (isset($widecontent)) {
                foreach($widecontent as $content) {
                    echo '<div class="wide-cnt">';
                    include 'inc/modules/'.$content;
                    echo '</div>';
                }
            }
        ?>
    </main>
    <!-- /.ym-col1 -->
    <!-- Die Seitenspalte -->
    <div class="ym-col3">
        <h2 class="ym-hideme" id="sidecnt">Die Seitenspalte</h2>
        <?php 
            foreach($sideincludes as $side) {
		         include 'inc/modules/'.$side;						
            }
        ?>            
    </div>
    <!-- /.ym-col3 -->
<!--  .column wird in footer.inc geschlossen -->
<?php include "inc/templates/template-parts/footer.inc"; ?>
