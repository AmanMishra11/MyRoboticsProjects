 int motor1= 3;  
 int motor1_ = 5; 
 int motor2= 6;
 int motor2_=9;
 int horn = 2;
 int head_light= 4;
 int Speed = 255;
 char value;


void setup() {
  
  pinMode(motor1,OUTPUT);
  pinMode(motor1_,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(motor2_,OUTPUT);
  pinMode(horn, OUTPUT);
  pinMode(head_light, OUTPUT);
  Serial.begin(9600); 
}

void loop() {
while(Serial.available()>0){
  
  value = Serial.read();

  //Speed = map((int)value,0,9,0,220);
  
  if(value=='F')
  forward();
  if(value=='B')
  backward();
  if(value=='R')
  right();
  if(value=='L')
  left();
  if(value=='S')
  stop();
  if(value=='V')
  digitalWrite(horn,HIGH);
  if(value=='I')
  diagright();
  if(value=='G')
  diagleft();
  if(value=='J')
  backright();
  if(value=='H')
  backleft();
  
  if(value=='v')
  digitalWrite(horn,LOW);
  if(value=='W')
  digitalWrite(head_light,HIGH);
  if(value=='w')
  digitalWrite(head_light,LOW);
  if(value=='0')
  Speed=0;
  if(value=='1')
  Speed=30;
  if(value=='2')
  Speed=45;
  if(value=='3')
  Speed=75;
  if(value=='4')
  Speed=100;
  if(value=='5')
  Speed=125;
  if(value=='6')
  Speed=150;
  if(value=='7')
  Speed=180;
  if(value=='8')
  Speed=200;
  if(value=='9')
  Speed=230;
  if(value=='q')
  Speed = 255;
 
  } 
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
void backward()
{ 
  Serial.println("backward");
  analogWrite(motor2,0);
  analogWrite(motor2_,Speed);
  analogWrite(motor1,0);
  analogWrite(motor1_,Speed);
}
void diagright()
{
  Serial.println("diagonal right");
  right();
  delay(50);
  forward();
}
void diagleft()
{
  Serial.println("diagonal left");
  left();
  delay(50);
  forward();
}

void backright()
{
  Serial.println("back right");
  right();
  delay(50);
  backward();
}

void backleft()
{
  Serial.println("back left");
  left();
  delay(50);
  backward();
}




 
