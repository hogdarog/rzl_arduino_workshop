Arduino Workshop
====================

Hier findet sich eine kurze Anleitung f�r den [Arduino](http://www.arduino.cc) Workshop des [RaumZeitLabors](http://www.raumzeitlabor.de).

Dies ist nicht als eigenst�ndiges Tutorial gedacht, sondern vielmehr als Erg�nzung sowie Link- & Dateisammlung zum Workshop.


Ziel des Workshops
------------------

Wir werden diesen Bausatz 

![Arduino Uno Bausatz ](doc/images/arduino-compatible11.jpg)

zusammenloeten zu: 

![Fertiger Arduino Uno ](doc/images/arduino-compatible31.jpg)


Details hierzu finden sich in der (englischen) [Bauanleitung](http://dlnmh9ip6v2uc.cloudfront.net/datasheets/Kits/SFE03-0010-KitCard-ArduinoPTH-ReadersSpreads.pdf)

Eine sehr gute Anleitung zum L�ten findet sich im [RZL Wiki](https://wiki.raumzeitlabor.de/wiki/L%C3%B6ten_lernen) oder als [PDF](https://wiki.raumzeitlabor.de/images/b/bf/L%C3%B6ten_lernen.pdf).

Software
--------

Um einen Arduino zu programmieren, braucht man nur die freie und quelloffene Arduino Entwicklungsumgebung. 
Es gibt sie f�r 
[Windows](http://arduino.cc/en/Guide/Windows),
[Mac](http://arduino.cc/en/Guide/MacOSX), und 
[Linux](http://www.arduino.cc/playground/Learning/Linux)

Eine Beschreibung der Software findet sich unter
[http://www.arduino-tutorial.de/2010/06/arduino-software/](http://www.arduino-tutorial.de/2010/06/arduino-software/) (deutsch) bzw.
[http://arduino.cc/en/Guide/Environment](http://arduino.cc/en/Guide/Environment) (englisch)

Viele Tutorials sowie weitergehende Erkl�rungen finden sich bei [http://www.arduino-tutorial.de/]()

Programmierung
--------------
Der Arduino wird mit per USB/Seriell-Adapter mit Strom versorgt und von der Entwicklungsumgebung programmiert.
Eventuell wird f�r den Adapter noch ein Treiber ben�tigt, f�r den darin verbauten **PL2303** Chip. 
Bei [Prolific](http://www.prolific.com.tw/US/ShowProduct.aspx?p_id=229&pcid=41) finden sich Treiber f�r Windows und MacOSX.

**Achtung**: Da die USB/Seriell-Adapter keine DTR/Reset Leitung haben, muss der Arduino manuell resetted werden, wenn des Programm fertig compiliert ist und �bertragen wird.
Der genaue Zeitpunkt h�ngt vom jeweiligen Rechner ab und muss empirisch ermittelt werden.

Erster Test
-----------

Schliesse den Arduino via USB/Seriell-Adapter an Deinen Rechner an, starte die
Arduino Entwicklungsumgebung und w�hle aus dem Datei-Men� "Beispiele"
(Examples) "01 Basics" das Beispiel "Blink" aus. Nachdem Du es per "Upload" auf
den Arduino ueberspielt hast, sollte die gr�ne LED auf Deinem Arduino im
Sekundentakt blinken...


Beispielprogramme
-----------------

* [LED Test](./BeispielProgramme/LED/LED.md)
* [blinkende LED](./BeispielProgramme/LED_blink/LED_blink.md)
* [Lichtsensor](./BeispielProgramme/Lichtsensor/Lichtsensor.md)
* [Buzzer](./BeispielProgramme/Buzzer/Buzzer.md)
* [Vibrationssensor](./BeispielProgramme/Vibrationssensor/Vibrationssensor.md)


Weiterf�hrende Links
--------------------

- [Arduino Programmier Handbuch](http://www.freeduino.de/de/books/arduino-programmier-handbuch)
- [Willies World](http://klaas.homeip.net/ArduinoWiki/doku.php?id=arduino:einleitung)
- [Arduino-Tutorial](http://www.arduino-tutorial.de/)

- [Hall Sensor 3144 datasheet](http://www.sparkfun.com/datasheets/Components/General/Hall-US1881EUA.pdf)
