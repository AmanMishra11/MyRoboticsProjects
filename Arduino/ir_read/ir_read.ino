int ir=7;
int led=2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ir,INPUT);
  pinMode(led,OUTPUT);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
 int a=digitalRead(ir);
 if (a==1){
  digitalWrite(led,HIGH);
  }
 else{
  digitalWrite(led,LOW);
 }
 Serial.print("The value of ir =");
 Serial.println(a);
}
