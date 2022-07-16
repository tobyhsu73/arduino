void setup() {
  // put your setup code here, to run once:
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

}

void loop() {
digitalWrite(44,HIGH);
digitalWrite(50,LOW);
digitalWrite(42,HIGH);
digitalWrite(48,HIGH);
digitalWrite(46,LOW);
digitalWrite(52,HIGH);
analogWrite(2,100);
analogWrite(3,100);
analogWrite(4,100);
analogWrite(5,100);
}
