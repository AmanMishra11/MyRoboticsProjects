int trig=11;
int echo=12;
int dist;
int t;
int Speed=200;
int motor1= 3;  
 int motor1_ = 5; 
 int motor2= 6;
 int motor2_=9;
void setup() {
  // put your setup code here, to run once:
 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(trig,LOW);
 delayMicroseconds(2);
 digitalWrite(trig,HIGH);
 delayMicroseconds(10);
 digitalWrite(trig,LOW);
 t=pulseIn(echo,HIGH);
 dist=(t*0.034)/2;
 Serial.println(dist);
 if ( dist<20){
  right();
 }
 else 
  forward();
  
 
 
}
 
void right(){
    Serial.println("turning right");
  analogWrite(motor1,Speed);
  analogWrite(motor1_,0);
  analogWrite(motor2,0);
  analogWrite(motor2_,Speed);
}
void left()
{
  Serial.println("turning left");
  analogWrite(motor2,Speed);
  analogWrite(motor2_,0);
  analogWrite(motor1,0);
  analogWrite(motor1_,Speed);



  }
void stop()
{
  Serial.println("stop");
  analogWrite(motor2,0);
  analogWrite(motor2_,0);
  analogWrite(motor1,0);
  analogWrite(motor1_,0);
  
  }

void forward()
{ 
  Serial.println("forward");
  analogWrite(motor2,Speed);
  analogWrite(motor2_,0);
  analogWrite(motor1,Speed);
  analogWrite(motor1_,0);
}


  
