// C++ code
//
const int LED[8] = {2,3,4,5,6,7,8,9};

void setup()
{
  for(int pn=0;pn<=7; pn++){
  pinMode(LED[pn], OUTPUT);
  
}
}
void loop()
{
  for(int pn=0;pn<=6; pn+=1){
  digitalWrite(LED[pn], HIGH);
  digitalWrite(LED[pn+1], HIGH);
  delay(500);
  digitalWrite(LED[pn], LOW);
  digitalWrite(LED[pn+1], LOW);
  }
  for(int pn=6;pn>=0; pn-=1){
  digitalWrite(LED[pn], HIGH);
  digitalWrite(LED[pn+1], HIGH);
  delay(500);
  digitalWrite(LED[pn], LOW);
  digitalWrite(LED[pn+1], LOW);
  }
      
    

}
