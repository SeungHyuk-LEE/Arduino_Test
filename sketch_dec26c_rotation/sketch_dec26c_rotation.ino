const int ledPin = 10;
const int analogPin = A0;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int analogValue = analogRead(analogPin);
  Serial.println(analogValue);
  analogWrite(ledPin, analogValue/4);
}
