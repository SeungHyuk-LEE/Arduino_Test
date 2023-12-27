const int LPIN=10;
const int buttonPin=2;


void setup() {
//  Serial.begin(115200);

  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  int buttonInput = digitalRead(buttonPin);
  if(buttonInput == 0){
    for(int t_high=0;t_high<=255;t_high++){
    analogWrite(LPIN, t_high);
    delay(5);
    }}
  else {
    analogWrite(LPIN, 0);
  }
}
