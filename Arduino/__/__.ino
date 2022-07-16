
void setup() {
  // put your setup code here, to run once:
pinMode(36,OUTPUT);
pinMode(38,OUTPUT);
pinMode(40,OUTPUT);
pinMode(42,OUTPUT);
pinMode(44,OUTPUT);
pinMode(46,OUTPUT);
pinMode(48,OUTPUT);
pinMode(50,OUTPUT);
pinMode(52,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(52,HIGH);
digitalWrite(50,HIGH);
digitalWrite(48,HIGH);
digitalWrite(46,HIGH);
digitalWrite(44,HIGH);
digitalWrite(42,LOW);
analogWrite(3,250);
delay(3000);
digitalWrite(52,HIGH);
digitalWrite(50,HIGH);
digitalWrite(48,HIGH);
digitalWrite(46,HIGH);
digitalWrite(44,HIGH);
digitalWrite(42,HIGH);
analogWrite(3,150);
delay(2000);

}
