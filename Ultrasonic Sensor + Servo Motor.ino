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

    long duration = pulseIn(ECHO_PIN, HIGH);
    float distance = (duration * 0.0343) / 2;
    
    return distance;
}

void loop() {
    float distance = getDistance();
    
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    // Map distance (5cm - 50cm) to servo angle (0° - 180°)
    int angle = map(distance, 5, 50, 0, 180);
    
    // Constrain to avoid out-of-range errors
    angle = constrain(angle, 0, 180);

    myServo.write(angle);
    
    Serial.print("Servo Angle: ");
    Serial.println(angle);

    delay(500);
}


