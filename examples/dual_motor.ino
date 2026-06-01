// H bridge pins
#define IN1 9;
#define IN2 4;
#define ENA 5;
#define ENB 6;
#define IN3 7;
#define IN4 8;

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);
}

void loop() {
  // Forward
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 150);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(ENB, 150);
  delay(2000);

  // Break
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);  
  delay(1000);

  // Backward
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  analogWrite(ENA, 150);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(ENB, 150);
  delay(2000);

  // Break
  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
  delay(2000);
}
