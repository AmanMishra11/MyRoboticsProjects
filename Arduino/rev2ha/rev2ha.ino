String voice;
int RED = 2;
int YELLOW = 3;
void RedOn(){
digitalWrite (RED, LOW);
}
void RedOff(){
digitalWrite (RED, HIGH);
}
void YellowOn(){
digitalWrite (YELLOW, LOW);
}
void YellowOff(){
digitalWrite (YELLOW, HIGH);
}
void allon() {
digitalWrite (RED, LOW);
digitalWrite (YELLOW, LOW);
}
void alloff() {
digitalWrite (RED, HIGH);
digitalWrite (YELLOW, HIGH);
}
void setup() {
Serial.begin(9600);
pinMode(RED, OUTPUT);
pinMode(YELLOW, OUTPUT);
digitalWrite (RED, HIGH);
digitalWrite (YELLOW, HIGH);
}
void loop() {
while(Serial.available()) {
delay(10);
char c=Serial.read();
if(c=='#')
{
break; 
}
voice += c;
}
if (voice.length() > 0) {
Serial.println(voice);
if (voice == "on" || voice== "all on")
{
allon() ;
}
else if (voice == "off" || voice=="all off")
{
alloff() ;
}
else if(voice =="red" || voice =="red on"){
RedOn();
}
else if(voice =="red off"){
RedOff();
}
else if(voice =="yellow" || voice =="yellow on"){
YellowOn();
}
else if(voice =="yellow off"){
YellowOff();
}
voice="";
}
}
