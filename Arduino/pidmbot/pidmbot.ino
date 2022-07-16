/********************************************************
 * PID Basic Example
 * Reading analog input 0 to control analog PWM output 3
 ********************************************************/
#include "MeMCore.h"
#include <PID_v1.h>
#include <Wire.h>
#define PIN_INPUT 
#define PIN_OUTPUT 
MeDCMotor motor3(M1);
MeDCMotor motor4(M2);
MeUltrasonicSensor right(PORT_1);
MeUltrasonicSensor left(PORT_4);
//Define Variables we'll be connecting to
double Setpoint, Input, Output;

//Specify the links and initial tuning parameters
double Kp=2, Ki=0.0001, Kd=1;
PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);

void setup()
{
  Serial.begin(9600);
  //initialize the variables we're linked to
  Input = right.distanceCm();
  Setpoint = 20;

  //turn the PID on
  myPID.SetMode(AUTOMATIC);
}

void loop()
{
  Input = right.distanceCm();
  myPID.Compute();
  Serial.print(Input);
  Serial.print("   ");
  Serial.println(Output);
  //analogWrite(PIN_OUTPUT, Output);
  delay(100);
}
