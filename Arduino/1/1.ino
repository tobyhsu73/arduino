int x;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

}

void loop() {
while (Serial.available()){
  x=Serial.read();
  }
Serial.print(x);
delay(50);
}
