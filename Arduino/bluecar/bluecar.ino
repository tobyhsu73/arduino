#include <SoftwareSerial.h>
#include <Wire.h>
SoftwareSerial BT(11,12);
char LEDstatus;
  int voice=0;
char leds;
int race=255;
void setup() {
BT.begin(9600);
Serial.begin(9600);
pinMode(2,OUTPUT);//播音
pinMode(3,OUTPUT);//AIN2
pinMode(4,OUTPUT);//AIN1
pinMode(5,OUTPUT);//PWMA
pinMode(6,OUTPUT);//PWMB
pinMode(7,OUTPUT);//BIN2
pinMode(8,OUTPUT);//BIN1
pinMode(9,OUTPUT);//stop
pinMode(10,OUTPUT);
digitalWrite(10,HIGH);
delay(500);
digitalWrite(10,LOW);

}
void forward(){
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
analogWrite(5,race);
digitalWrite(9,HIGH);   
analogWrite(6,race);
digitalWrite(7,LOW);
digitalWrite(8,HIGH); 
  }
void back(){
digitalWrite(4,LOW);
digitalWrite(3,HIGH);
analogWrite(5,race);
digitalWrite(9,HIGH);   
analogWrite(6,race);
digitalWrite(8,LOW);
digitalWrite(7,HIGH); 
  }
void left(){
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
analogWrite(5,race);
digitalWrite(9,HIGH);   
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
}
void right(){
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(9,HIGH);   
analogWrite(6,race);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);}
void stop1(){
  digitalWrite(9,LOW);
  }

void loop() {
digitalWrite(10,HIGH);  
 if (BT.available()){
    LEDstatus=BT.read();   
 Serial.println(LEDstatus);   
 }
if (LEDstatus=='h'){
  race=255;}
else if (LEDstatus=='i'){
  race=130;}
if (LEDstatus=='a'){
  
  if (voice==1){
    digitalWrite(2,HIGH);}
    forward();}
else if (LEDstatus=='b'){
  
    if (voice==1){
    digitalWrite(2,HIGH);}
    left();}
else if(LEDstatus=='c'){
  
    if (voice==1){
    digitalWrite(2,HIGH);}
    right();}
else if (LEDstatus=='d'){
  
    if (voice==1){
    digitalWrite(2,HIGH);}
    back();}
else {
  
    if (voice==1){
    digitalWrite(2,LOW);}
    stop1();}
if (LEDstatus=='e'){
  voice=1;}
else if (LEDstatus=='f'){
  voice=0;  
  }
if (voice==0){
  digitalWrite(2,LOW);}
Serial.print(LEDstatus);
delay(10);
}
