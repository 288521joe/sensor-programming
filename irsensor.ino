#define IR_SENSOR_PIN 18  // Connect OUT pin to GPIO 18

void setup() {
    Serial.begin(115200);
    pinMode(IR_SENSOR_PIN, INPUT);  // Set IR sensor pin as input
}

void loop() {
    int sensorValue = digitalRead(IR_SENSOR_PIN);  // Read sensor output

    if (sensorValue == LOW) {  
        Serial.println("Object Detected!");  
    } else {
        Serial.println("No Object");
    }

    delay(500);  // Wait before next reading
}
