#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup{
   lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");

  
}
