#include<VarSpeedServo.h>
VarSpeedServo s1;



void setup() 
{
  
  s1.attach(10);
  

}

void loop() 
{
//  s1.write(0,50);
//  delay(2000);
//  s1.write(90,50);
//  delay(2000);
//  s1.write(180,100);
//  delay(2000);
for (int angle = 0; angle<=180;angle++)
{
  s1.write(angle,100);
  delay(20);
}
for (int angle = 180; angle>=0;angle++)
{
  s1.write(angle,100);
  delay(20);
}
}
