
#include <OneWire.h>

#include <LiquidCrystal_I2C.h> 
#include <Wire.h> 


int i =0;
int x;
int y;
// 運用程式庫建立物件


LiquidCrystal_I2C lcd(0x27,16,2);//設定LCD位置0x27,設定LCD大小為16*2
void setup(void)
{
  Serial.begin(9600);
  lcd.init(); //初始化LCD 
  lcd.backlight(); //開啟背光
  // 初始化

}
void loop(void)
{
 if (Serial.available()){
 x=Serial.read();

 if(x=='l'){
  lcd.setCursor(0, 0);
  lcd.print('l');
  y=Serial.read();
  if(y=='i'){
  lcd.setCursor(3,0 );
  lcd.print('i');  }
  }

 
  }

  // 要求匯流排上的所有感測器進行溫度轉換

 
  // 取得溫度讀數（攝氏）並輸出，
  // 參數0代表匯流排上第0個1-Wire裝置
  



 


  
 

}
