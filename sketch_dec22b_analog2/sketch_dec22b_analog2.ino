//const int LED = 10;
const int LED[6] = {3,5,6,9,10,11};
//const int ALED = 0;

void setup() {
  for(int pn=0;pn<=5; pn++){
  pinMode(LED[pn], OUTPUT);
  }
}
void loop() {
  //int t_high = analogRead(ALED);  // 입력 핀에서 값 읽기
  //for(int t_high=0;t_high<=10;t_high++){
  //  analogWrite(LED, t_high*25);
  //  delay(50);
  //}
  for(int n=0;n<=5;n++){
    for(int t_high=0;t_high<=255;t_high++){
    analogWrite(LED[n], t_high);
    delay(5);
    }
    
  }
  for(int n=0;n<=5;n++){
    
    analogWrite(LED[n], 0);
    delay(500);
    }
    
}
