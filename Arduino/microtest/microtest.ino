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
pinMode(7,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);

}


void loop() {
    digitalWrite(3,HIGH);
    digitalWrite(2,HIGH);
    analogWrite(5,250);
    analogWrite(6,250); 
    digitalWrite(4,HIGH);
    digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    analogWrite(11,255);
    analogWrite(10,255);
    digitalWrite(7,HIGH);

delay(5);
}
