#include <ESP32Servo.h>

#define TRIG_PIN 5
#define ECHO_PIN 18
#define SERVO_PIN 4

Servo myServo;

void setup() {
    Serial.begin(115200);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
    myServo.attach(SERVO_PIN);
}

float getDistance() {
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    long duration = pulseIn(ECHO_PIN, HIGH, 30000);  // 30ms timeout (~500cm max)
    
    if (duration == 0) return 400.0;  // If no echo, assume max distance

    float distance = (duration * 0.0343) / 2;
    return constrain(distance, 2, 400);  // Constrain to valid range
}

void loop() {
    for (int angle = 0; angle <= 180; angle += 5) {  // Move 0-180° in 5° steps
        myServo.write(angle);
        delay(200);  // Wait for servo to move
        
        float distance = getDistance();
        
        Serial.print("Angle: ");
        Serial.print(angle);
        Serial.print("\tDistance: ");
        Serial.print(distance);
        Serial.println(" cm");

        delay(100);
    }

    for (int angle = 180; angle >= 0; angle -= 5) {  // Move 180-0° in 5° steps
        myServo.write(angle);
        delay(200);
        
        float distance = getDistance();
        
        Serial.print("Angle: ");
        Serial.print(angle);
        Serial.print("\tDistance: ");
        Serial.print(distance);
        Serial.println(" cm");

        delay(100);
    }
}


