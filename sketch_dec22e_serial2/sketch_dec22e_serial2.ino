const int LED = 10;
int i = 0;
void setup() {
  Serial.begin(115200);

}

void loop() {
  if(Serial.available()) {
    char userInput = Serial.read();
    switch(userInput) {
      case '0':
        int light = i+25;
        int i = light;
        analogWrite(LED, light);
        break;
      case 'd':
        light = i-25;
        i = light;
        analogWrite(LED, light);
        break;
      default:
        //Serial.println(userInput);
        break;
    }
    
    
    Serial.print(userInput);
  }
}
