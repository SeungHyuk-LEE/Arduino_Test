//외부 인터럽트
#include <MsTimer2.h>
#define led 8
#define button 2
#include <Bounce2.h>

Bounce debouncer = Bounce();

void setup() {
  pinMode(button, INPUT_PULLUP);
  debouncer.attach(button); //
  debouncer.interval(500); //누름 상태 판별시간

  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP); //아두이노 자체 풀업 = 안누르면 HIGH
  attachInterrupt(INT0, stopp, RISING);

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
