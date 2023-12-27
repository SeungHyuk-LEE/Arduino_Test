const int led[6] = {3,5,6,9,10,11};
const int analogPin = A0;


void setup() {
  int sensorInput = analogRead(analogPin);

  for(int n=0;n<=5;n++);

}

void loop() {
  int sensorInput = analogRead(analogPin);

  for(int n=0;n<=5;n++){
    if(sensorInput/171*(1+n))
      analogWrite(led[n], 255);
    
    else if(sensorInput/171>=(0+n))
      analogWrite(led[n], int(sensorInput%171/171,0*255));
    
}
}

//맵 함수
// map(value, fromLow, fronHigh, toLow, toHigh);
// 맵핑 값, 값의 하한값, 값의 상한값, 대상범위 하한값, 대상범위 상한값
