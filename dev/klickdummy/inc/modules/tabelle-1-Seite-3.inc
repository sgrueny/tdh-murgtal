<form class="caption" action="/">
		<h3>Sponsorenliste</h3>
		<label for="alphabetic-list">Tabelle filtern nach Anfangsbuchstabe</label>
		<select id="alphabetic-list">
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
		<span> in </span>
		<span>
			<input type="radio" name="alphabet" id="firmenname">
			<label for="firmenname">Firmenname</label>
		</span>
		<span>
			<input type="radio" name="alphabet" id="formenort">
			<label for="formenort">Ort</label>
		</span>
		<input type="submit" value="filtern">
</form>
<table class="sponsoren-tab-1 responsive">
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
				<div class="tooltip" data-tooltip="http://beerhold.it/300/200" data-alttext="Ein total toller Alternativtext">
					<img class="sponsor-img-small" alt="Katze" src="http://beerhold.it/300/200"/>
				</div>
			</td>
			<td><a href="#">Abacus Nachhilfeinstitut</a></td>
			<td>Gernsbach-Scheuern</td>
		</tr>
		<tr>
			<td>
				<div class="sponsor-img">
					<img class="sponsor-img-small" alt="Katze" src="http://beerhold.it/301/200"/>
					<img class="sponsor-img-big" alt="Katze" src="http://beerhold.it/301/200"/>
				</div>
			</td>
			<td><a href="#">ABAKUS Computer</a></td>
			<td>Kuppenheim</td>
		</tr>
		<tr>
			<td>
				<div class="tooltip" data-tooltip="http://beerhold.it/302/200" data-alttext="Ein total toller Alternativtext">
					<img class="sponsor-img-small" alt="Katze" src="http://beerhold.it/302/200"/>
				</div>
			</td>
			<td><a href="#">Adam Versicherungen</a></td>
			<td>Bischweiler</td>
		</tr>
		<tr>
			<td>
				<div class="sponsor-img">
					<img class="sponsor-img-small" alt="Katze" src="http://beerhold.it/300/201"/>
					<img class="sponsor-img-big" alt="Katze" src="http://beerhold.it/300/201"/>
				</div>
			</td>
			<td><a href="#">Adolph Versicherungen</a></td>
			<td>Karlsruhe</td>
		</tr>
		<tr>
			<td>
				<div class="tooltip" data-tooltip="http://beerhold.it/301/202" data-alttext="Ein total toller Alternativtext">
					<img class="sponsor-img-small" alt="Katze" src="http://beerhold.it/301/202"/>
				</div>
			</td>
			<td><a href="#">Adler Apotheke</a></td>
			<td>Kuppenheim</td>
		</tr>
		<tr>
			<td>
				<div class="sponsor-img">
					<img class="sponsor-img-small" alt="Katze" src="http://beerhold.it/300/203"/>
					<img class="sponsor-img-big" alt="Katze" src="http://beerhold.it/300/203"/>
				</div>
			</td>
			<td><a href="#">Barmer, Krankenkasse</a></td>
			<td>Gaggenau</td>
		</tr>
	</tbody>
</table>
<!--Pagination unter der Tabelle-->
<div class="pagination">
	<ul>
		<li><a href="ueberuns-sponsoren2.php">&laquo;</a></li>
		<li><a href="ueberuns-sponsoren.php">1</a></li>
		<li><a href="ueberuns-sponsoren2.php">2</a></li>
		<li class="active"><a href="#">3</a></li>
		<li class="disabled"><a href="ueberuns-sponsoren4.php">4</a></li>
		<li class="disabled"><a href="ueberuns-sponsoren5.php">5</a></li>
		<li class="disabled"><a href="ueberuns-sponsoren4.php">&raquo;</a></li>
	</ul>
</div>
