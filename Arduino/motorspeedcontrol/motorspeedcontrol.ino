int in1=3;
int in2=5;
//int speed=100;
void setup() {
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);// put your setup code here, to run once:
  pinMode(A0,INPUT);
}

void loop() {
  int a = analogRead(A0);
  int map1=map(a,0,1023,0,255);
  
  analogWrite(in1,map1);
  analogWrite(in2,0);
  

}
