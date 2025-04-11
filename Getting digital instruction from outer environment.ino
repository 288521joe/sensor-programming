#define LED_PIN 2
#define BUTTON_PIN 4

void setup() {
    pinMode(LED_PIN, OUTPUT); 
    pinMode(BUTTON_PIN, INPUT); 
}

void loop() {
    int state = digitalRead(BUTTON_PIN); // or bool
    digitalWrite(LED_PIN, state);
}
