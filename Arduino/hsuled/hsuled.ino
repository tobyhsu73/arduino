int v;
int l;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(A5,INPUT);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
v = analogRead(A5);
Serial.println(v);
l=v/3;
Serial.println(l);
analogWrite(3,l);

}
