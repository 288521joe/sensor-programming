#define LED1_PIN1  2 // GPIO2
void setup() {
    pinMode(LED1_PIN1, OUTPUT);
}
void loop() {
    digitalWrite(LED1_PIN1,HIGH);
    delay(1000);
    digitalWrite(LED1_PIN1,LOW);
    delay(1000);
