#define LED_PIN 2 

void setup() {
    pinMode(LED_PIN, OUTPUT);  
    Serial.begin(115200);  
}

void loop() {
    if (Serial.available() > 0) {  // Check if data is received
        String command = Serial.readStringUntil('\n');
        command.trim();  // Remove spaces or newlines

        if (command == "ON") {
            digitalWrite(LED_PIN, HIGH);  
            Serial.println("LED is ON");
        } 
        else if (command == "OFF") {
            digitalWrite(LED_PIN, LOW);  
            Serial.println("LED is OFF");
        } 
        else {
            Serial.println("Invalid Command. Type 'ON' or 'OFF'.");
        }
    }
}
