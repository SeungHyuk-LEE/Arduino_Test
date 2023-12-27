//버튼 디바운스를 이용한 마우스 만들기
#include <Bounce2.h>

int Button_L = 2;
int Button_R = 3;
Bounce debouncer_L = Bounce();
Bounce debouncer_R = Bounce();

void setup() {
  pinMode(Button_L, INPUT_PULLUP);
  debouncer_L.attach(Button_L);//
  debouncer_L.interval(5); //누름 상태 판별시간
  pinMode(Button_R, INPUT_PULLUP);
  debouncer_R.attach(Button_R);//
  debouncer_R.interval(5); //누름 상태 판별시간
  Serial.begin(115200);
}

void loop() {
  debouncer_L.update();
  debouncer_R.update();
  if(debouncer_L.fell()){
    Serial.println("Button_Left_Pressed");
  }
  if(debouncer_R.fell()){
    //while(debouncer_R.fell)
    Serial.println("Button_Right_Pressed");
  }
}
