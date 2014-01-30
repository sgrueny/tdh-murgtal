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
</body>
</html>