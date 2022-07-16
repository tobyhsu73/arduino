#define TRIGGER_PIN 22
#define PWM_OUTPUT_PIN 23
int lfb = 52;
int lfw = 50;
int lfg = 48;
byte hdr, data_h, data_l, chksum;
unsigned int distance;
int rfb = 53;
int rfw = 51;
int rfg = 49;

int lbb = 44;
int lbw = 42;
int lbg = 40;


int rbb = 45;
int rbw = 43;
int rbg = 41;
long duration;



void setup() 
{ Serial.begin(57600);
 
   pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(PWM_OUTPUT_PIN, INPUT);
  pinMode(52, OUTPUT);
  pinMode(50, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(53, OUTPUT);
  pinMode(51, OUTPUT);
  pinMode(49, OUTPUT);
  pinMode(44, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(45, OUTPUT);
  pinMode(43, OUTPUT);
  pinMode(41, OUTPUT);
pinMode(1, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11,OUTPUT);
pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

}
void forward()
{
  digitalWrite(53, LOW);
  digitalWrite(51, LOW);
  digitalWrite(49, HIGH);
  digitalWrite(52, LOW);
  digitalWrite(50, LOW);
  digitalWrite(48, LOW);
  digitalWrite(44, LOW);
  digitalWrite(42, LOW);
  digitalWrite(40, HIGH);
  digitalWrite(45, LOW);
  digitalWrite(43, LOW);
  digitalWrite(41, LOW);
  analogWrite(7,45);
  analogWrite(9,22);//右後
  analogWrite(11,30);//左後
  analogWrite(13,45);
analogWrite(2,50);
analogWrite(3,250);
analogWrite(4,20);
analogWrite(5,150);
analogWrite(6,150);
analogWrite(8,150);
analogWrite(10,150);
}
void left()
{
  digitalWrite(53, LOW);
  digitalWrite(51, LOW);
  digitalWrite(49, LOW);//左後
  digitalWrite(52, LOW);
  digitalWrite(50, LOW);
  digitalWrite(48, LOW);//右後
  digitalWrite(44, LOW);
  digitalWrite(42, LOW);
  digitalWrite(40, HIGH);//右前
  digitalWrite(45, LOW);
  digitalWrite(43, LOW);
  digitalWrite(41, HIGH);//左前
  analogWrite(7,45);
  analogWrite(9,22);//右後
  analogWrite(11,30);//左後
  analogWrite(13,45);
analogWrite(2,50);
analogWrite(3,250);
analogWrite(4,20);
analogWrite(5,150);
analogWrite(6,150);
analogWrite(8,150);
analogWrite(10,150);
}
void right(){
   digitalWrite(53, LOW);
  digitalWrite(51, LOW);
  digitalWrite(49, HIGH);//左後
  digitalWrite(52, LOW);
  digitalWrite(50, LOW);
  digitalWrite(48, HIGH);//右後
  digitalWrite(44, LOW);
  digitalWrite(42, LOW);
  digitalWrite(40, LOW);//右前
  digitalWrite(45, LOW);
  digitalWrite(43, LOW);
  digitalWrite(41, LOW);//左前
  analogWrite(7,45);
  analogWrite(9,22);//右後
  analogWrite(11,30);//左後
  analogWrite(13,45);
analogWrite(2,50);
analogWrite(3,250);
analogWrite(4,20);
analogWrite(5,150);
analogWrite(6,150);
analogWrite(8,150);
analogWrite(10,150);
  }
void loop() 
{
  digitalWrite(TRIGGER_PIN, LOW);
  delayMicroseconds(5);
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(100);
  digitalWrite(TRIGGER_PIN, LOW);
   pinMode(PWM_OUTPUT_PIN, INPUT);
  duration = pulseIn(PWM_OUTPUT_PIN, HIGH);
  distance = duration;
  distance = distance / 58;  
  Serial.print(distance);
  Serial.println(" cm 2 ");

  if(distance<=25){
    if(distance<=25){
    right();
    delay(6000);
    forward();
    delay(12000);
    left();
    delay(10000);
    forward();
    delay(14000);
    right();
    delay(4500);
    }}
 else{
  forward();}
  delay(50);
}
