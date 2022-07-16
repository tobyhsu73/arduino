void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);//播音
pinMode(3,OUTPUT);//AIN2
pinMode(4,OUTPUT);//AIN1左
pinMode(5,OUTPUT);//PWMA左
pinMode(6,OUTPUT);//PWMB
pinMode(7,OUTPUT);//BIN2
pinMode(8,OUTPUT);//BIN1
pinMode(9,OUTPUT);//stop
}

void forward(){
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(9,HIGH);   
digitalWrite(6,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
  }
  
void back(){
digitalWrite(4,LOW);
digitalWrite(3,HIGH);
digitalWrite(5,HIGH);
digitalWrite(9,HIGH);   
digitalWrite(6,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,HIGH);
 
  }
  
void left(){

digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
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
digitalWrite(6,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);

}

void loop() {
forward();
delay(1000);
back();
delay(1000);
right();
delay(1000);
left();
delay(1000);

}
