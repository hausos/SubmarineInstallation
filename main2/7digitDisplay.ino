void SetupDisplay() {
    // initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);   
  pinMode(D1, OUTPUT);  
  pinMode(D2, OUTPUT);  
  pinMode(D3, OUTPUT);  
  pinMode(D4, OUTPUT); 
}


void lightUpWithNum(bool A, bool B, bool C, bool D, bool E, bool F, bool G) {
  digitalWrite(pinA, A);
  digitalWrite(pinB, B);
  digitalWrite(pinC, C);
  digitalWrite(pinD, D);
  digitalWrite(pinE, E);
  digitalWrite(pinF, F);
  digitalWrite(pinG, G);
}

void lightUpPlace(bool Digit1, bool Digit2, bool Digit3, bool Digit4) {
  digitalWrite(D1, Digit1);
  digitalWrite(D2, Digit2);
  digitalWrite(D3, Digit3);
  digitalWrite(D4 , Digit4); 
}

void chooseNumber(int digit) {
  switch (digit) {
    case 0:
      lightUpWithNum(LOW, LOW, LOW, LOW, LOW, LOW, HIGH);
      break;
    case 1:
      lightUpWithNum(HIGH, LOW, LOW, HIGH, HIGH, HIGH, HIGH);
      break;
    case 2:
      lightUpWithNum(LOW, LOW, HIGH, LOW, LOW, HIGH, LOW);
      break;
    case 3:
      lightUpWithNum(LOW, LOW, LOW, LOW, HIGH, HIGH, LOW);
      break;
    case 4:
      lightUpWithNum(HIGH, LOW, LOW, HIGH, HIGH, LOW, LOW);
      break;
    case 5:
      lightUpWithNum(LOW, HIGH, LOW, LOW, HIGH, LOW, LOW);
      break;
    case 6:
      lightUpWithNum(LOW, HIGH, LOW, LOW, LOW, LOW, LOW);
      break;
    case 7:
      lightUpWithNum(LOW, LOW, LOW, HIGH, HIGH, HIGH, HIGH);
      break;
    case 8:
      lightUpWithNum(LOW, LOW, LOW, LOW, LOW, LOW, LOW);
      break;
    case 9:
      lightUpWithNum(LOW, LOW, LOW, LOW, HIGH, LOW, LOW);
      break;
    default:
      lightUpWithNum(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, HIGH);
      break;
  }
}


int writeTheNumber(int number) {
  
  if (number > 1000 && number < -1000) {
    number = 0;
  }
    chooseNumber(-1);
    if (number < 0) {
      lightUpPlace(HIGH, LOW, LOW, LOW);
      lightUpWithNum(HIGH, HIGH, HIGH, HIGH, HIGH, HIGH, LOW);
      number *= (-1);
    }
    else {
      lightUpPlace(HIGH, LOW, LOW, LOW);
      chooseNumber(-1);
    }
    
    delay(1);
  
  
    //0
    chooseNumber(-1);
    lightUpPlace(LOW, LOW, LOW, HIGH);
    chooseNumber(number % 10);
    number /= 10;
    
    delay(1);
  
    //1
    chooseNumber(-1);
    lightUpPlace(LOW, LOW, HIGH, LOW);
    if (number > 0) {
      chooseNumber(number % 10);
    }
    number /= 10;
  
    delay(1);
  
    //2
    chooseNumber(-1);
    lightUpPlace(LOW, HIGH, LOW, LOW);
    if (number > 0) {
      chooseNumber(number % 10);
    }
    number /= 10;
    delay(1);
  
}
