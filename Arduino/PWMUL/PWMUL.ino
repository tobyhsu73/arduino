/**
 * 
 * Author: Ritesh Talreja, Made in China, Warehouse: Shenzhen, Guangdong.
 * 
 * Components: Arduino UNO, DYPA02YYWM  v1.0
 * 
 * Arduino UNO +5V    --> DYPA02YYUM Pin 1 Red
 * Arduino UNO GND    --> DYPA02YYUM Pin 2 Black
 * Arduino UNO Pin 11 --> DYPA02YYUM Pin 3
 * Arduino UNO Pin 10 --> DYPA02YYUM Pin 4
 * 
 */

#define TRIGGER_PIN 22
#define PWM_OUTPUT_PIN 24
#define TRIGGER_PIN1 10
#define PWM_OUTPUT_PIN1 11
#define TRIGGER_PIN2 28
#define PWM_OUTPUT_PIN2 26
long duration;
float distance;
long duration1;
float distance1;
long duration2;
float distance2;
void setup()
{
  Serial.begin(57600);
  while (!Serial);
  pinMode(TRIGGER_PIN1, OUTPUT);
  pinMode(PWM_OUTPUT_PIN1, INPUT);
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(PWM_OUTPUT_PIN, INPUT);
    pinMode(TRIGGER_PIN2, OUTPUT);
  pinMode(PWM_OUTPUT_PIN2, INPUT);
}

void loop()
{
  // The sensor is triggered by a falling edge of a HIGH pulse that 
  // is more than 60 microseconds in duration.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(5);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(100);
  digitalWrite(TRIGGER_PIN, LOW);
   pinMode(PWM_OUTPUT_PIN, INPUT);
  duration = pulseIn(PWM_OUTPUT_PIN, HIGH);
  distance = duration;
  distance = distance / 58;  
  Serial.print(distance);
  Serial.print(" cm 2 ");
  delay(5);
  
  digitalWrite(TRIGGER_PIN1, LOW);
  delayMicroseconds(5);
  digitalWrite(TRIGGER_PIN1, HIGH);
  delayMicroseconds(100);
  digitalWrite(TRIGGER_PIN1, LOW);
   pinMode(PWM_OUTPUT_PIN1, INPUT);
  duration1 = pulseIn(PWM_OUTPUT_PIN1, HIGH);
  distance1 = duration1;
  distance1 = distance1 / 58;  
  Serial.print(distance1);
  Serial.print(" cm 3 ");
  delay(5);

   digitalWrite(TRIGGER_PIN2, LOW);
  delayMicroseconds(5);
  digitalWrite(TRIGGER_PIN2, HIGH);
  delayMicroseconds(100);
  digitalWrite(TRIGGER_PIN2, LOW);
   pinMode(PWM_OUTPUT_PIN2, INPUT);
  duration2 = pulseIn(PWM_OUTPUT_PIN2, HIGH);
  distance2 = duration2;
  distance2 = distance2 / 58;  
  Serial.print(distance2);
  Serial.println(" cm");
  delay(5);  
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  // If no object detected, fixed pulse width of 35ms is sent
  // by the sensor.

 
  // Convert the pulse width duration into a distance

  

}
