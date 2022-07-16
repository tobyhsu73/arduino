byte hdr, data_h, data_l, chksum;
unsigned int distance;

void setup()
{
  Serial2.begin(9600);
  Serial.begin(9600);

}

void loop()
{
  if (Serial2.available())
  {
   
      int x=Serial2.read();
      int y=Serial2.read();
      int z=Serial2.read();
      x=(x-48)*100;
      
      Serial.println(x);

      

    

 
    
  
  delay(1);
}}
