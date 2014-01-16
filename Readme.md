# Relaunch Terre des Hommes Murgtal

Im Rahmen eines Praxis-Kurses an der Uni Mainz wandeln Studenten einen Entwurf für [die Terre des Hommes-Gruppe in Murgtal](http://www.tdh-murgtal.de/) um. In diesem Repository befinden sich sowohl die Arbeitsdaten, als auch ein Klickdummy. Dieser wird später in ein CMS integriert. 

Die Webseite soll selbstverständlich am Ende responsive sein. Wir entwickeln *desktop-first* und schauen uns am Ende anhand des fertigen Klickdummys an, welche Breakpoints und welche Designanpassungen wir benötigen. 

## Dateien

- Im Ordner "**design**" befinden sich die Designvorlagen in den Formaten "*psd*" und "*jpg*". 
- Ausserdem befindet sich in "**design**" der Ordner "**Module**". Darin sind die Daesigns in einzelne Module auseinandergebrochen. Sie sind die Grundlage der späteren Umsetzung.
- Im Ordner "**dev**" befinden sich alle Dateien, die am Ende den Klickdummy bilden.
- Um effizient zu arbeiten, vor allem in der Gruppe, nutzen wir PHP. Damit werden alle Bestandteile einer Webseite in Includes und damit in handhabbare kleine Einheiten aufegebrochen:
    - häufig benutzte Seitenbereiche wie der Head einer Datei, der Header und der Footer einer Seite
    - die Layoutkonstrukte wandern in Templates
    - die einzelnen Inhaltscontainer, die es zusätzlich zum Fliesstext gibt
 
## Zusammenarbeit

Die Arbeit an der Site wird in kleine Pakete aufgeteilt. Jedes Paket wird einzeln oder im Team angegangen.  

## Das Design

Das Design ist die Richtschnur für die Realisierung des Projektes. Es ist aber weder in Stein gemeisselt noch heilig. Es ist eine wichtige Orientierung. Wenn sinnvoll, werden Abweichungen vorgenommen. 

So werden im Footer der Copyright-Hinweis und der Link zum Impressum in eine Spalte gefasst.

## Code-Guidelines

Code-Guidelines sollen dabei helfen, dass das Endprodukt einen einheitlichen Eindruck nach aussen macht.

### PHP

- PHP wird nur genutzt, um Seitenbestandteile in einzelnen Schnipseln auslagern und dann einbinden zu können. Das Endprodukt dieses Projekts ist keine fertige Seite, sondern eine Vorlage für die Fertigung von CMS-Templates. PHP wird hier also nur als Tool benutzt.
- Die Includes für die Seitenspalte werden im Array ``$sideincludes`` referenziert.
- Die Includes für den Contentbereich werden im Array ``$contentincludes`` referenziert.

### HTML

- Als Basis wird [YAML](http://yaml.de) genutzt. Es bietet eine robuste Seitenarchitektur und eine sehr gute Dokumentation. Damit wird die Übernahme durch andere Entwickler erleichtert. YAML ist allerdings nur die Basis, bildet das Layout. Das Design und die einzelnen Module sind Eigenentwicklungen der Kursteilnehmer.
- Wir nutzen HTML5, alles andere macht keinen Sinn.
- Die Seiten müssen am Ende validieren. Validierungsfehler werden nur akzeptiert, wenn der Validator das eigentliche Problem darstellt, wie bei der Einbindung von WAI-ARIA.

### CSS

- Alle eigenen Entwicklungen werden im Verzeichnis "**tdh**" innerhalb des CSS-Ordners abgelegt.
- Bilder, die im CSS benötigt werden, werden im Unterverzeichnis "**images**" des Verzeichnisses "**tdh**" im CSS-Ordner abgelegt.
- Alle Klassen haben englische Namen und werden klein geschrieben.
- Sollte der Name einer Klasse aus mehreren Worten zusammengesetzt sein, werden diese mit Bindestrichen getrennt.
- Klassennamen werden nicht nach der Optik vergeben. Es wird eine sog. *semantische* Benamung angestrebt, also eine Benamung nach Art des Moduls.
- Alle Module werden unabhängig von ihrer Verortung beschrieben. Es heisst also ``.modul`` und nicht ``.ym-col1 .modul``. Ausnahmen von dieser Regel können der Footer und der Header der Webseite sein, wenn die angestrebte Lösung effizienter als die Alternative ist.
- Jedes Modul wird in einer eigenen CSS-Datei beschrieben. Es gibt eine zentrale CSS-Datei, die diese Einzeldateien alle importiert. Da wir uns in einer Entwicklungsphase befinden, ist dieses Vorgehen praktisch und gerechtfertigt. Vor dem Livegang müssen alle CSS-Dateien in eine einzige zusammengefasst werden.

#### CSS3

- Wo es sinnvoll ist, werden auch moderne CSS3-Eigenschaften genutzt. Dabei werden alle benötigten Vendor-prefixes geschrieben. Die Sortierung lautet prinzipiell: 
    1. ``-webkit-``
    2.  ``-moz-``
    3. ``-ms-``
    4. ``-o-``
- Nach den Vendor-prefixes folgt dann die eigentliche Eigenschaft.
- Ob Vendor-prefixes benötigt werden, kann man auf [CanIUse](http://caniuse.com) nachschlagen.
- Wenn eine CSS3-Eigenschaft für den IE8 mit Filtern nachgebildet werden kann, wird diese Technik genutzt.

### Browsertest  

- Alle Entwicklungen werden im aktuellen Firefox bzw. Chrome getestet. 
- Bevor ein Modul als *fertig* deklariert werden kann, muss es zusätzlich in einem aktuellen IE und dem IE8 getestet werden.
- Designunterschiede werden akzeptiert, wenn sie nicht die Lesbarkeit beeinträchtigen.
- Korrekturen für den IE8 werden mit der Klasse ``.ie8`` prefixed. Diese Regeln wandern **immer** in den Fuss des Modul-CSS.

## Layouttypen

Das Layout teilt sich in zwei grundlegende Bereiche auf:

1. Der Contentbereich
2. Die Seitenspalte

Auch der Contentbereich kann in zwei Sphären geteilt werden. Dabei gibt es immer einen Bereich, der etwa doppelt so breit ist, wie der schmalere Bereich. 

Da das einzige Unterscheidungskriterium also der Inhaltsbereich ist, habe ich die Templates dementsprechend benannt:

- Das Template "``template-1-2.inc``" hat links den schmalen und rechts den doppelt so breiten Bereich.
- Beim Template "``template-2-1.inc``" ist links der breite und rechts der schmale Bereich.


## Einzelne Werte des Designs

- Standard-Schriftart: Arial
- Standard-Schriftgröße: 14px
- Schriftgröße Nebeninfos: 12px

- rot: #AD1921
- Schriftfarbe: #19171B
- graue Schriftfarbe: #6F6F6F
- graue Striche im Contentbereich: #B1B3B3
- Farbe der Tabellenlinien: #B1B3B3
- hellblauer Hintergrund: #C9E9F7

- Navigation, inaktives Item, 1. Ebene: #6F6F6F
- Navigation, inaktives Item, 2. Ebene: #19171B
- Navigation, aktives Item: #AD1921

- Breite der Seitenspalte mit grauem Hintergrund: 175px
- Contentbereich: 760px
- Contentbereich - breitere Spalte: 505px (~66%)
- Contentbereich - schmalere Spalte: 245px (~33%)

- Größe der Lightbox mit Bildergalerie: 800x500
- Größe der Lightbox mit Text: 800x320

- Tabelle, Höhe der Zeile: 69px