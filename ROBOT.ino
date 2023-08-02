int m1=2;
int m2=3;
int n1=4;
int n2=5;
const int trig=9;
const int echo=8;
long duration;
float distance;
float d1;
float d2;
#include <Servo.h>
Servo myservo;
  void setup()
{
    pinMode(m1, OUTPUT);
    pinMode(m2, OUTPUT);
    pinMode(n2, OUTPUT);
    pinMode(n1, OUTPUT);
    pinMode(trig, OUTPUT);
    pinMode(echo, INPUT);
    pinMode(13, OUTPUT);
    Serial.begin(9600);
    myservo.attach(10);
}

void loop()

{ myservo.write(90); 
 digitalWrite(trig,LOW);
delayMicroseconds(10000);
digitalWrite(trig,HIGH);
delayMicroseconds(10000);
digitalWrite(trig,LOW);
duration=pulseIn(echo,HIGH);
distance=duration*0.034/2;
  Serial.print("INDistance-");
Serial.println(distance);
  if(distance <= 10)
  {digitalWrite(13, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3,LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,LOW);
  delay(1000);
  digitalWrite(2, HIGH);
  digitalWrite(3,LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6,LOW);
  delay(3000) ;
  digitalWrite(2, LOW);
  digitalWrite(3,LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,LOW);
  delay(200);
  myservo.write(0);
  delay(1000);
  digitalWrite(trig,LOW);
 delayMicroseconds(1000);
 digitalWrite(trig,HIGH);
 delayMicroseconds(1000);
 digitalWrite(trig,LOW);
 duration=pulseIn(echo,HIGH);
 d1=duration*0.034/2;
   Serial.print("d1-");
Serial.println(d1);
  delay(100);
  myservo.write(180);
  delay(1000);
 digitalWrite(trig,LOW);
 delayMicroseconds(1000);
 digitalWrite(trig,HIGH);
 delayMicroseconds(1000);
 digitalWrite(trig,LOW);
 duration=pulseIn(echo,HIGH);
 d2=duration*0.034/2;
   Serial.print("d2-");
Serial.println(d2);
  delay(100);
  if(d1>d2)
 {myservo.write(90); 
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(5, LOW);
  digitalWrite(6,LOW); 
  delay(3000);
   }
  else  if(d2>d1)
 {myservo.write(90);  
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5,LOW);
  delay(3000);
 }}    
  else if(distance>10)
  {digitalWrite(13, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3,HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6,HIGH);
}}
