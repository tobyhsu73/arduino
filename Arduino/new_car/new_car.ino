int forw = 23;
int lef = 24;
int race = 25;
int rac;
int forh;
int sw;
int i;
void setup() {
pinMode(52,OUTPUT);
pinMode(2,OUTPUT);
pinMode(50,OUTPUT);
pinMode(3,OUTPUT);
pinMode(42,OUTPUT);
pinMode(48,OUTPUT);
pinMode(3,OUTPUT);
pinMode(46,OUTPUT);
pinMode(5,OUTPUT);
pinMode(40,OUTPUT);
Serial.begin(9600);
pinMode(race,INPUT);
pinMode(forw,INPUT);
pinMode(lef,INPUT);

}

void loop() {

readradio();
if(forh<=1200){
  Serial.println("for");}
else if(forh>=1600){
  Serial.println("beh");}
else if(rac<=1200){
  Serial.println("lef");}
else if (rac>=1600){
  Serial.println("rig");}
else{
  Serial.print("sto");}
}
void readradio(){
 rac = pulseIn(race,HIGH,60000);
 forh =pulseIn(forw,HIGH,60000);
 sw =pulseIn(lef,HIGH,60000);
}
