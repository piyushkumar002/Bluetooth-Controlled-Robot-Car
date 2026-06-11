char command;
unsigned long lastCommandTime = 0;
int timeout = 500; // stop if no command for 500 ms

// Motor pins
int IN1 = 8;  // Left motors
int IN2 = 9;
int IN3 = 2;  // Right motors
int IN4 = 3;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600);
  stopMotors();
}

void loop() {

  if (Serial.available()) {
    command = Serial.read();
    lastCommandTime = millis();

    if (command == 'F') forward();
    else if (command == 'B') backward();
    else if (command == 'L') left();
    else if (command == 'R') right();
    else stopMotors();
  }

  // auto stop if bluetooth disconnects
  if (millis() - lastCommandTime > timeout) {
    stopMotors();
  }
}

void forward() {
  // both sides forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void backward() {
  // both sides backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void left() {
  // left side stop, right side forward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void right() {
  // right side stop, left side forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void stopMotors() {
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}