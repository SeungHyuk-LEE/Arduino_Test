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
  for(int pn=0;pn<=6; pn+=2){
  digitalWrite(LED[pn], HIGH);
  delay(500);
  digitalWrite(LED[pn], LOW);
  }
  for(int pn=1;pn<=7; pn+=2){
  digitalWrite(LED[pn], HIGH);
  delay(500);
  digitalWrite(LED[pn], LOW);
}
    
 
  
    

}
