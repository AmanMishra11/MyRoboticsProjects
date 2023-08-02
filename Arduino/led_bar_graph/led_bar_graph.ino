int led[]={2,3,4,5,6};
int no_leds=7;
int j;
void setup() {
  for(int i=0;i<no_leds;i++)
  {
     pinMode(led[i],OUTPUT);
     }
}

void loop() {
  int pot = analogRead(A0);

  int led_level = map(pot,0,1023,0,no_leds);
   for( j=0;j<no_leds;j++){
    
    if(j<led_level){
    
      digitalWrite(led[j],HIGH);
    }
    else{
      digitalWrite(led[j],LOW);  
    }
   }
}
 
     
      
     
      
      
