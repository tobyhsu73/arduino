#include<OneWire.h>
#include<DallasTemperature.h>
#define onewirebus 2
OneWire oneWire(onewirebus);
DallasTemperature sensors(&oneWire);
float value;
void setup() {
  
Serial.begin(9600);
Serial.println("CLEARSHEET");
sensors.begin();
Serial.println("LABEL, Time, sensor data");
}

void loop() {
sensors.requestTemperatures();
value=sensors.getTempCByIndex(0);

Serial.print("DATA, TIME,");
Serial.println(value);
delay(500);
}
