/*
  Regle die Helligkeit einer LED mit einem Lichtsensor.
  Je dunkler der Lichtsensor, desto heller die LED.

  hog & muzy
  http://www.raumzeitlabor.de
  License: CC-BY-SA 3.0
 */

// die LED ist an diesen Pin angeschlossen
int led = 10;

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

  // Kehre den Wert des Sensors um
  Helligkeit = map(Helligkeit, 0, 255, 255, 0);

  analogWrite(led, Helligkeit);
  delay(10);
}

