
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

void DisplayScanningMessage() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Scanning");
  lcd.setCursor(0,1);
  lcd.print("object ...");
}

void DisplayObjectDetectedMessage() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Plastic bag");
}

void DisplayObjectDetectedMessage2() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Plastic");
  lcd.setCursor(0,1);
  lcd.print("particles");
}

void ScanYourObject() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Scan your");
  lcd.setCursor(0,1);
  lcd.print("object");
}

void DisplayNotTheObject() {
  lcd.setCursor(0,1);
  lcd.print("Not it");
}

void DisplayYouFoundIt() {
  lcd.setCursor(0,1);
  lcd.print("Found it");
}
