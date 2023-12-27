//서보모터 라이브러리 9, 10 핀만 사용가능
#include <Servo.h>

const int SERVO=10;
Servo servo;

void setup() {
  servo.attach(SERVO);
  servo.write(0);

  delay(1000);

  for(int cnt=0;cnt<=100;cnt++) {
    servo.write(0);
    delay(1000);
    servo.write(180);
    delay(1000);
  }
  servo.detach();
}

void loop() {
  // put your main code here, to run repeatedly:

}
