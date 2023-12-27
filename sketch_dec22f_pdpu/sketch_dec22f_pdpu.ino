// 풀업 풀다운
// 풀다운 : low->high
// 풀업 : high->low
void setup() {
  Serial.begin(115200);
  pinMode(8,INPUT);
}

void loop() {
  Serial.println(digitalRead(8));
}
