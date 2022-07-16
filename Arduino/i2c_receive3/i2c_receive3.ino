#include <Wire.h>
byte c;
//byte b;
void setup() {
  Wire.begin(3); //I2C位址與連線設定，這裡設定為3號
  Wire.onReceive(receiveEvent); //當收到I2C訊號時，啟動的動作
  Serial.begin(9600); //Serial輸出鮑率為9600
  pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT); 
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
  delay(100); //延遲0.1秒
  if(c==1){
  analogWrite( 11,250);
  analogWrite( 10,250);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
    }
    if(c==3){
  analogWrite( 11,250);
  analogWrite( 10,250);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
    }
    if(c==2){
  analogWrite( 11,250);
  analogWrite( 10,250);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
    }
  if(c==4){
  analogWrite( 11,250);
  analogWrite( 10,250);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  }
  if(c==5){
  analogWrite( 11,250);
  analogWrite( 10,250);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  }
  
  
}
//自定義的接收後的啟動副程式
void receiveEvent(int numBytes) {
  while (Wire.available()) { //判斷Wire.available()有沒有訊號
     c = Wire.read();
     //b = Wire.read();//將傳入的訊號Wire.read()指定給字串C
    Serial.print("c");
    Serial.println(c,DEC);
    //Serial.print("b");
    //Serial.println(b,DEC);
    
    //透過Serial印出字串C的內容
  }
}
