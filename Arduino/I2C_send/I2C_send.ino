#include <Wire.h> //插入I2C函式庫<Wire> 
int forw = A0;
int left = A1;
int race = A2;
int rac;
int forh;
int sw;

void setup(){ 
Wire.begin();
Serial.begin(9600);
pinMode(race,INPUT);
pinMode(forw,INPUT);
pinMode(left,INPUT);//I2C位址與連線設定，主端不用設 
} 

void loop(){ 
readradio();
int num = 5;
if(forh<1200){
  Wire.beginTransmission(3);
Wire.write(1);


Wire.endTransmission(3);
Wire.beginTransmission(2);//開始傳送，指定給從端3號 
Wire.write(1);

//寫入訊息 hello \n 
Wire.endTransmission();
  }
else if(forh>1700){
 Wire.beginTransmission(3);
Wire.write(2);


Wire.endTransmission(3);
Wire.beginTransmission(2);//開始傳送，指定給從端3號 
Wire.write(2);

//寫入訊息 hello \n 
Wire.endTransmission(2); }
else if(sw<1200){
  Wire.beginTransmission(3);
Wire.write(3);


Wire.endTransmission(3);
Wire.beginTransmission(2);//開始傳送，指定給從端3號 
Wire.write(3);

//寫入訊息 hello \n 
Wire.endTransmission(2);}
else if(sw>1700){
  Wire.beginTransmission(3);
Wire.write(4);


Wire.endTransmission(3);
Wire.beginTransmission(2);//開始傳送，指定給從端3號 
Wire.write(4);
Wire.endTransmission(2);}
else{
   Wire.beginTransmission(3);
Wire.write(5);


Wire.endTransmission(3);
Wire.beginTransmission(2);//開始傳送，指定給從端3號 
Wire.write(5);
Wire.endTransmission(2);
  }


 //結束通訊 
//delay(2000);
//Wire.beginTransmission(3);
//Wire.write(15);


//Wire.endTransmission(3);
//Wire.beginTransmission(2);//開始傳送，指定給從端3號 
//Wire.write(15);

//寫入訊息 hello \n 
//Wire.endTransmission();
//delay(1000);
}
void readradio(){
 rac = pulseIn(race,HIGH,60000);
 forh =pulseIn(forw,HIGH,60000);
 sw =pulseIn(left,HIGH,60000);
Serial.print(rac);
Serial.print("  ");
Serial.print(forh);
Serial.print("  ");
Serial.print(sw);
Serial.println("  ");
}
