 void setup(){
   Serial.begin(9600);
   pinMode(13, OUTPUT);//設定13號埠作為輸出埠
   digitalWrite(13,HIGH);//讓燈開始時亮
 }
 char var;
 void loop(){
   while(Serial.available()>0)//當有訊號的時候
   {
     var=Serial.read();
     if(var=='0'){//傳過來的是0
  Serial.print("GGG");}
if(var=='1'){//傳過來的是1
 Serial.print("hhh");
   }
 }
 }
