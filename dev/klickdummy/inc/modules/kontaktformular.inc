<meta charset="UTF-8"/>
<link rel="stylesheet" type="text/css" href ="../../css/yaml/core/base.css"><!--zu entfernen-->
<link rel="stylesheet" type="text/css" href ="../../css/yaml/forms/gray-theme.css"><!--zu entfernen-->
<link rel="stylesheet" type="text/css" href ="../../css/tdh/kontaktformular.css"> <!--zu entfernen-->
<div id= "kontakt">
	<h2>Kontakt mit terre des hommes Murgtal</h2>
	<p>Schreiben Sie uns eine Nachricht - wir melden uns so schnell wie möglich bei Ihnen</p>
	<form class="ym-form ym-columnar">
		<div class="ym-fbox ym-fbox-select">
			<label for="request"  class = "ym-clearfix">Was ist Ihr Anliegen? <p>Wählen Sie bitte aus, worum es Ihnen geht - so finden wir schneller den richtigen Ansprechpartner</p></label>
			<select name="request" id="request" class = "contact-request">
				<option selected>Allgemeines</option>
			</select>
		</div>
		<div class = "ym-fbox ym-fbox-text">
			<label for="name">Ihr Name<sup class="ym-required">*</sup></label>
			<input type="text" name="name" id="name" placeholder="Ihr Name"/>
		</div>
		<div class = "ym-fbox ym-fbox-text">
			<label for="email">Ihre E-Mail Adresse<sup class="ym-required">*</sup></label>
			<input type="text" name="email" id="email" placeholder="Ihre E-Mail Adresse"/>
		</div>
		<div class = "ym-fbox ym-fbox-text">
			<label for="message">Ihre Nachricht<sup class="ym-required">*</sup><p>Hinterlassen Sie hier auch Ihre Adresse oder Telefonnummer, wenn Sie möchten, dass wir telephonisch oder schriftlich mit Ihnen im Kontakt treten</p></label>
			<textarea name="message" id = "message" rows ="10" placeholder = "Ihre Nachricht an tdh Murgtal"></textarea>
		</div>
		<div class = "ym-fbox-footer ym-fbox-button">
				
			<button type = "submit" class = "save ym-success" id="submit"><ul><li>Nachricht senden</li></ul></button>
		</div>

	</form>
</div>

