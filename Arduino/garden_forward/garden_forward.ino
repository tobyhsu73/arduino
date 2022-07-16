
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT); 
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);

}

void loop() {
  analogWrite( 11,250);
  analogWrite( 10,250);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  
 
  // put your main code here, to run repeatedly:

}
