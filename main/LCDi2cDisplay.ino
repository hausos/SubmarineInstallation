
#include <LiquidCrystal_I2C.h>
#include <Wire.h>

//initialize the liquid crystal library
//the first parameter is the I2C address
//the second parameter is how many rows are on your screen
//the third parameter is how many columns are on your screen
LiquidCrystal_I2C lcd(0x3F, 16, 2);

void LCD_Setup() {
  //initialize lcd screen
  lcd.init();
  // turn on the backlight
  lcd.backlight();
}

void DisplayMessage() {
  //wait for a second
  delay(1000);
  // tell the screen to write on the top row
  lcd.setCursor(0,0);
  lcd.print("Hello, From");
  // tell the screen to write on the bottom row
  lcd.setCursor(0,1);
  // you can change whats in the quotes to be what you want it to be!
  lcd.print("Aurora ");

  //wait for a second
  delay(1000);
  // tell the screen to write on the top row
  lcd.setCursor(0,0);
  lcd.print("Ow you look fabulous");
  // tell the screen to write on the bottom row
  lcd.setCursor(0,1);
  // you can change whats in the quotes to be what you want it to be!
  lcd.print("Excelent ");
  
}
