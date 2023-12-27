#include <MsTimer2.h>
#define led 8
#define button 2

void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP); //아두이노 자체 풀업 = 안누르면 HIGH
  MsTimer2::set(10, aa); //10sec마다 aa 실행
  MsTimer2::start();

}

void loop() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void aa(){
  if(digitalRead(button)==0){ //풀업이나 누르면 LOW
    Serial.println("Pressed");
  }
}
