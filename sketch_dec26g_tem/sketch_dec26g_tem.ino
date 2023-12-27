//온습도 센서
//윈도우즈+마침표 = 문자표
#include <DHT.h>
#include <DHT_U.h>

int DHTPIN = 2;
int DHTTYPE = DHT11;
int LED = 13;

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(LED,OUTPUT);

}

void loop() {
  float t = dht.readTemperature();
  float h = dht.readHumidity();

  if (isnan(h) || isnan(t)){
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
  Serial.print("Tem:");
  Serial.print(t);
  Serial.print(" `c");
  Serial.print("        ");
  Serial.print("Hum:");
  Serial.print(h);
  Serial.println(" %");
  delay(200);

  if(t>=30) digitalWrite(LED, HIGH);
  else digitalWrite(LED, LOW);

}
