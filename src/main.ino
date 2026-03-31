// In-Pipe Robot Control Code

int motorA1 = 5;
int motorA2 = 6;
int vibMotor = 9;

void setup() {
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(vibMotor, OUTPUT);
}

// Expand chassis
void expand() {
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
}

// Contract chassis
void contract() {
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);
}

// Stop motor
void stopMotor() {
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
}

// Move forward using vibration motor
void moveForward() {
  digitalWrite(vibMotor, HIGH);
}

void loop() {
  expand();
  delay(3000);

  stopMotor();
  delay(1000);

  moveForward();
  delay(5000);
}
