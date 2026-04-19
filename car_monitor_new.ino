void forward(int speed) {
  ledcWrite(0, speed);
  digitalWrite(25, HIGH);
  digitalWrite(26, LOW);
  ledcWrite(1, speed);
  digitalWrite(32, LOW);
  digitalWrite(27, HIGH);
  ledcWrite(2, speed);
  digitalWrite(21, LOW);
  digitalWrite(18, HIGH);
  ledcWrite(3, speed);
  digitalWrite(23, HIGH);
  digitalWrite(22, LOW);

}

void backward(int speed) {
  ledcWrite(0, speed);
  digitalWrite(25, LOW);
  digitalWrite(26, HIGH);
  ledcWrite(1, speed);
  digitalWrite(32, HIGH);
  digitalWrite(27, LOW);
  ledcWrite(2, speed);
  digitalWrite(21, HIGH);
  digitalWrite(18, LOW);
  ledcWrite(3, speed);
  digitalWrite(23, LOW);
  digitalWrite(22, HIGH);

}

void stop() {
  ledcWrite(0, 0);
  digitalWrite(25, HIGH);
  digitalWrite(26, LOW);
  ledcWrite(1, 0);
  digitalWrite(32, LOW);
  digitalWrite(27, HIGH);
  ledcWrite(2, 0);
  digitalWrite(21, LOW);
  digitalWrite(18, HIGH);
  ledcWrite(3, 0);
  digitalWrite(23, HIGH);
  digitalWrite(22, LOW);
}

void turnLeft(int speed) {
  ledcWrite(0, speed);
  digitalWrite(25, LOW);
  digitalWrite(26, HIGH);

  ledcWrite(1, speed);
  digitalWrite(32, HIGH);
  digitalWrite(27, LOW);

  ledcWrite(2, speed);
  digitalWrite(21, LOW);
  digitalWrite(18, HIGH);

  ledcWrite(3, speed);
  digitalWrite(23, HIGH);
  digitalWrite(22, LOW);
}

// void turnLeft(int motor_left, int motor_right) {
//   ledcWrite(0, motor_left);
//   digitalWrite(25, LOW);
//   digitalWrite(26, HIGH);

//   ledcWrite(1, motor_left);
//   digitalWrite(32, HIGH);
//   digitalWrite(27, LOW);

//   ledcWrite(2, motor_right);
//   digitalWrite(21, LOW);
//   digitalWrite(18, HIGH);

//   ledcWrite(3, motor_right);
//   digitalWrite(23, HIGH);
//   digitalWrite(22, LOW);
// }

void turnRight(int speed) {
  ledcWrite(0, speed);
  digitalWrite(25, HIGH);
  digitalWrite(26, LOW);
  ledcWrite(1, speed);
  digitalWrite(32, LOW);
  digitalWrite(27, HIGH);
  ledcWrite(2, speed);
  digitalWrite(21, HIGH);
  digitalWrite(18, LOW);
  ledcWrite(3, speed);
  digitalWrite(23, LOW);
  digitalWrite(22, HIGH);
}

// void turnRight(int motor_left, int motor_right) {
//   ledcWrite(0, motor_left);
//   digitalWrite(25, HIGH);
//   digitalWrite(26, LOW);

//   ledcWrite(1, motor_left);
//   digitalWrite(32, LOW);
//   digitalWrite(27, HIGH);

//   ledcWrite(2, motor_right);
//   digitalWrite(21, HIGH);
//   digitalWrite(18, LOW);

//   ledcWrite(3, motor_right);
//   digitalWrite(23, LOW);
//   digitalWrite(22, HIGH);
// }


void motor_setup() {
  pinMode(25, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(21, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(22, OUTPUT);
  ledcSetup(0, 20000, 8);
  ledcSetup(1, 20000, 8);
  ledcSetup(2, 20000, 8);
  ledcSetup(3, 20000, 8);
  ledcAttachPin(33, 0);
  ledcAttachPin(14, 1);
  ledcAttachPin(5, 2);
  ledcAttachPin(19, 3);
}

