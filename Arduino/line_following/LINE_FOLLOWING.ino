int motor1= 3;  
 int motor1_ = 5; 
 int motor2= 6;
 int motor2_=9;
 int Speed;
int ls_pin =2;
int rs_pin =4;
int pot_pin = A0;


void setup() {
  
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(ls_pin,INPUT);
  pinMode(rs_pin,INPUT);
  pinMode(pot_pin,INPUT);
  Serial.begin(9600); 
}

void loop() {

 int left_sensor = digitalRead(ls_pin);
 int right_sensor = digitalRead(rs_pin);
 int Speed_value = analogRead(pot_pin);
 int Speed = map(Speed_value,0,1023,0,255);

 \
if(right_sensor == 0 && left_sensor == 1)
{
  Serial.println("turning right");
  analogWrite(motor1,Speed);
  analogWrite(motor1_,0);
  analogWrite(motor2,0);
  analogWrite(motor2_,Speed);
  
  
  }
if(right_sensor == 1 && left_sensor == 0)
{
  Serial.println("turning left");
  analogWrite(motor2,Speed);
  analogWrite(motor2_,0);
  analogWrite(motor1,0);
  analogWrite(motor1_,Speed);



  }

if(right_sensor == 1 && left_sensor == 1)
{
  Serial.println("stop");
  analogWrite(motor2,0);
  analogWrite(motor2_,0);
  analogWrite(motor1,0);
  analogWrite(motor1_,0);
  
  }

if(right_sensor == 0 && left_sensor == 0)
{ 
  Serial.println("forward");
  analogWrite(motor2,Speed);
  analogWrite(motor2_,0);
  analogWrite(motor1,Speed);
  analogWrite(motor1_,0);
}


  }

 
