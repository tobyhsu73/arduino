#include <SoftwareSerial.h>
SoftwareSerial mySerial(11,10); // RX, TX
int i;
int dat[32]={0};
unsigned long a,p,q,z;
void setup()
{
 Serial.begin(9600);
 mySerial.begin(115200);
}

void loop()
{
    if(mySerial.available()>=32)
    {
      if(millis()-a>500)
      {
        a=millis();
        for(i=0;i<32;i++)
        {
          dat[i]=mySerial.read();
        }
        for(i=0;i<16;i++)
        {
          if(dat[i]==0x57&&dat[i+1]==0&&dat[i+2]==0xff&&dat[i+3]==0)
          {
            if(dat[i+12]+dat[i+13]*255==0)
            {
              Serial.println("Out of range!");
            }
            else
            { 
          z=dat[i+11];
          Serial.print("Status = ");
          Serial.print(z);
          p=dat[i+12]+dat[i+13]*255;
          Serial.print("  Strength = ");
          Serial.print(p);
              q=dat[i+8]+dat[i+9]*255;
              Serial.print("  Distance = ");
              Serial.print(q);
              Serial.println("mm");
            }
             break; 
          }
        }
      }
    }
}
