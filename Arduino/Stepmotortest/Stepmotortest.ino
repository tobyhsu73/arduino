int PUL=7; //define Pulse pin
int DIR=6; //define Direction pin
int ENA=5; //define Enable Pin
int t=50;
void setup() {
  pinMode (PUL, OUTPUT);
  pinMode (DIR, OUTPUT);
  pinMode (ENA, OUTPUT);
 delay(2000);
 Serial.begin(9600);
}

void loop() {
 for(int i=0;i<12000;i=i+1){
    digitalWrite(DIR,LOW);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,LOW);
    delayMicroseconds(300);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(300);}

delay(500);
for(int i=0;i<12000;i=i+1){
    digitalWrite(DIR,HIGH);
    digitalWrite(ENA,HIGH);
    digitalWrite(PUL,LOW);
    delayMicroseconds(300);
    digitalWrite(PUL,HIGH);
    delayMicroseconds(300);}
delay(1000);
}
