int inApin[2] = {7, 4};  // INA: Clockwise input
int inBpin[2] = {8, 9}; // INB: Counter-clockwise input
int pwmpin[2] = {5, 6}; // PWM input
int cspin[2] = {2, 3}; // CS: Current sense ANALOG input
int enpin[2] = {0, 1}; // EN: Status of switches output (Analog pin)

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT); 
pinMode(4,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(12,OUTPUT);
}

void loop() {
  analogWrite( 11,250);
  analogWrite( 10,250);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(12,LOW);
  // put your main code here, to run repeatedly:

}
