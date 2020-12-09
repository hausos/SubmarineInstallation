int VRx = A7;
int VRy = A6;
//int SW = 2;

int xPosition = 0;
int yPosition = 0;
//int SW_state = 0;
int mapX = 0;
int mapY = 0;

void joystickSetup() {
  pinMode(VRx, INPUT);
  pinMode(VRy, INPUT);
  //pinMode(SW, INPUT_PULLUP); 
  
}

void joystickMeasure() {
  xPosition = analogRead(VRx);
  yPosition = analogRead(VRy);
  //SW_state = digitalRead(SW);
  mapX = map(xPosition, 0, 1023, -512, 512);
  mapY = map(yPosition, 0, 1023, -512, 512);
  if (mapX < 20 && mapX > -10){
    mapX = 0;
  }
  if (mapY < 10 && mapY > -40){
    mapY = 0;
  }
  
  Serial.print("X: ");
  Serial.print(mapX);
  Serial.print(" | Y: ");
  Serial.println(mapY);
  //Serial.print(" | Button: ");
  //Serial.println(SW_state);

  delay(100);
  
}
