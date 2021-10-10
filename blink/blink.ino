int ledPin = 13;
int delayValue = 100;

void setup() {
  pinMode(ledPin, OUTPUT);

  digitalWrite(ledPin, LOW);
}

void loop() {
  delay(delayValue);

  digitalWrite(ledPin, HIGH);

  delay(delayValue);

  digitalWrite(ledPin, LOW);
}
