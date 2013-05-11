/*
  Lasse eine LED im sekundentakt blinken.

  hog & muzy
  http://www.raumzeitlabor.de
  License: CC-BY-SA 3.0
 */

// die LED ist an diesem Pin angeschlossen
int led = A1;

// initalisiere den LED Pin als Output
void setup() {
  pinMode(led, OUTPUT);
}

// Dies ist die Hauptroutine
void loop() {
  digitalWrite(led, HIGH);   // LED leuchtet
  delay(1000);               // Pause eine Sekunde
  digitalWrite(led, LOW);    // LED ist aus
  delay(1000);               // Pause eine Sekunde
}

