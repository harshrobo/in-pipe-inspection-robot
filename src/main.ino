// In-Pipe Robot Control Code

// Motor pins (TB6612FNG)
int motorA1 = 5;
int motorA2 = 6;
int vibMotor = 9;

// Timing parameters
int expandTime = 3000;
int moveTime = 5000;

void setup() {
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(vibMotor, OUTPUT);
}

// Expand chassis
void expandChassis() {
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
}

// Contract chassis
void contractChassis() {
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);
}

// Stop actuation motor
void stopChassis() {
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
}

// Activate vibration motor
void startLocomotion() {
  digitalWrite(vibMotor, HIGH);
}

// Stop vibration motor
void stopLocomotion() {
  digitalWrite(vibMotor, LOW);
}

void loop() {

  // Step 1: Expand to fit pipe
  expandChassis();
  delay(expandTime);

  stopChassis();
  delay(1000);

  // Step 2: Move forward
  startLocomotion();
  delay(moveTime);

  stopLocomotion();
  delay(2000);

  // Step 3: Contract (optional reset)
  contractChassis();
  delay(expandTime);

  stopChassis();
  delay(3000);
}
