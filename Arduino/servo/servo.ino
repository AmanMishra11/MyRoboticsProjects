#include <Servo.h>


void setup() {

Servo myservo;
myservo.attach(2);  

}

void loop() {
  myservo.write(45);
  
}
