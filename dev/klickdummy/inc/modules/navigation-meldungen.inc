<!-- Modul: Navigation -->

<nav role='navigation' class="navigation">
	<!--Liste als Navigation, enthält pro Navigationselement einen Link mit anschliessender Liste
		des entsprechenden Untermenäs. Das Untermenü enthält eine Liste der entsprechenden Links.
	-->
  <ul>
    <li><a href="index.php">Start</a>
    </li>
    <li><a href="#">Veranstaltungen</a>
    </li>
    <li class="has-submenu"><!-- Marker, um bereits an dieser Stelle zu wissen, dass noch ein Submenu kommt, wichtig für JS -->
      <a href="#">Über Uns</a>
      <div class="submenu">
        <ul>
          <li><a href="ueberuns-dasteam.php">Das Team</a></li>
          <li><a href="#">Mitwirkende und Helfer</a></li>
          <li><a href="ueberuns-sponsoren.php">Sponsoren</a></li>
          <li><a href="#">Über terre de hommes</a></li>
          <li><a href="ueberuns-aktivitaeten.php">Unsere Aktivitäten</a></li>
        </ul>
      </div>
    </li>
    <li class="has-submenu active">
      <a class="active" href="meldungen.php">Meldungen</a>
      <div class="submenu">
        <ul>
          <li><a href="#">Dezember</a></li>
          <li><a href="#">November</a></li>
          <li><a href="#">Oktober</a></li>
          <li class="active"><a href="#">September</a></li>
          <li><a href="#">August</a></li>
          <li><a href="#">Juli</a></li>
          <li><a href="#">Juni</a></li>
          <li><a href="#">Mai</a></li>
          <li><a href="#">April</a></li>
          <li><a href="#">März</a></li>
          <li><a href="#">Februar</a></li>
          <li><a href="#">Januar</a></li>
          <li class="special"><a href="#">Überschwemmung Haiti</a></li><!-- special LIs können natürlich zusätzlich eine active-Klasse enthalten -->
          <li class="special"><a href="#">Flüchtlingsdrama Syrien</a></li>
          <li class="special"><a href="#">Flutkatastrophe Philippinen</a></li>
          <li class="archive">
            <select name="meldungen-archiv">
              <option>2014</option>
              <option selected="selected">Jahr: 2013</option>
              <option>2012</option>
              <option>2011</option>
              <option>2010</option>
              <option>2009</option>
              <option>2008</option>
              <option>2007</option>
              <option>2006</option>
              <option>2005</option>
              <option>2004</option>
              <option>2003</option>
              <option>2002</option>
              <option>2001</option>
            </select>
          </li>
        </ul>

        <!--  <li><a href="#">2012</a></li>
          <li><a href="#">2011</a></li>
          <li><a href="#">2010</a></li>
          <li><a href="#">2009</a></li>
          <li><a href="#">2008</a></li>
          <li><a href="#">2007</a></li>
          <li><a href="#">2006</a></li>
          <li><a href="#">2005</a></li>
          <li><a href="#">2004</a></li>
          <li><a href="#">2003</a></li>
          <li><a href="#">2002</a></li>
          <li><a href="#">2001</a></li>
        -->
      </div>
    </li>
    <li><a href="helfen.php">Helfen</a>
    </li>
    <li><a href="#">Presse</a>
    </li>
    <li><a href="kontakt.php">Kontakt</a>
    </li>
  </ul>
</nav>  