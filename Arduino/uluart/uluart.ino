#include <SoftwareSerial.h>
byte hdr, data_h, data_l, chksum;
unsigned int distance;
SoftwareSerial ss (3, 2);
void setup()
{
  Serial.begin(57600);
  while (!Serial);

 ss.begin(9600);
}

void loop()
{ 
  ss.print('g');
  delay(50);
  if (ss.available()>3)
  {
    hdr = (byte)ss.read();
    if (hdr == 255)
    {
      data_h = (byte)ss.read();
      data_l = (byte)ss.read();
      chksum = (byte)ss .read();

      if (chksum == ((hdr + data_h + data_l)&0x00FF))
      {

  
        distance = (data_h * 256 + data_l);

        Serial.print(distance, DEC);
        Serial.println(" cm");
      }
    }
  }
  delay(50);
}
