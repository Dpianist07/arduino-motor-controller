// Motor Pins
#define IN1 9
#define IN2 4
#define ENA 5

#define IN3 7
#define IN4 8
#define ENB 6

// Speeds
int speedA = 255;
int speedB = 255;

// Moving method
void moveMotors(int speedA, int speedB)
{
    // Motor A
    if (speedA > 0)
    {
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
    }
    else if (speedA < 0)
    {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        speedA = -speedA;
    }
    else
    {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
    }

    // Motor B
    if (speedB > 0)
    {
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
    }
    else if (speedB < 0)
    {
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        speedB = -speedB;
    }
    else
    {
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
    }

    analogWrite(ENA, constrain(speedA, 0, 255));
    analogWrite(ENB, constrain(speedB, 0, 255));
}

// Stopping method
void stopMotors()
{
    analogWrite(ENA, 0);
    analogWrite(ENB, 0);

    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}

// Setup
void setup()
{
    pinMode(ENA, OUTPUT);
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);

    pinMode(ENB, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
}

// Main method
void loop()
{
    // Forward
    moveMotors(speedA, speedB);
    delay(2000);
  
    // Brake
    stopMotors();
    delay(1000);

    // Backward
    moveMotors(-speedA, -speedB);
    delay(2000);

    // Brake
    stopMotors();
    delay(1000);
}
