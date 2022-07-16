#include "MeMCore.h"
#include <Wire.h>
MeDCMotor motor3(M1);
MeDCMotor motor4(M2);
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
    motor3.run(-200);
    motor4.run(-200);
    delay(330);
    motor3.stop();
    motor4.stop();
    delay(500);
    motor3.run(200);//left
    motor4.run(200);
    delay(320);
    motor3.stop();
    motor4.stop();
    delay(500);
}
