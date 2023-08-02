char value;
int led = 13;
void setup() {
 Serial.begin(9600); 
 pinMode(led,OUTPUT);
}

void loop() {
  while(Serial.available()>0){

  value=Serial.read();
  Serial.println(value);
  if(value=='V')
  digitalWrite(led,HIGH);
  if(value=='v')
  digitalWrite(led,LOW);
  }
 
}
