Digital input is given inside the code, digital input will control the digital output, 
GPIO 2 is commited to inbuid LED

#define LED1_PIN1  2 // GPIO2
void setup() {
    pinMode(LED1_PIN1, OUTPUT);
}
void loop() {
    digitalWrite(LED1_PIN1,HIGH);
    delay(1000);
    digitalWrite(LED1_PIN1,LOW);
    delay(1000);
