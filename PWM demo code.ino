#define LED1_PIN1  2 
#define LED1_PIN2  4
void setup() {
    pinMode(LED1_PIN1, OUTPUT);
    pinMode(LED1_PIN2, OUTPUT);
}

void loop() {
    for (int i = 0; i <= 255; i++) {  
        analogWrite(LED1_PIN1, i);  // Set PWM
        analogWrite(LED1_PIN2,255-i);
        delay(10);
    }
    for (int i = 255; i >= 0; i--) {  
        analogWrite(LED1_PIN1, i);
        analogWrite(LED1_PIN2,255-i);
        delay(10);
    }
}
