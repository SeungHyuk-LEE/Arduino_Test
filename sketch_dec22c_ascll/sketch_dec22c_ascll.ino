void setup() {
  Serial.begin(115200);

}

void loop() {
  char a = 'F';
  for(int i=0;i<6;i++){
    for(int j=0;j<=i;j++){
      int b = a-j; 
      char c = b;
      Serial.print(c);
    }
    Serial.println();
}
  for(;;); //무한루프
}
