int x;
void setup() 
{
  Serial.begin(9600); // 9600 bps
}
void loop()
{
  if ( Serial.available()){
  x=Serial.read();
  }

Serial.write(x);
delay(500);


}
