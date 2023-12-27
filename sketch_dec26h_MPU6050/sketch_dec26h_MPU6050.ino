#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;

sensors_event_t a, g, temp;
void setup(void) {                      //파라미터 명시금지 (void)
  Serial.begin(115200);
  while (!Serial)
    delay(10);

  Serial.println("Adafruit MPU6050 test!");

  if(!mpu.begin()){
    Serial.println("Failed to find MPU6050 chip");
    while (1){
      delay(10);
    }
  }
  Serial.println("MPU6050 Found!");
}

void loop() {
  // put your main code here, to run repeatedly:

}
