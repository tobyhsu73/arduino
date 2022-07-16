#include<Servo.h>
Servo mylove;
Servo mylove2;
int motor = A4;
int motor2 = A2;
int but1 = 5;
int but2 = 6;
void setup() {
mylove.attach(motor);
mylove2.attach(motor);
pinMode(motor,OUTPUT);
pinMode(motor2,OUTPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
}

void loop() {
digitalRead(but1);
digitalRead(but1);
if (but1 == HIGH and but2 == HIGH){
mylove.write(180); 
mylove2.write(180); 
}
else if (but1 == HIGH and but2 == LOW){
mylove.write(180); 
mylove2.write(0); 
} 
else if (but1 == LOW and but2 == HIGH){
mylove.write(0); 
mylove2.write(180); 
}
else{
mylove.write(0); 
mylove2.write(0); 
} 
}
