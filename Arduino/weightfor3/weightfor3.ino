#include "HX711.h"
const int DT_PIN = 3;
const int SCK_PIN = 5;
const int DT_PIN1 = 9;
const int SCK_PIN1 = 6;
const int DT_PIN2 = 10;
const int SCK_PIN2 = 11;
const int scale_factor = -388;
const int scale_factor1 = 394;
const int scale_factor2 = 387;
HX711 scale;
HX711 scale1;
HX711 scale2;
void setup() {
  Serial.begin(9600);
  scale.begin(DT_PIN, SCK_PIN);
  scale1.begin(DT_PIN1, SCK_PIN1);
  scale2.begin(DT_PIN2, SCK_PIN2);
  scale.set_scale(scale_factor);
  scale1.set_scale(scale_factor1);
  scale2.set_scale(scale_factor2);
  scale.tare();
  scale1.tare();
  scale2.tare();
  // put your setup code here, to run once:

}

void loop() {
  int a=scale.get_units(3)-2;
  int b=scale1.get_units(3);
  int c=scale2.get_units(3);
  Serial.print('s');
  if (a<10){
    Serial.print("000");
    }
  else if(a<100){
    Serial.print("00");}
  else if(a<1000){
    Serial.print("0");}
  Serial.print(abs(a));
  if (b<10){
    Serial.print("000");
    }
  else if(b<100){
    Serial.print("00");}
  else if(b<1000){
    Serial.print("0");}
  Serial.print(abs(b));
    if (c<10){
    Serial.print("000");
    }
  else if(c<100){
    Serial.print("00");}
  else if(c<1000){
    Serial.print("0");}
  Serial.println(abs(c));
  delay(50);
 
  // put your main code here, to run repeatedly:

}
