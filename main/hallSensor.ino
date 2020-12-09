int analogPin = A0; // linear Hall magnetic sensor analog interface
int digitalVal ; // digital readings
int analogVal; // analog readings

void hallSensorSetup() {
  pinMode(analogPin, INPUT); 
}

void hallSensorMeasure() {
  // Read the digital interface
  
  // Read the analog interface
  analogVal = analogRead(analogPin);
  Serial.println(analogVal); // print analog value
  
  delay(100);
}

bool magnetPresent() {
  // reads the analog value
  analogVal = analogRead(analogPin);
  //without any magnets present it is somewhere around  535

  return (analogVal < 520);

}
