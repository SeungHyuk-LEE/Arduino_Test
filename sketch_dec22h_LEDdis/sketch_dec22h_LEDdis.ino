const unsigned int led[6] = {3, 5, 6, 9, 10, 11};
const int buttonPin= 2;

void setup() {
  for(int x=0;x<=5;x++){
    pinMode(led[x], OUTPUT);
  }
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(buttonPin) == LOW){
    //led 쌓임 방지
    for(int i=0; i<=5;i++){
      digitalWrite(led[i],LOW);
    }
    
    for(int i=0;i<=5;i++){
      digitalWrite(led[i],HIGH);
      delay(50);
   
    if(digitalRead(buttonPin) == HIGH){
      break;
      }
    digitalWrite(led[i],LOW);
    }
    
  }
  
  
}
