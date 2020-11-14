int race = A0;//接收速度
int forw = A1;//接收前後
int swi =A2;//接收橫移
int ri =A4;//左右
int ln1=13;//左前
int ln2=5;
int ln3=6;//右前
int ln4=12;
int ln5=2;//左後
int ln6=4;
int ln7=7;//右後
int ln8=8;
int x;
int i=150;
void setup() {
  pinMode(race,INPUT);
  pinMode(forw,INPUT);
  pinMode(swi,INPUT);
  pinMode(ln1,OUTPUT);
  pinMode(ln2,OUTPUT);
  pinMode(ln3,OUTPUT);
  pinMode(ln4,OUTPUT);
   pinMode(ln5,OUTPUT);
  pinMode(ln6,OUTPUT);
  pinMode(ln7,OUTPUT);
  pinMode(ln8,OUTPUT);
   pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(9,OUTPUT);
 
 
  
  Serial.begin(9600);
}

void loop() {





int num = 5;
if ( Serial.available()){
  x=Serial.read();
  Serial.write(x);
if(x=='f'){
  num=1;
  Serial.print('k');}
else if(x=='l'){
  num=2;
  Serial.print('k');}
 else{
  num=3;}
    Serial.print(num);
    switch(num){
 case 1:
Serial.print(" 1 ");
 digitalWrite(44,HIGH);
digitalWrite(50,HIGH);
digitalWrite(42,HIGH);
digitalWrite(48,LOW);
digitalWrite(46,HIGH);
digitalWrite(52,LOW);
analogWrite(2,i);
analogWrite(3,i);
analogWrite(4,i);
analogWrite(5,i);
break;
case 2:
Serial.print(" 2 ");
digitalWrite(44,HIGH);
digitalWrite(50,HIGH);
digitalWrite(42,HIGH);
digitalWrite(48,HIGH);
digitalWrite(46,HIGH);
digitalWrite(52,HIGH);
analogWrite(2,i);
analogWrite(3,i);
analogWrite(4,i);
analogWrite(5,i);
break;
case 3:
 digitalWrite(44,LOW);
digitalWrite(50,HIGH);
digitalWrite(42,LOW);
digitalWrite(48,HIGH);
digitalWrite(46,HIGH);
digitalWrite(52,HIGH);
analogWrite(2,i);
analogWrite(3,i);
analogWrite(4,i);
analogWrite(5,i);
Serial.print(" 3 ");
break;
case 4:
  digitalWrite(44,HIGH);
digitalWrite(50,LOW);
digitalWrite(42,HIGH);
digitalWrite(48,LOW);
digitalWrite(46,LOW);
digitalWrite(52,LOW);
analogWrite(2,i);
analogWrite(3,i);
analogWrite(4,i);
analogWrite(5,i);
Serial.print(" 4 ");
break;

  } 
  }
  num=4;
}
//    if(rac<1200){
  //analogWrite( 10,250);}
//  else if(rac>1300 and rac<1600){
  //  analogWrite( 10,150);
  //}
 // else if(rac>1700 ){
   // analogWrite( 10,90);
 // }
  //if(rac<1200){
 // analogWrite( 11,250);}
  //else if(rac>1300 and rac<1600){
    //analogWrite( 11,150);
  //}
  //else if(rac>1700 ){
   // analogWrite( 11,90);
  //}
