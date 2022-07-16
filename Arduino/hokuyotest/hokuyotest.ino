void setup() {
  // put your setup code here, to run once:
pinMode(4,INPUT);
pinMode(7,OUTPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalRead(4);
digitalWrite(7,HIGH);
digitalWrite(9,LOW);
Serial.println(digitalRead(4));
}
