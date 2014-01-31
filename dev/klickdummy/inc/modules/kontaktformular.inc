<div class="contactformular">
	<h3>Kontakt mit terre des hommes Murgtal</h3>
	<p>Schreiben Sie uns eine Nachricht - wir melden uns so schnell wie möglich bei Ihnen</p>
	<form action="/" class="ym-form ym-columnar">
		<div class="ym-fbox margin-select">
			<label for="request">Was ist Ihr Anliegen? Wählen Sie bitte aus, worum es Ihnen geht - so finden wir schneller den richtigen Ansprechpartner</label>
			<select name="request" id="request" class = "contact-request">
				<option value="op1">Allgemeines</option>
				<option value="op2">Besonderes</option>
				<option value="op3">Spezielles</option>
			</select>
		</div>
		<div class="ym-fbox isrequired">
			<label for="name">Ihr Name<sup class="ym-required">*</sup></label>
			<input type="text" name="name" id="name" placeholder="Ihr Name"/>
		</div>
		<div class="ym-fbox isrequired">
			<label for="email">Ihre E-Mail Adresse<sup class="ym-required">*</sup></label>
			<input type="email" name="email" id="email" placeholder="Ihre E-Mail Adresse"/>
		</div>
		<div class="ym-fbox isrequired margin-textarea">
			<label for="message">Ihre Nachricht<sup class="ym-required">*</sup> Hinterlassen Sie hier auch Ihre Adresse oder Telefonnummer, wenn Sie möchten, dass wir telephonisch oder schriftlich mit Ihnen im Kontakt treten.</label>
			<textarea name="message" id="message" rows="10" placeholder="Ihre Nachricht an tdh Murgtal"></textarea>
		</div>
		<div class="ym-fbox-footer">	
			<button type="submit" class="ym-success" id="submit">Nachricht senden</button>
		</div>

	</form>
</div>
