int flamePin = A0;
int flameValue = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  flameValue = analogRead(flamePin);
  Serial.println(flameValue);
  delay(1000);
}
