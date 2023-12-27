//const int LED = 10;
const int LED[8] = {2,3,4,5,6,7,8,9};
//const int ALED = 0;

void setup() {
  for(int pn=0;pn<=7; pn++){
  pinMode(LED[pn], OUTPUT);
  }
}
void loop() {
  //int t_high = analogRead(ALED);  // 입력 핀에서 값 읽기
  //for(int t_high=0;t_high<=10;t_high++){
  //  analogWrite(LED, t_high*25);
  //  delay(50);
  //}
  for(int n=0;n<=7;n++){
    for(int t_high=0;t_high<=255;t_high++){
    analogWrite(LED[n], t_high);
    delay(5);
    }
    
  }
}
