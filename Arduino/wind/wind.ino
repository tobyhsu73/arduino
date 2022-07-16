void setup() {
  // put your setup code here, to run once:
  pinMode(3,INPUT);
  pinMode(6,INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

analogRead(6);
Serial.print("3 ");
Serial.print(analogRead(3));
Serial.print("  6 ");
Serial.println(analogRead(6));
delay(1000);
}
