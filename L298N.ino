#define IN1 18  
#define IN2 19  
#define IN3 21  
#define IN4 22  
#define ENA 5   
#define ENB 23   

// PWM Speed 
int motorSpeed = 150;

void setup() {
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    pinMode(ENA, OUTPUT);
    pinMode(ENB, OUTPUT);

    stopMotors();
}

void loop() {
    moveForward();
    delay(2000);

    stopMotors();
    delay(1000);

    moveBackward();
    delay(2000);

    stopMotors();
    delay(2000);
}

// move forward
void moveForward() {
    analogWrite(ENA, motorSpeed);
    analogWrite(ENB, motorSpeed);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

// move backward
void moveBackward() {
    analogWrite(ENA, motorSpeed);
    analogWrite(ENB, motorSpeed);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

//  stop motors
void stopMotors() {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
}

