//장애물 회피모듈 (평소에는 1, 장애물 발견시 0)

int IR = 2;
int LED = 13;


void setup() {
  // put your setup code here, to run once:
  pinMode(IR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int IRsensor = digitalRead(IR);
  Serial.println(IRsensor);
  if(IRsensor==LOW){    //장애물 인식
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}
