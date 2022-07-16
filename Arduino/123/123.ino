char data[10];
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.begin(9600);
  delay(500);
  while (Serial2.available()){
    Serial2.read();
  }
  Serial.print("開始");
}

void loop() {
  byte flag = 0;
  while (Serial2.available() && flag<10){
    data[flag] = Serial2.read();
    flag++;
  }
  if(data[0] != 0){
    
        Serial.print(data);
      
     
    }
  }
  
