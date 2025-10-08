int pinoTrig = 7;
int pinoEcho = 6;
int pinoBuzzer = 8;
long duracao;
int distancia;

void setup() {
pinMode(pinoTrig, OUTPUT);
pinMode(pinoEcho, INPUT);
pinMode(pinoBuzzer, OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(pinoTrig, LOW);
delayMicroseconds(2);
digitalWrite(pinoTrig, HIGH);
delayMicroseconds(10);
digitalWrite(pinoTrig, LOW);
duracao = pulseIn(pinoEcho, HIGH);
distancia = duracao * 0.034 / 2;

Serial.print("Distancia: ");
Serial.print(distancia);
Serial.println(" cm");
  
if (distancia <= 10) {
tone(pinoBuzzer, 1500);
} else if (distancia <= 50) {
tone(pinoBuzzer, 1000, 200);
delay(distancia * 2);
} else if (distancia <= 100) {
tone(pinoBuzzer, 1000, 200);
delay(distancia * 4);
} else {
noTone(pinoBuzzer);
}
}