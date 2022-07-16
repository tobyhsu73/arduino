#include <SoftwareSerial.h>
#include <Wire.h>
SoftwareSerial BT(11,12);
int x1;
int race=30;
char LEDstatus;
int x2;
int x3;
int x4;
int x5;
int da;
int db;
void setup() {
BT.begin(9600);
Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(6,OUTPUT);
pinMode(2,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);

}
void back(){ 
digitalWrite(3,HIGH);
digitalWrite(2,LOW);
analogWrite(5,race);
analogWrite(6,race); 
digitalWrite(4,HIGH);}
void forward(){ 
digitalWrite(3,LOW);
digitalWrite(2,HIGH);
analogWrite(5,race);
analogWrite(6,race); 
digitalWrite(4,HIGH);}
void left(){
  digitalWrite(3,HIGH);
digitalWrite(2,HIGH);
analogWrite(5,race);
analogWrite(6,race); 
digitalWrite(4,HIGH);}
void right(){
digitalWrite(3,LOW);
digitalWrite(2,LOW);
analogWrite(5,race);
analogWrite(6,race); 
digitalWrite(4,HIGH);
  }
void stopp(){
  digitalWrite(3,LOW);
digitalWrite(2,LOW);
analogWrite(5,race);
analogWrite(6,race); 
digitalWrite(4,LOW);
  }
void loop() {
     if (BT.available()){
    LEDstatus=BT.read();   
 Serial.println(LEDstatus);   
 }
if (LEDstatus=='h'){
  race=100;}
else if (LEDstatus=='i'){
  race=150;}
if (LEDstatus=='a'){
    forward();}
else if (LEDstatus=='b'){
    left();}
else if(LEDstatus=='c'){
    right();}
else if (LEDstatus=='d'){
    back();}
else if (LEDstatus=='g'){
    stopp();}
else if (LEDstatus=='k'){
  Serial.print('a');}


}
