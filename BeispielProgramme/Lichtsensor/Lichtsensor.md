Beispiel Lichtsensor
======================

Wie im [LED-Beispiel](../LED/LED.md), schliessen wir einen 100 Ohm Widerstand zwischen einem analogen Pin des Arduino (hier: A1) und dem langen Bein einer LED. 
Das kurze Bein der LED verbinden wir mit Masse (GND). 
Zusätzlich verbinden wir einen Pin (Orientierung egal) des Photowiderstandes (photocell) mit 5V, den anderen Pin sowohl mit A3 als auch über einem 10k Widerstand mit Masse (GND) 

![Fritzing schema](Lichtsensor.png)

Der Beispielcode findet sich in der Datei [Lichtsensor.ino](Lichtsensor.ino).

```c++
/*
  Regle die Helligkeit einer LED mit einem Lichtsensor.
  Je dunkler der Lichtsensor, desto heller die LED.
*/

// die LED ist an diesen Pin angeschlossen
int led = A1;

// der Lichtsensor ist an diesen Pin angeschlossen
int lichtsensor = A3;

// initalisiere den LED Pin als Output, den Lichtsensor Pin als Input
void setup() {
  pinMode(led, OUTPUT);
  pinMode(lichtsensor, INPUT);
}

// Dies ist die Hauptroutine
void loop() {

  // Lese die Helligkeit vom Lichtsensor ein
  byte Helligkeit = analogRead(lichtsensor);

  // Stelle sicher, dass der Wert zwischen 0 und 255 liegt
  Helligkeit = map(Helligkeit, 0, 1024, 0, 255);

  digitalWrite(led, Helligkeit);
  delay(100);
}
```


