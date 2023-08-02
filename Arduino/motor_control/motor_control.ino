int in1=3;
int in2=5;
int speed=100;
void setup() {
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);// put your setup code here, to run once:

}

void loop() {
  analogWrite(in1,speed);
  analogWrite(in2,0);
  delay(5000);
  analogWrite(in1,0);
  analogWrite(in2,speed);
  delay(5000);
  // put your main code here, to run repeatedly:

}
