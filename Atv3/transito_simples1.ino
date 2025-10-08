int pinosLed[] = {13, 12, 11};
int tempo = 3000;
void setup() {
	for (int i = 0; i < 3; i++) {
	pinMode(pinosLed[i], OUTPUT);
}
}

void loop() {
	digitalWrite(pinosLed[0], HIGH);
    delay(tempo);
    digitalWrite(pinosLed[0], LOW);
  for (int i = 0; i < 3; i++){
    digitalWrite(pinosLed[1], HIGH);
  	delay(500);
    digitalWrite(pinosLed[1], LOW);
    delay(500);
  }
  	digitalWrite(pinosLed[2], HIGH);
	delay(tempo);
  	digitalWrite(pinosLed[2], LOW);
}