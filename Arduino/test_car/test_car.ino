int forw = 6;
int lef = 7;
int race = 8;
int rac;
int forh;
int sw;
int i;
void setup() {
pinMode(52,OUTPUT);
pinMode(2,OUTPUT);
pinMode(50,OUTPUT);
pinMode(3,OUTPUT);
pinMode(42,OUTPUT);
pinMode(48,OUTPUT);
pinMode(3,OUTPUT);
pinMode(46,OUTPUT);
pinMode(5,OUTPUT);
pinMode(40,OUTPUT);
Serial.begin(9600);
pinMode(race,INPUT);
pinMode(forw,INPUT);
pinMode(lef,INPUT);

}

void loop() {
int num = 2;

Serial.print(" 5 ");
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
digitalWrite(50,LOW);
digitalWrite(42,HIGH);
digitalWrite(48,HIGH);
digitalWrite(46,LOW);
digitalWrite(52,HIGH);
analogWrite(2,i);
analogWrite(3,i);
analogWrite(4,i);
analogWrite(5,i);
break;
case 3:
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
Serial.print(" 3 ");
break;
case 4:
right();
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


  }  


}
void forward(){
 digitalWrite(44,HIGH);
digitalWrite(50,HIGH);
digitalWrite(42,HIGH);
digitalWrite(48,LOW);
digitalWrite(46,HIGH);
digitalWrite(52,LOW);
analogWrite(2,100);
analogWrite(3,100);
analogWrite(4,100);
analogWrite(5,100);}
void right(){
  digitalWrite(44,HIGH);
digitalWrite(50,LOW);
digitalWrite(42,HIGH);
digitalWrite(48,LOW);
digitalWrite(46,LOW);
digitalWrite(52,LOW);
analogWrite(2,i);
analogWrite(3,i);
analogWrite(4,i);
analogWrite(5,i);}
void left(){
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
  }
void back(){
digitalWrite(44,HIGH);
digitalWrite(50,LOW);
digitalWrite(42,HIGH);
digitalWrite(48,HIGH);
digitalWrite(46,LOW);
digitalWrite(52,HIGH);
analogWrite(2,i);
analogWrite(3,i);
analogWrite(4,i);
analogWrite(5,i);}
void no(){
digitalWrite(44,LOW);
digitalWrite(50,HIGH);
digitalWrite(42,LOW);
digitalWrite(48,LOW);
digitalWrite(46,HIGH);
digitalWrite(52,LOW);
analogWrite(2,i);
analogWrite(3,i);
analogWrite(4,i);
analogWrite(5,i); }
void readradio(){
 rac = pulseIn(race,HIGH,60000);
 forh =pulseIn(forw,HIGH,60000);
 sw =pulseIn(lef,HIGH,60000);
Serial.print(rac); 
Serial.print("  ");
Serial.print(forh);
Serial.print("  ");
Serial.print(sw);
Serial.println("  ");}
