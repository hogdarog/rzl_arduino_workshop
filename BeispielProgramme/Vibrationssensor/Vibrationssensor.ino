/*
  Lasse eine LED leuchten, wenn der Vibrationssensor bewegt wird.

  hog & muzy
  http://www.raumzeitlabor.de
  License: CC-BY-SA 3.0
 */

// der Sensor ist an diesen Pin angeschlossen
int Vibrationssensor = A0;
int LED = A1;
int schwelle = 975;

// initalisiere den Pin als Input
void setup() {
  pinMode(Vibrationssensor, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  byte runtimer = 200;
}

// Dies ist die Hauptroutine
void loop() {
  int messwert = analogRead(Vibrationssensor);

  Serial.println(messwert);

  int ledwert = map(messwert, 0,1024, 0, 255);
  if (messwert > schwelle){
    digitalWrite(LED, ledwert);
    delay(500);
    digitalWrite(LED, LOW);
  };

  delay(100);
}

