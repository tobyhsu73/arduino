float R=0.02;
int charge;
int chargePin = 7;


void setup() {
  // put your setup code here, to run once:
pinMode(chargePin,OUTPUT);
pinMode(A0,INPUT);
pinMode(A5,INPUT);
Serial.begin(9600);
Serial.println("CLEARDATA");
Serial.println("LABEL,Time,Voltage,Current");
Serial.println("RESETTIMER");
Serial.println("CUSTOMBOX1,LABEL,charge");
Serial.println("CUSTOMBOX1,SET,0");
}

void loop() {

  Serial.println("CUSTOMBOX1,GET");
  charge=Serial.readStringUntil(10).toInt();
  
  if (charge==0){
    digitalWrite(chargePin,HIGH);}
  else{
    digitalWrite(chargePin,LOW);}
  int V_A0=analogRead(0);
  int V_A5=analogRead(5);
  float V_C=(V_A0)*5.0/1023.0;
  float V=(V_A5)*5.0/1023.0;
  float I=(V-V_C)/R;

  Serial.print("DATA,TIMER,");
  Serial.print(V_C,3);
  Serial.print(",");
  Serial.print(I,3);
  delay(100);
  // put your main code here, to run repeatedly:

}
