#include <ESP32Servo.h>

#define SERVO_PIN 4
#define POT_PIN 34  // ADC pin

Servo myServo;

void setup() {
    myServo.attach(SERVO_PIN);
}

void loop() {
    int potValue = analogRead(POT_PIN);  // Read potentiometer (0-4095)

    int mappedValue = map(potValue, 0, 4095, 0, 99);  // First mapping: 0-4095 → 0-99
    int servoAngle = map(mappedValue, 0, 99, 0, 180); // Second mapping: 0-99 → 0-180°

    myServo.write(servoAngle);  // Move servo
    delay(15);  // Small delay for smooth motion
}
