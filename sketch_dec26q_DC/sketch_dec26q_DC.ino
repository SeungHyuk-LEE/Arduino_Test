int SPEED= 10;
int WHEEL = 9;
int val = 127;

void setup() {
  Serial.begin(115200);
  pinMode(SPEED,OUTPUT);
  pinMode(WHEEL,OUTPUT);
  digitalWrite(WHEEL, LOW);
  analogWrite(SPEED,0);

}

void loop() {
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
