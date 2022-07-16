/********************************************************
 * PID Proportional on measurement Example
 * Setting the PID to use Proportional on measurement will 
 * make the output move more smoothly when the setpoint 
 * is changed.  In addition, it can eliminate overshoot
 * in certain processes like sous-vides.
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

//Specify the links and initial tuning parameters
PID myPID(&Input, &Output, &Setpoint,2,5,1,P_ON_M, DIRECT); //P_ON_M specifies that Proportional on Measurement be used
                                                            //P_ON_E (Proportional on Error) is the default behavior

void setup()
{
  //initialize the variables we're linked to
  Input = right.distanceCm();
  Setpoint = 10;

  //turn the PID on
  myPID.SetMode(AUTOMATIC);
}

void loop()
{
  Input = analogRead(0);
  myPID.Compute();
  analogWrite(3,Output);
}
