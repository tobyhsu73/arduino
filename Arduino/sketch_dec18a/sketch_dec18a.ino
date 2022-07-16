void setup() {
  // put your setup code here, to run once:

}

void loop() {
   digitalWrite(12,HIGH);//SLPD
digitalWrite(6,HIGH);//SLPT
digitalWrite(7,LOW);//DIRAD
digitalWrite(8,HIGH);//DIRBD
digitalWrite(2,LOW);//DIRAt
digitalWrite(4,HIGH);//DIRBT
analogWrite(3,250);//PWMAT
analogWrite(5,250);//PWMBT
analogWrite(9,250);//PWMAD
analogWrite(10,250);//PWMBD // put your main code here, to run repeatedly:

}
