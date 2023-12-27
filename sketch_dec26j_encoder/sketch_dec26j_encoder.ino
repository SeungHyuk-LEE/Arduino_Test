//엔코더: hc-020k (속도 측정, 광학 엔코더는 장애물이 없으면 1, 있으면 0)
int ENCODER = 2; //2번핀의 상태변화<-0번 인터럽트 신호, 3번핀의 상태변화<-1번 인터럽트 신호

volatile int count= 0;
unsigned long oldTime = 0;
unsigned long newTime = 0;

void ISRencoder(){
  count++;
}

void setup() {
  Serial.begin(115200);
  pinMode(ENCODER, INPUT_PULLUP);
  attachInterrupt(INT0,ISRencoder,FALLING); // (엔코더 켜, 아두이노의 내부 풀업저항, 내부 풀다운은 없음)
//INT0, INT1=2,3번 핀, FALLING
}

void loop() {
  newTime = millis();
  if(newTime-oldTime>1000){
    oldTime = newTime;
    noInterrupts(); //인터럽트 잠시 끊어
    Serial.println(count); //안전하게 카운트 출력하고
    interrupts(); //다시 인터럽트 수행
  }

}
