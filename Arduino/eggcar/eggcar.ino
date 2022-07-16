#include "sbus.h"
SbusRx sbus_rx(&Serial2);
int il;
int i;
int lfb = 42;
int lfw = 44;
int lfg = 46;
byte hdr, data_h, data_l, chksum;
unsigned int distance;
int rfb = 48;
int rfw = 50;
int rfg = 52;

int lbb = 43;
int lbw = 45;
int lbg = 47;

int LSpeed,RSpeed;  //左右輪的速度
int MaxSpeed;  
int rbb = 49;
int rbw = 51;
int rbg = 53;
long duration;



void setup() 
{ 
  Serial.begin(9600);
  delay(100);
  //開啟S-bus
  sbus_rx.Begin();
  
  pinMode(lfb, OUTPUT);
  pinMode(lfw, OUTPUT);
  pinMode(lfg, OUTPUT);
  pinMode(rfb, OUTPUT);
  pinMode(rfw, OUTPUT);
  pinMode(rfg, OUTPUT);
  pinMode(lbb, OUTPUT);
  pinMode(lbw, OUTPUT);
  pinMode(lbg, OUTPUT);
  pinMode(rbb, OUTPUT);
  pinMode(rbw, OUTPUT);
  pinMode(lfg, OUTPUT);
pinMode(rbg, OUTPUT);
pinMode(2, OUTPUT);
pinMode(4, OUTPUT);
pinMode(6, OUTPUT);
pinMode(8, OUTPUT);
}
void forward()
{
  digitalWrite(rfb, LOW);
  digitalWrite(rfw, LOW);
  digitalWrite(rfg, HIGH);
  digitalWrite(lfb, LOW);
  digitalWrite(lfw, LOW);
  digitalWrite(lfg, LOW);
  digitalWrite(lbb, LOW);
  digitalWrite(lbw, LOW);
  digitalWrite(lbg, LOW);
  digitalWrite(rbb, LOW);
  digitalWrite(rbw, LOW);
  digitalWrite(rbg, HIGH);
analogWrite(2,il);
analogWrite(4,il);
analogWrite(6,i);
analogWrite(8,i);
}
void left()
{
  digitalWrite(rfb, LOW);
  digitalWrite(rfw, LOW);
  digitalWrite(rfg, HIGH);//左後
  digitalWrite(lfb, LOW);
  digitalWrite(lfw, LOW);
  digitalWrite(lfg, HIGH);//右後
  digitalWrite(lbb, LOW);
  digitalWrite(lbw, LOW);
  digitalWrite(lbg, HIGH);//右前
  digitalWrite(rbb, LOW);
  digitalWrite(rbw, LOW);
  digitalWrite(rbg, HIGH);//左前

analogWrite(2,il);
analogWrite(4,il);
analogWrite(6,i);
analogWrite(8,i);
}
void right(){
   digitalWrite(rfb, LOW);
  digitalWrite(rfw, LOW);
  digitalWrite(rfg, LOW);//左後
  digitalWrite(lfb, LOW);
  digitalWrite(lfw, LOW);
  digitalWrite(lfg, LOW);//右後
  digitalWrite(lbb, LOW);
  digitalWrite(lbw, LOW);
  digitalWrite(lbg, LOW);//右前
  digitalWrite(rbb, LOW);
  digitalWrite(rbw, LOW);
  digitalWrite(rbg, LOW);//左前

analogWrite(2,il);
analogWrite(4,il);
analogWrite(6,i);
analogWrite(8,i);
  }

void back(){
   digitalWrite(rfb, LOW);
  digitalWrite(rfw, LOW);
  digitalWrite(rfg, LOW);//左後
  digitalWrite(lfb, LOW);
  digitalWrite(lfw, LOW);
  digitalWrite(lfg, HIGH);//右後
  digitalWrite(lbb, LOW);
  digitalWrite(lbw, LOW);
  digitalWrite(lbg, HIGH);//右前
  digitalWrite(rbb, LOW);
  digitalWrite(rbw, LOW);
  digitalWrite(rbg, LOW);//左前

analogWrite(2,il);
analogWrite(4,il);
analogWrite(6,i);
analogWrite(8,i);
  }
void stopp(){
   digitalWrite(rfb, HIGH);
  digitalWrite(rfw, HIGH);
  digitalWrite(rfg, LOW);//左後
  digitalWrite(lfb, HIGH);
  digitalWrite(lfw, HIGH);
  digitalWrite(lfg, HIGH);//右後
  digitalWrite(lbb, HIGH);
  digitalWrite(lbw, HIGH);
  digitalWrite(lbg, HIGH);//右前
  digitalWrite(rbb, HIGH);
  digitalWrite(rbw, HIGH);
  digitalWrite(rbg, LOW);//左前

analogWrite(2,il);
analogWrite(4,il);
analogWrite(6,i);
analogWrite(8,i);
  }
void loop(){
  //讀取SBUS並控制
  if(sbus_rx.Read()) {
      //Sbus讀取指令如下
      //sbus_rx.rx_channels()[i]
      //sbus_rx.lost_frame()
      //sbus_rx.failsafe()
    //動作
        //丟包或讀取失敗-停車
    if(sbus_rx.lost_frame() || sbus_rx.failsafe()){
        LSpeed = 0;
        RSpeed = 0;
    }else{  //成功讀取到
        //由ch8 VR(B) 控制最高速度
      if(sbus_rx.rx_channels()[7] < 310){
        MaxSpeed = 20;
      }else if(sbus_rx.rx_channels()[7] > 1690){
        MaxSpeed = 255;
      }else{
        MaxSpeed =map(sbus_rx.rx_channels()[7],310,1690,20,255);
      }
      //Serial.print(" maxSpeed= ");Serial.print(MaxSpeed);Serial.print("\t");

      //由ch2 左Y 決定進退速度
      int Speed;
      if(sbus_rx.rx_channels()[1] < 310){  //全速前進
        Speed = MaxSpeed;
      }else if(sbus_rx.rx_channels()[1] > 1690){  //全速後退
        Speed = -MaxSpeed;
      }else if(sbus_rx.rx_channels()[1] < 970){  //前進
        Speed = map(sbus_rx.rx_channels()[1],970,310,10,MaxSpeed);
      }else if(sbus_rx.rx_channels()[1] > 1030){  //後退
        Speed = map(sbus_rx.rx_channels()[1],1030,1690,-10,-MaxSpeed);
      }else{
        Speed = 0;
      }

      //由ch4 左x 決定轉向
      int turnSpeed;
      if(sbus_rx.rx_channels()[3] < 310){  //全速左轉
        turnSpeed = MaxSpeed;
      }else if(sbus_rx.rx_channels()[3] > 1690){  //全速右轉
        turnSpeed = -MaxSpeed;
      }else if(sbus_rx.rx_channels()[3] < 970){  //左轉
        turnSpeed = map(sbus_rx.rx_channels()[3],970,310,10,MaxSpeed);
      }else if(sbus_rx.rx_channels()[3] > 1030){  //右轉
        turnSpeed = map(sbus_rx.rx_channels()[3],1030,1690,-10,-MaxSpeed);
      }else{
        turnSpeed = 0;
      }
      //Serial.print(" channels[1]= ");Serial.print(sbus_rx.rx_channels()[1]);Serial.print("\t");
      //Serial.print(" Speed= ");Serial.print(Speed);Serial.print("\t");
      //Serial.print(" channels[3]= ");Serial.print(sbus_rx.rx_channels()[3]);Serial.print("\t");
      //Serial.print(" turnSpeed= ");Serial.print(turnSpeed);Serial.print("\t");
      //Serial.print(" channels[7]= ");Serial.print(sbus_rx.rx_channels()[7]);Serial.print("\t");
      //Serial.print(" MaxSpeed= ");Serial.print(MaxSpeed);Serial.print("\t");
      //Serial.println();

      //將進退及轉向換算成左右轉速
      differentialCalculation(Speed,turnSpeed);
      
    }
  }

}

//==============================副程式==============================
//====================速度計算副程式====================
//將遙控器的"前後"及"左右轉"換算成左右輪速度
void differentialCalculation(int Speed,int turnSpeed){
  //計算差速後速度
  if(Speed-turnSpeed/2 > 255){  //左輪前進過快
    LSpeed = 255;
    RSpeed = 255+turnSpeed;
    
  }else if(Speed+turnSpeed/2 > 255){  //右輪前進過快
    LSpeed = 255-turnSpeed;
    RSpeed = 255;
  }else if(Speed-turnSpeed/2 < -255){  //左輪後退過快
    LSpeed = -255;
    RSpeed = -255+turnSpeed;
  }else if(Speed+turnSpeed/2 < -255){  //右輪後退過快
    LSpeed = -255-turnSpeed;
    RSpeed = -255;
  }else{
    LSpeed = Speed-turnSpeed/2;
    RSpeed = Speed+turnSpeed/2;
  }
  Serial.print(LSpeed);
  Serial.print("      ");
  Serial.println(RSpeed);
  if(LSpeed>=0 and RSpeed>=0){
    il=LSpeed;
    i=RSpeed;
    forward();}
  else if(LSpeed<0 and RSpeed <0){
    il=-LSpeed;
    i=-RSpeed;
    back();}
  else if(LSpeed<0 and RSpeed>=0){
    i=RSpeed;
    il=-LSpeed;
    left();}
  else if(LSpeed>=0 and RSpeed<0){
    i=-RSpeed;
    il=LSpeed;
    right();
    }
  else{
    stopp();}
}
