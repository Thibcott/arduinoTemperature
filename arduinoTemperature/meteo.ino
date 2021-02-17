// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}
const int inPin = 0;
void loop() {
 /* int value = analogRead(inPin);

  
  lcd.setCursor(0,1);
  float millivolts = (value / 1024.0) * 5000;
  float celsius = millivolts / 100;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(celsius);
  lcd.print("C");
  
  delay(1000);*/
}
 
