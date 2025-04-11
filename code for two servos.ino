#include <ESP32Servo.h>

#define SERVO1_PIN 4  // First servo on GPIO 4
#define SERVO2_PIN 5  // Second servo on GPIO 5

Servo servo1;  // Create first Servo object
Servo servo2;  // Create second Servo object

void setup() {
    servo1.attach(SERVO1_PIN);  // Attach first servo
    servo2.attach(SERVO2_PIN);  // Attach second servo
}

void loop() {
    servo1.write(0);   // Move first servo to 0°
    servo2.write(180); // Move second servo to 180°
    delay(1000);

    servo1.write(90);  // Move first servo to 90°
    servo2.write(90);  // Move second servo to 90°
    delay(1000);

    servo1.write(180); // Move first servo to 180°
    servo2.write(0);   // Move second servo to 0°
    delay(1000);
}

