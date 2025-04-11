#include <ESP32Servo.h>

#define SERVO_PIN 4
#define POT_PIN 34  // ADC pin

Servo myServo;

void setup() {
    myServo.attach(SERVO_PIN);
}

void loop() {
    int potValue = analogRead(POT_PIN);  // Read potentiometer (0-4095)
    int angle = map(potValue, 0, 4095, 0, 180);  // Convert to 0-180°
    
    myServo.write(angle);  // Move servo
    delay(15);  // Small delay for smooth motion
}
