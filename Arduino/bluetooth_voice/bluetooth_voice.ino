int motor1= 3;  
int motor1_=5; 
int motor2= 6;
int motor2_=9;
int Speed = 255;
String voice;
void setup() {
  pinMode(motor1,OUTPUT);
  pinMode(motor1_,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(motor2_,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  while(Serial.available()){
    delay(10);
    char c=Serial.read();
    if (c=='#'){
     break;
   }
  voice=voice+c; 
  }
 if (voice.length()>0){
  Serial.println(voice);
  if (voice=="forward"){
    straight();
    delay(5000);
    stop();
    
  }
  else if (voice=="stop"){
    stop();
  }
  else if (voice=="right"){
    right();
    delay(80);
    stop();
  }
  else if (voice=="left"){
    left();
    delay(80);
    stop();
  }
  voice="";
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

void straight()
{ 
  digitalWrite(13,HIGH);
  Serial.println("forward");
  analogWrite(motor1,Speed);
  analogWrite(motor1_,0);
  analogWrite(motor2,Speed);
  analogWrite(motor2_,0);
  
}
