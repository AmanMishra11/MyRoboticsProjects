//left turn
#include<VarSpeedServo.h>
VarSpeedServo b1;
VarSpeedServo b2;
VarSpeedServo b3;
VarSpeedServo b4;
VarSpeedServo l1;
VarSpeedServo l2;
VarSpeedServo l3;
VarSpeedServo l4;  

void setup() {
  b1.attach(3);
  l1.attach(2);
  b2.attach(4);
  l2.attach(5);
  b3.attach(7);
  l3.attach(6);
  b4.attach(8);
  l4.attach(9);

  stand();
  delay(1000);
}

void stand()
{
  b1.write(90,100);
  b2.write(90,100);
  b3.write(90,100);
  b4.write(90,100);
  
  l1.write(60,100);
  l2.write(60,100);
  l3.write(60,100);
  l4.write(60,100);   

}

void loop()
{
  l1.write(90,100);
  delay(500);
  b1.write(40,100);
  delay(500);
  l1.write(60,00);
  delay(500);

  l4.write(90,100);
  delay(500);
  b4.write(40,100);
  delay(500);
  l4.write(60,00);
  delay(500);

  l2.write(90,100);
  delay(500);
  b2.write(40,100);
  delay(500);
  l2.write(60,00);
  delay(500);

  l3.write(90,100);
  delay(500);
  b3.write(40,100);
  delay(500);
  l3.write(60,00);
  delay(500);

  stand();
}
