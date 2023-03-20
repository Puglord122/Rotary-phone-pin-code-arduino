#include <Servo.h>
Servo myservo; 
const int input = 12;
int pulse =0;
int var = 0;
int pos = 0;
int t = 0;
int A = 0;
int B = 0;
void setup(){
myservo.attach(9);;
pinMode(input,INPUT);
Serial.begin(9600);
myservo.write(45);
}

void loop() {
t++;

if(digitalRead(input)>var)
{
  var=1;
  pulse++;
  t=0;
}
if(digitalRead(input) == 0){var=0;}
delay(5);


if(pulse==11){  
  if(t==200){
  pulse = 1;
  A++;
  B = 1;
  Serial.print(A);
  Serial.print(B);
  }}
if(pulse==2){  
  if(t==200){
  pulse = 1;
  A++;
  B = 2;
  Serial.print(A);
  Serial.print(B);
  }}
if(pulse==4){  
  if(t==200){
  pulse = 1;
  A++;
  B = 3;
  Serial.print(A);
  Serial.print(B);
  }}
if(pulse==5){  
  if(t==200){
  pulse = 1;
  A++;
  B = 4;
  Serial.print(A);
  Serial.print(B);
  }}


if(t==1000){
  pulse = 1;
  t = 0;
if(A>B){
 pulse = 1;
    A = 0;
    B = 0;
}
if(A<B){
 pulse = 1;
    A = 0;
    B = 0;
}
if(A==4){
  if(B==4){
    myservo.write(180);
    delay(500);
    myservo.write(45);
    pulse = 1;
    A = 0;
    B = 0;
  }}
}
}
