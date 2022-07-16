//函式庫
#include <Adafruit_NeoPixel.h>

//設定引腳  設定LED數量
#define PIN 4
#define NUMPIXELS 8
#define PIN1 5
#define NUMPIXELS1 8
#define PIN2 6
#define NUMPIXELS2 8
#define PIN3 7
#define NUMPIXELS3 8
#define PIN4 8
#define NUMPIXELS4 8
#define PIN5 9
#define NUMPIXELS5 8
//建立物件(像素,引腳,顏色順序?)  //舊版函式庫沒第三項
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels1(NUMPIXELS1, PIN1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2(NUMPIXELS, PIN2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels3(NUMPIXELS, PIN3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels4(NUMPIXELS, PIN4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels5(NUMPIXELS, PIN5, NEO_GRB + NEO_KHZ800);
//不重要，範例用
#define DELAYVAL 50

void setup() {
  //初始化
  pixels1.begin();
  pixels.begin();
  pixels2.begin();
  pixels3.begin();
  pixels4.begin();
  pixels5.begin();
  Serial.begin(9600);
}
void rred(){
  for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels5.setPixelColor(i%NUMPIXELS, pixels5.Color(250, 0, 0));
    pixels5.setPixelColor((i-1)%NUMPIXELS, pixels5.Color(250, 0, 0));
    pixels5.setPixelColor((i-2)%NUMPIXELS, pixels5.Color(250, 0,0 ));
    pixels5.setPixelColor((i-3)%NUMPIXELS, pixels5.Color(250, 0, 0));
    pixels5.setPixelColor((i-4)%NUMPIXELS, pixels5.Color(250, 0, 0));
    pixels5.setPixelColor((i-5)%NUMPIXELS, pixels5.Color(250, 0, 0));}    
  }
void rfred(){
  for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels1.setPixelColor(i%NUMPIXELS, pixels1.Color(250, 0, 0));
    pixels1.setPixelColor((i-1)%NUMPIXELS, pixels1.Color(250, 0, 0));
    pixels1.setPixelColor((i-2)%NUMPIXELS, pixels1.Color(250, 0,0 ));
    pixels1.setPixelColor((i-3)%NUMPIXELS, pixels1.Color(250, 0, 0));
    pixels1.setPixelColor((i-4)%NUMPIXELS, pixels1.Color(250, 0, 0));
    pixels1.setPixelColor((i-5)%NUMPIXELS, pixels1.Color(250, 0, 0));}    
  }
void bred(){
  for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels4.setPixelColor(i%NUMPIXELS, pixels4.Color(250, 0, 0));
    pixels4.setPixelColor((i-1)%NUMPIXELS, pixels4.Color(250, 0, 0));
    pixels4.setPixelColor((i-2)%NUMPIXELS, pixels4.Color(250, 0,0 ));
    pixels4.setPixelColor((i-3)%NUMPIXELS, pixels4.Color(250, 0, 0));
    pixels4.setPixelColor((i-4)%NUMPIXELS, pixels4.Color(250, 0, 0));
    pixels4.setPixelColor((i-5)%NUMPIXELS, pixels4.Color(250, 0, 0));}    
  }
void lred(){
  for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels2.setPixelColor(i%NUMPIXELS, pixels2.Color(250, 0, 0));
    pixels2.setPixelColor((i-1)%NUMPIXELS, pixels2.Color(250, 0, 0));
    pixels2.setPixelColor((i-2)%NUMPIXELS, pixels2.Color(250, 0,0 ));
    pixels2.setPixelColor((i-3)%NUMPIXELS, pixels2.Color(250, 0, 0));
    pixels2.setPixelColor((i-4)%NUMPIXELS, pixels2.Color(250, 0, 0));
    pixels2.setPixelColor((i-5)%NUMPIXELS, pixels2.Color(250, 0, 0));}    
  }
void lfred(){
  for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels3.setPixelColor(i%NUMPIXELS, pixels3.Color(250, 0, 0));
    pixels3.setPixelColor((i-1)%NUMPIXELS, pixels3.Color(250, 0, 0));
    pixels3.setPixelColor((i-2)%NUMPIXELS, pixels3.Color(250, 0,0 ));
    pixels3.setPixelColor((i-3)%NUMPIXELS, pixels3.Color(250, 0, 0));
    pixels3.setPixelColor((i-4)%NUMPIXELS, pixels3.Color(250, 0, 0));
    pixels3.setPixelColor((i-5)%NUMPIXELS, pixels3.Color(250, 0, 0));}    
  }
void fred(){
  for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels.setPixelColor(i%NUMPIXELS, pixels.Color(250, 0, 0));
    pixels.setPixelColor((i-1)%NUMPIXELS, pixels.Color(250, 0, 0));
    pixels.setPixelColor((i-2)%NUMPIXELS, pixels.Color(250, 0,0 ));
    pixels.setPixelColor((i-3)%NUMPIXELS, pixels.Color(250, 0, 0));
    pixels.setPixelColor((i-4)%NUMPIXELS, pixels.Color(250, 0, 0));
    pixels.setPixelColor((i-5)%NUMPIXELS, pixels.Color(250, 0, 0));}    
  }
void fgre(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels.setPixelColor(i%NUMPIXELS, pixels.Color(0, 255, 0));
    pixels.setPixelColor((i-1)%NUMPIXELS, pixels.Color(0, 255, 0));
    pixels.setPixelColor((i-2)%NUMPIXELS, pixels.Color(0, 255,0 ));
    pixels.setPixelColor((i-3)%NUMPIXELS, pixels.Color(0, 255, 0));
    pixels.setPixelColor((i-4)%NUMPIXELS, pixels.Color(0, 255,0));
    pixels.setPixelColor((i-5)%NUMPIXELS, pixels.Color(0, 255, 0));} 
  }
void bgre(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels4.setPixelColor(i%NUMPIXELS, pixels4.Color(0, 255, 0));
    pixels4.setPixelColor((i-1)%NUMPIXELS, pixels4.Color(0, 255, 0));
    pixels4.setPixelColor((i-2)%NUMPIXELS, pixels4.Color(0, 255,0 ));
    pixels4.setPixelColor((i-3)%NUMPIXELS, pixels4.Color(0, 255, 0));
    pixels4.setPixelColor((i-4)%NUMPIXELS, pixels4.Color(0, 255,0));
    pixels4.setPixelColor((i-5)%NUMPIXELS, pixels4.Color(0, 255, 0));} 
  }
void rgre(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels5.setPixelColor(i%NUMPIXELS, pixels5.Color(0, 255, 0));
    pixels5.setPixelColor((i-1)%NUMPIXELS, pixels5.Color(0, 255, 0));
    pixels5.setPixelColor((i-2)%NUMPIXELS, pixels5.Color(0, 255,0 ));
    pixels5.setPixelColor((i-3)%NUMPIXELS, pixels5.Color(0, 255, 0));
    pixels5.setPixelColor((i-4)%NUMPIXELS, pixels5.Color(0, 255,0));
    pixels5.setPixelColor((i-5)%NUMPIXELS, pixels5.Color(0, 255, 0));} 
  }
void lgre(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels2.setPixelColor(i%NUMPIXELS, pixels2.Color(0, 255, 0));
    pixels2.setPixelColor((i-1)%NUMPIXELS, pixels2.Color(0, 255, 0));
    pixels2.setPixelColor((i-2)%NUMPIXELS, pixels2.Color(0, 255,0 ));
    pixels2.setPixelColor((i-3)%NUMPIXELS, pixels2.Color(0, 255, 0));
    pixels2.setPixelColor((i-4)%NUMPIXELS, pixels2.Color(0, 255,0));
    pixels2.setPixelColor((i-5)%NUMPIXELS, pixels2.Color(0, 255, 0));} 
  }
void lfgre(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels3.setPixelColor(i%NUMPIXELS, pixels3.Color(0, 255, 0));
    pixels3.setPixelColor((i-1)%NUMPIXELS, pixels3.Color(0, 255, 0));
    pixels3.setPixelColor((i-2)%NUMPIXELS, pixels3.Color(0, 255,0 ));
    pixels3.setPixelColor((i-3)%NUMPIXELS, pixels3.Color(0, 255, 0));
    pixels3.setPixelColor((i-4)%NUMPIXELS, pixels3.Color(0, 255,0));
    pixels3.setPixelColor((i-5)%NUMPIXELS, pixels3.Color(0, 255, 0));} 
  }
 void rfgre(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels1.setPixelColor(i%NUMPIXELS, pixels1.Color(0, 255, 0));
    pixels1.setPixelColor((i-1)%NUMPIXELS, pixels1.Color(0, 255, 0));
    pixels1.setPixelColor((i-2)%NUMPIXELS, pixels1.Color(0, 255,0 ));
    pixels1.setPixelColor((i-3)%NUMPIXELS, pixels1.Color(0, 255, 0));
    pixels1.setPixelColor((i-4)%NUMPIXELS, pixels1.Color(0, 255,0));
    pixels1.setPixelColor((i-5)%NUMPIXELS, pixels1.Color(0, 255, 0));} 
  }
 void frgre(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels1.setPixelColor(i%NUMPIXELS, pixels2.Color(0, 255, 0));
    pixels1.setPixelColor((i-1)%NUMPIXELS, pixels2.Color(0, 255, 0));
    pixels1.setPixelColor((i-2)%NUMPIXELS, pixels2.Color(0, 255,0 ));
    pixels1.setPixelColor((i-3)%NUMPIXELS, pixels2.Color(0, 255, 0));
    pixels1.setPixelColor((i-4)%NUMPIXELS, pixels2.Color(0, 255,0));
    pixels1.setPixelColor((i-5)%NUMPIXELS, pixels2.Color(0, 255, 0));} 
  }
  
void fblu(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels.setPixelColor(i%NUMPIXELS, pixels.Color(0, 0, 0));
    pixels.setPixelColor((i-1)%NUMPIXELS, pixels.Color(0, 0, 255));
    pixels.setPixelColor((i-2)%NUMPIXELS, pixels.Color(0, 0,255 ));
    pixels.setPixelColor((i-3)%NUMPIXELS, pixels.Color(0, 0, 255));
    pixels.setPixelColor((i-4)%NUMPIXELS, pixels.Color(0, 0, 255));
    pixels.setPixelColor((i-5)%NUMPIXELS, pixels.Color(0, 0, 255));} }
void bblu(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels4.setPixelColor(i%NUMPIXELS, pixels4.Color(0, 0, 0));
    pixels4.setPixelColor((i-1)%NUMPIXELS, pixels4.Color(0, 0, 255));
    pixels4.setPixelColor((i-2)%NUMPIXELS, pixels4.Color(0, 0,255 ));
    pixels4.setPixelColor((i-3)%NUMPIXELS, pixels4.Color(0, 0, 255));
    pixels4.setPixelColor((i-4)%NUMPIXELS, pixels4.Color(0, 0, 255));
    pixels4.setPixelColor((i-5)%NUMPIXELS, pixels4.Color(0, 0, 255));} }
void rblu(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels5.setPixelColor(i%NUMPIXELS, pixels5.Color(0, 0, 0));
    pixels5.setPixelColor((i-1)%NUMPIXELS, pixels5.Color(0, 0, 255));
    pixels5.setPixelColor((i-2)%NUMPIXELS, pixels5.Color(0, 0,255 ));
    pixels5.setPixelColor((i-3)%NUMPIXELS, pixels5.Color(0, 0, 255));
    pixels5.setPixelColor((i-4)%NUMPIXELS, pixels5.Color(0, 0, 255));
    pixels5.setPixelColor((i-5)%NUMPIXELS, pixels5.Color(0, 0, 255));} }
void lblu(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels2.setPixelColor(i%NUMPIXELS, pixels2.Color(0, 0, 255));
    pixels2.setPixelColor((i-1)%NUMPIXELS, pixels2.Color(0, 0, 255));
    pixels2.setPixelColor((i-2)%NUMPIXELS, pixels2.Color(0, 0,255 ));
    pixels2.setPixelColor((i-3)%NUMPIXELS, pixels2.Color(0, 0, 255));
    pixels2.setPixelColor((i-4)%NUMPIXELS, pixels2.Color(0, 0, 255));
    pixels2.setPixelColor((i-5)%NUMPIXELS, pixels2.Color(0, 0, 255));} }
void flblu(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels3.setPixelColor(i%NUMPIXELS, pixels3.Color(0, 0, 255));
    pixels3.setPixelColor((i-1)%NUMPIXELS, pixels3.Color(0, 0, 255));
    pixels3.setPixelColor((i-2)%NUMPIXELS, pixels3.Color(0, 0,255 ));
    pixels3.setPixelColor((i-3)%NUMPIXELS, pixels3.Color(0, 0, 255));
    pixels3.setPixelColor((i-4)%NUMPIXELS, pixels3.Color(0, 0, 255));
    pixels3.setPixelColor((i-5)%NUMPIXELS, pixels3.Color(0, 0, 255));} }
void frblu(){
    for(int i=NUMPIXELS; i<NUMPIXELS*2; i++) { // For each pixel...

    //設定(燈號,顏色)，顏色依序為(R,G,B)，由0~255
    pixels1.setPixelColor(i%NUMPIXELS, pixels1.Color(0, 0, 255));
    pixels1.setPixelColor((i-1)%NUMPIXELS, pixels1.Color(0, 0, 255));
    pixels1.setPixelColor((i-2)%NUMPIXELS, pixels1.Color(0, 0,255 ));
    pixels1.setPixelColor((i-3)%NUMPIXELS, pixels1.Color(0, 0, 255));
    pixels1.setPixelColor((i-4)%NUMPIXELS, pixels1.Color(0, 0, 255));
    pixels1.setPixelColor((i-5)%NUMPIXELS, pixels1.Color(0, 0, 255));} }
//1.f 2.rf 3.lf 4.l 5.r 6.b
void loop() {
  int a,b,c,d,e,f;
  while (Serial.available()){
    a=Serial.read();
    b=Serial.read();
    c=Serial.read();
    d=Serial.read();
    e=Serial.read();
    f=Serial.read();
     }
    if (a=='r'){
      fred();
      }
    else if(a=='g'){
      fgre();}
    else if(a=='b'){
      fblu();
      }
    
    if (b=='r'){
      rfred();
      }
    else if(b=='g'){
      rfgre();}
    else if(b=='b'){
      frblu();
      }
    
    if (c=='r'){
      lfred();
      }
    else if(c=='g'){
      lfgre();}
    else if(c=='b'){
      flblu();
      }
    
    if (d=='r'){
      lred();
      }
    else if(d=='g'){
      lgre();}
    else if(d=='b'){
      lblu();
      }
    
    if (e=='r'){
      rred();
      }
    else if(e=='g'){
      rgre();}
    else if(e=='b'){
      rblu();
      }
    
    if (f=='r'){
      bred();
      }
    else if(f=='g'){
      bgre();}
    else if(f=='b'){
      bblu();
      }
pixels.show();
pixels1.show();
pixels2.show();
pixels3.show();
pixels4.show();
pixels5.show();
pixels.clear();
pixels1.clear();
pixels2.clear();
pixels3.clear();
pixels4.clear();
pixels5.clear();
delay(50);

}
