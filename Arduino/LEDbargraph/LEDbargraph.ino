int analogPin = A0;   // the pin that the potentiometer is attached to
int ledCount = 10;    // the number of LEDs in the bar graph

int ledPins[] = { 2, 3, 4, 5, 6}; 


void setup() {
  
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
    pinMode(ledPins[thisLed], OUTPUT);
  }
}

void loop() {
  
  int sensorReading = analogRead(analogPin);
  
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount);

  
  for (int thisLed = 0; thisLed < ledCount; thisLed++) {
 
    if (thisLed < ledLevel) {
      digitalWrite(ledPins[thisLed], HIGH);
    }

    else {
      digitalWrite(ledPins[thisLed], LOW);
    }
  }
}
