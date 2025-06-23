#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

void setup() {
  lcd.begin(16, 2);  // Initialize LCD with dimensions (16 columns, 2 rows)
 // lcd.backlight();    // Turn on backlight
}

void loop() {
  // First display
  lcd.setCursor(0, 0);  // Column 0, Row 0 (top row)
  lcd.print("Name=");
  //delay(3000);          // Show for 3 seconds
  
  lcd.setCursor(7, 0);  // Column 0, Row 0 (top row)
  lcd.print("Md Sakib");
  //delay(3000);  
  
  // Second display
  lcd.setCursor(0, 1);  // Column 0, Row 1 (bottom row)
  lcd.print("Ahmad");
  delay(1000);          // Show for 2 seconds
  
  // Clear display before next loop iteration
  lcd.clear();
  
  lcd.setCursor(0, 0);  // Column 0, Row 0 (top row)
  lcd.print("Course=");
  //delay(3000); 
  
  lcd.setCursor(8, 0);  // Column 0, Row 0 (top row)
  lcd.print("B.Tech");
  delay(1000); 
  lcd.clear();
  
  lcd.setCursor(0, 0);  // Column 0, Row 0 (top row)
  lcd.print("CLG =");
  
  lcd.setCursor(6, 0);  // Column 0, Row 0 (top row)
  lcd.print("DBU");
  delay(1000); 
  lcd.clear();
}