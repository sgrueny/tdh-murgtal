                     <?php
                         if (isset($widecontent)) {
                             foreach($widecontent as $content) {
                                 echo '<div class="wide-cnt">';
                                 include 'inc/modules/'.$content;
                                 echo '</div>';
                             }
                         }
                     ?>
                 
                     <footer>
                         &copy; 2014 terre des hommes Mittelbaden/Murgtal  <a href="impressum.php">Impressum</a>
                     </footer>
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
            </div>
            <!-- /.ym-column -->
        </div>
        <!-- /.ym-wbox -->
    </div>
    <!-- /.ym-wrapper -->
    <script src="js/jquery.js" type="text/javascript"></script>
    <script src="js/tdh.js" type="text/javascript"></script>  
<div id="awesomeboxframe" class="awesomebox">
    <div class="innerframe">
        <header>
            <a  class="close" href="#">schließen</a>
            <h2 class="category">content</h2>
            <h3 class="title">Dummy</h3>
        </header>
        <div class="currentitem"></div>
        <div class="listcontainer">
            <a href="#" class="scrollleft">    &#10094; </a>
            <a href="#" class="scrollright">    &#10095; </a>
            <div class="scrollbox">            
                <ul class="itemlist">
                    <li class="listitem"></li>
                </ul>
            </div>
        </div>

    </div>
</div>
</body>
</html>
