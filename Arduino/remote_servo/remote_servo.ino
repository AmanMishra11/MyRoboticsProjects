#include<SPIRremote.h> 
#include<VarSpeedServo.h>
VarSpeedServo s1;
int IRValue;
SPIRremote remote(A5); 

void setup() {
  remote.begin();
  s1.attach(10);

}

void loop() {
  IRValue = remote.receive();
  if(IRValue == 1)
  {
    s1.write(0,50);
  }
  if(IRValue == 2)
  {
    s1.write(90,50);
  }
  if(IRValue == 3)
  {
    s1.write(180,50);
  }
}
