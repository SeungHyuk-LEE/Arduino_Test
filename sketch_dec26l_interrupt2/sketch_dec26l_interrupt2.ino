//내부 인터럽트
#include <MsTimer2.h>
#define led 8
#define button 2
#include <Bounce2.h>

Bounce debouncer = Bounce();

void setup() {

  debouncer.attach(button); //
  debouncer.interval(5); //누름 상태 판별시간

  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP); //아두이노 자체 풀업 = 안누르면 HIGH
  MsTimer2::set(10, stopp); //10sec마다 stopp 실행
  MsTimer2::start();

}

void loop() {
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}

void stopp(){
  debouncer.update();

  if(debouncer.fell()){
    Serial.println("Pressed");
    digitalWrite(led, LOW);
    
  }
}
