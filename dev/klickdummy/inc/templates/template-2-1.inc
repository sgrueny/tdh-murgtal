<?php include "inc/templates/template-parts/head.inc"; ?>

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

    <?php include "inc/templates/template-parts/footer.inc"; ?>        
