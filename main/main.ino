
void setup() {
  Serial.begin(9600); 
  LCD_Setup();
  hallSensorSetup();
  
}

void loop() {
  //DisplayMessage();
  hallSensorMeasure();
  Serial.println(magnetPresent());
}
