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
    <li><a class="active" href="#">Über Uns</a> 			<!-- Die Klasse 'active' markiert den aktuell gewählten Menüpunkt -->
       <div class="submenu"> 								<!-- Bisher nur ein Untermenü -->
        <ul>
          <li><a href="#">Das Team</a></li>
          <li><a href="#">Mitwirkende und Helfer</a></li>
          <li><a class="active" href="ueberuns-sponsoren.php">Sponsoren</a></li>
          <li><a href="#">Über terre de hommes</a></li>
          <li><a href="ueberuns-aktivitaeten.php">Unsere Aktivitäten</a></li>
        </ul>
      </div>
    </li>
    <li><a href="#">Meldungen</a>
    </li>
    <li><a href="impressum.php">Impressum</a>
    </li>
    <li><a href="helfen.php">Helfen</a>
    </li>
    <li><a href="#">Presse</a>
    </li>
    <li><a href="kontakt.php">Kontakt</a>
    </li>
  </ul>
</nav>  