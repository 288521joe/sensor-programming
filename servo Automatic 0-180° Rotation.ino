#include <ESP32Servo.h>

#define SERVO_PIN 4  

Servo myServo;

void setup() {
    myServo.attach(SERVO_PIN);
}

void loop() {
    // Move from 0° to 180°
    for (int angle = 0; angle <= 180; angle++) {
        myServo.write(angle);
        delay(20);  // Adjust for smoothness
    }

    // Move from 180° back to 0°
    for (int angle = 180; angle >= 0; angle--) {
        myServo.write(angle);
        delay(20);  // Adjust for smoothness
    }
}
