int led1=8;
int led2=10;
int Switch=2;
int state=1;

void setup() {
pinMode(led1,OUTPUT);
pinMode(Switch,INPUT_PULLUP);
pinMode(led2,OUTPUT);
attachInterrupt(digitalPinToInterrupt(Switch),blink,CHANGE);
pinMode(3,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  digitalWrite(led1,HIGH);
  delay (500);
  digitalWrite(led1,LOW);
  delay (500);
  digitalWrite(led2,state);
  if(state){
    digitalWrite(3,HIGH);
    digitalWrite(5,LOW);
  }
  else{
    digitalWrite(3,LOW);
    digitalWrite(5,LOW);
    
  }
}
void blink(){
  state=!state;
} 
