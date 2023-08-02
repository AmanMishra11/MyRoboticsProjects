int led=2;
int led1=3;
int led2=4;
void setup() {
  pinMode(led,OUTPUT);// put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  digitalWrite(led,HIGH);
  delay(100);
  digitalWrite(led,LOW);
  delay(500);
  digitalWrite(led1,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  delay(500);
  digitalWrite(led2,HIGH);
  delay(100);
  digitalWrite(led2,LOW);
  delay(500);
}
