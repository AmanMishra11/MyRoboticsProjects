#include <Servo.h>
Servo myservo;
int pos=0;

void setup() {
  Serial.begin(9600);
  myservo.attach(9);
  pinMode(2,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(2),servo,CHANGE);
}

void loop() {
  
  myservo.write(pos);
  
  
}
void servo()
{
  if(pos<179){
  pos++;
  }
  
 else if()
    pos--;
  Serial.println(pos);
  }
