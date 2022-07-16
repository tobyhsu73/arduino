int x1;
int x2;
int x3;
int x4;
int x5;
int da;
int db;
void setup() {
Serial.begin(9600);
pinMode(3,OUTPUT);
pinMode(6,OUTPUT);
pinMode(2,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);

}

void rec(){
  while(Serial.available()>3){
    x1=Serial.read();
    if (x1=='f'){
      x2=Serial.read();
      x3=Serial.read();
      x4=Serial.read();
      x5=Serial.read();
      if (x2=='h'){
        da=HIGH;}
      
      else if(x2=='l'){
        da=LOW;}
      if (x3=='h'){
        db=HIGH;}
      else if(x3=='l'){
        db=LOW;}
      digitalWrite(3,da);
      digitalWrite(2,db);
      analogWrite(5,x4);
      analogWrite(6,x5); 
      digitalWrite(4,HIGH);}


    }}
 
void loop() {
rec();
delay(5);
}
