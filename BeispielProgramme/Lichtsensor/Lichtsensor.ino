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
