//초음파 센서의 거리에 따라 모터 속도 제어

int SPEED= 10;
int WHEEL = 9;
int val = 127;
const int trig_pin = 11;
const int echo_pin = 12;


void setup() {
  Serial.begin(115200);
  pinMode(SPEED,OUTPUT);
  pinMode(WHEEL,OUTPUT);
  digitalWrite(WHEEL, LOW);
  analogWrite(SPEED,0);
  pinMode(trig_pin, OUTPUT);
  pinMode(echo_pin, INPUT);
}

void loop() {
  digitalWrite(trig_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(trig_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig_pin, LOW);

  long duration = pulseIn(echo_pin, HIGH);
  long distance = (duration/2) /29.1; // distance = duration/58.2

  Serial.print(distance);
  Serial.println(" cm");

  digitalWrite(WHEEL, LOW);
  int level = map(distance, 0, 1023, 0, 6);
  analogWrite(SPEED, level*100);
  
  if (Serial.available()>0){
    char c = Serial.read();
    if(c=='R'){
      digitalWrite(WHEEL, LOW);
      analogWrite(SPEED,val);
    }
    else if(c=='L'){
      digitalWrite(WHEEL, HIGH);
      analogWrite(SPEED,val);
    }
    else if(c=='S'){
      digitalWrite(WHEEL, LOW);
      analogWrite(SPEED,0);
    }
  }

}
