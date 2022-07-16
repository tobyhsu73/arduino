int fle = A0 ;//左前輪轉向
int fri = A1 ;//右前輪轉向
int ble = A2 ;//左後輪轉向
int bri = A3 ;//右後輪轉向



void setup() {
  pinMode(fl,INPUT);
  pinMode(fr,INPUT);
  pinMode(bl,INPUT);
  pinMode(br,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12,OUTPUT);
  delay(5000);
  




}

void loop() {
st();
delay(500);
forward();
delay(3000);
st();
delay(500);
back();
delay(3000);
st();
delay(500);
left();
delay(3000);
st();
delay(500);
right();
delay(3000);
st();
delay(500);
leftf();
delay(3000);
st();
delay(500);
rightf();
delay(3000);
st();
delay(500);
fl();
delay(3000);
fr();
delay(3000);
bl();
delay(3000);
br();
delay(3000);


}
void forward(){
  digitalWrite(12,HIGH);//SLPD
digitalWrite(6,HIGH);//SLPT
digitalWrite(7,LOW);//DIRAD
digitalWrite(8,HIGH);//DIRBD
digitalWrite(2,LOW);//DIRAt
digitalWrite(4,HIGH);//DIRBT
analogWrite(3,250);//PWMAT
analogWrite(5,250);//PWMBT
analogWrite(9,250);//PWMAD
analogWrite(10,250);//PWMBD
  }
void back(){
digitalWrite(12,HIGH);//SLPD
digitalWrite(6,HIGH);//SLPT
digitalWrite(7,HIGH);//DIRAD
digitalWrite(8,LOW);//DIRBD
digitalWrite(2,HIGH);//DIRAt
digitalWrite(4,LOW);//DIRBT
analogWrite(3,250);//PWMAT
analogWrite(5,250);//PWMBT
analogWrite(9,250);//PWMAD
analogWrite(10,250);//PWMBD
}
void left(){
  digitalWrite(12,HIGH);//SLPD
digitalWrite(6,HIGH);//SLPT
digitalWrite(7,LOW);//DIRAD
digitalWrite(8,LOW);//DIRBD
digitalWrite(2,LOW);//DIRAt
digitalWrite(4,LOW);//DIRBT
analogWrite(3,250);//PWMAT
analogWrite(5,250);//PWMBT
analogWrite(9,250);//PWMAD
analogWrite(10,250);//PWMBD
}
void right(){
digitalWrite(12,HIGH);//SLPD
digitalWrite(6,HIGH);//SLPT
digitalWrite(7,HIGH);//DIRAD
digitalWrite(8,HIGH);//DIRBD
digitalWrite(2,HIGH);//DIRAt
digitalWrite(4,HIGH);//DIRBT
analogWrite(3,250);//PWMAT
analogWrite(5,250);//PWMBT
analogWrite(9,250);//PWMAD
analogWrite(10,250);//PWMBD
}
void leftf(){
digitalWrite(12,HIGH);//SLPD
digitalWrite(6,HIGH);//SLPT
digitalWrite(7,LOW);//DIRAD
digitalWrite(8,LOW);//DIRBD
digitalWrite(2,HIGH);//DIRAt
digitalWrite(4,HIGH);//DIRBT
analogWrite(3,250);//PWMAT
analogWrite(5,250);//PWMBT
analogWrite(9,250);//PWMAD
analogWrite(10,250);//PWMBD
}
void rightf(){
digitalWrite(12,HIGH);//SLPD
digitalWrite(6,HIGH);//SLPT
digitalWrite(7,HIGH);//DIRAD
digitalWrite(8,HIGH);//DIRBD
digitalWrite(2,LOW);//DIRAt
digitalWrite(4,LOW);//DIRBT
analogWrite(3,250);//PWMAT
analogWrite(5,250);//PWMBT
analogWrite(9,250);//PWMAD
analogWrite(10,250);//PWMBD
}
void fr(){
digitalWrite(12,HIGH);//SLPD
digitalWrite(6,HIGH);//SLPT
digitalWrite(7,HIGH);//DIRAD
digitalWrite(8,HIGH);//DIRBD
digitalWrite(2,LOW);//DIRAt
digitalWrite(4,HIGH);//DIRBT
analogWrite(3,250);//PWMAT
analogWrite(5,0);//PWMBT
analogWrite(9,0);//PWMAD
analogWrite(10,250);//PWMBD
}
void br(){
digitalWrite(12,HIGH);//SLPD
digitalWrite(6,HIGH);//SLPT
digitalWrite(7,HIGH);//DIRAD
digitalWrite(8,LOW);//DIRBD
digitalWrite(2,HIGH);//DIRAt
digitalWrite(4,HIGH);//DIRBT
analogWrite(3,250);//PWMAT
analogWrite(5,0);//PWMBT
analogWrite(9,0);//PWMAD
analogWrite(10,250);//PWMBD
}
void fl(){
digitalWrite(12,HIGH);//SLPD
digitalWrite(6,HIGH);//SLPT
digitalWrite(7,LOW);//DIRAD
digitalWrite(8,HIGH);//DIRBD
digitalWrite(2,HIGH);//DIRAt
digitalWrite(4,HIGH);//DIRBT
analogWrite(3,0);//PWMAT
analogWrite(5,250);//PWMBT
analogWrite(9,250);//PWMAD
analogWrite(10,0);//PWMBD
}
void bl(){
digitalWrite(12,HIGH);//SLPD
digitalWrite(6,HIGH);//SLPT
digitalWrite(7,HIGH);//DIRAD
digitalWrite(8,HIGH);//DIRBD
digitalWrite(2,HIGH);//DIRAt
digitalWrite(4,LOW);//DIRBT
analogWrite(3,0);//PWMAT
analogWrite(5,250);//PWMBT
analogWrite(9,250);//PWMAD
analogWrite(10,0);//PWMBD
}
void st(){
digitalWrite(12,LOW);//SLPD
digitalWrite(6,LOW);//SLPT
digitalWrite(7,HIGH);//DIRAD
digitalWrite(8,HIGH);//DIRBD
digitalWrite(2,HIGH);//DIRAt
digitalWrite(4,LOW);//DIRBT
analogWrite(3,0);//PWMAT
analogWrite(5,250);//PWMBT
analogWrite(9,250);//PWMAD
analogWrite(10,0);//PWMBD
}
