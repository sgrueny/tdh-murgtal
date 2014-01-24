<!--TODO: Muss später entfert werden-->
<!-- <link rel="stylesheet" type="text/css" href="../../css/tdh/tabelle-1.css"/>  -->

<!-- Beide JS-Dateien werden im Footer schon geladen. -->
<!-- 
<script src="js/jquery.js"></script>
<script src="js/tdh.js"></script>
-->

<!--  Der nun folgende Aufruf muss in der tdh.js stehen. 
      Dort sollte abgefragt werden, ob der angestrebte Selektor existiert und dann 
      erst die Aktion losgelassen werden und vorher das notwendige JS geladen werden. -->

<!--  So, wie das Skript hier eingebunden ist, können wir es leider nicht gebrauchen.
      Es sollen Buchstaben selektiert werden, nicht die Firmen selber. -->
<script type="text/javascript">
	
	// $(function(){
	// 	$('.sponsoren-tab-1').ddTableFilter();
	// });
</script>

<table name="sponsoren-tab-1" class="sponsoren-tab-1">
	<caption>
			<h3>Was wollen Sie sehen?</h3>
		<!-- 	<div>
				<label for="sponsorname">Firmenname:</label>
				<select id="sponsorname">
					<option value="" checked>-</option>
					<option value="A">A</option>
					<option value="B">B</option>
					<option value="C">C</option>
					<option value="D">D</option>
					<option value="E">E</option>
					<option value="F">F</option>
					<option value="G">G</option>
					<option value="H">H</option>
					<option value="I">I</option>
					<option value="J">J</option>
					<option value="K">K</option>
					<option value="L">L</option>
					<option value="M">M</option>
					<option value="N">N</option>
					<option value="O">O</option>
					<option value="P">P</option>
					<option value="Q">Q</option>
					<option value="R">R</option>
					<option value="S">S</option>
					<option value="T">T</option>
					<option value="U">U</option>
					<option value="V">V</option>
					<option value="W">W</option>
					<option value="X">X</option>
					<option value="Y">Y</option>
					<option value="Z">Z</option>
				</select>
				<label for="sponsorlocation">Ort:</label>
				<select id="sponsorlocation">
					<option value="" checked>-</option>
					<option value="Bischweiler">Bischweiler</option>
					<option value="Gernsbach-Scheuern">Gernsbach-Scheuern</option>
					<option value="Karlsruhe">Karlsruhe</option>
					<option value="Kuppenheim">Kuppenheim</option>
					<option value="Gaggenau">Gaggenau</option>
				</select>
				
				<span>Auswahl treffen und dann</span>
				<a onclick="$('.sponsoren-tab-1').ddTableFilter();">&bull; Inhalt sotieren</a>
			</div> -->
		</caption>
<thead>
	<tr>
		<th>Firmenlogo</th>
		<th>Name</th>
		<th>Ort</th>
	</tr>
</thead>
<tbody>
	<tr>
		<td>
			<div>
				<img class="sponsor-img-small flexible" alt="Katze" src="images/einzelnachhilfe.gif"/>
				<img class="sponsor-img-big flexible" alt="Katze" src="images/einzelnachhilfe.gif"/>
			</div>
		</td>
		<td><a href="#">Abacus Nachhilfeinstitut</a></td>
		<td>Gernsbach-Scheuern</td>
	</tr>
	<tr>
		<td></td>
		<td><a href="#">ABAKUS Computer</a></td>
		<td>Kuppenheim</td>
	</tr>
	<tr>
		<td></td>
		<td><a href="#">Adam Versicherungen</a></td>
		<td>Bischweiler</td>
	</tr>
	<tr>
		<td></td>
		<td><a href="#">Adolph Versicherungen</a></td>
		<td>Karlsruhe</td>
	</tr>
	<tr>
		<td>
			<div>
				<img class="sponsor-img-small flexible" alt="Katze" src="images/adler-apotheke.gif"/>
				<img class="sponsor-img-big flexible" alt="Katze" src="images/adler-apotheke.gif"/>
			</div>
		</td>
		<td><a href="#">Adler Apotheke</a></td>
		<td>Kuppenheim</td>
	</tr>
	<tr>
		<td></td>
		<td><a href="#">Barmer, Krankenkasse</a></td>
		<td>Gaggenau</td>
	</tr>
</tbody>
</table>
<ul class="sponsoren-tab-1-pagination">
  <li><a href="ueberuns-sponsoren.php">&laquo;</a></li>
  <li><a href="ueberuns-sponsoren.php">1</a></li>
  <li class="active"><a href="#">2</a></li>
  <li class="disabled"><a href="ueberuns-sponsoren3.php">3</a></li>
  <li class="disabled"><a href="ueberuns-sponsoren4.php">4</a></li>
  <li class="disabled" ><a href="ueberuns-sponsoren5.php">5</a></li>
  <li class="disabled"><a href="ueberuns-sponsoren3.php">&raquo;</a></li>
</ul>
	