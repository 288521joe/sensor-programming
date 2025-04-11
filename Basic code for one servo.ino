#include <ESP32Servo.h>

#define SERVO_PIN 4  // Use any PWM-supported GPIO

Servo myServo;  // Create Servo object

void setup() {
    myServo.attach(SERVO_PIN);  // Attach servo to pin
}

void loop() {
    myServo.write(0);    // Move to 0°
    delay(1000);
    myServo.write(90);   // Move to 90°
    delay(1000);
    myServo.write(180);  // Move to 180°
    delay(1000);
}
