#define LED 4       // LED connected to GPIO4
#define POT 34      // Potentiometer connected to GPIO34

void setup() {
    pinMode(LED, OUTPUT);      // Set LED as output
    pinMode(POT, INPUT);       // Set potentiometer as input
    Serial.begin(9600);        // Start serial communication
}

void loop() {
    int potValue = analogRead(POT);  // Read potentiometer value (0-4095)

    // Map potentiometer value (0-4095) to PWM range (0-255)
    int pwmValue = map(potValue, 0, 4095, 0, 255);

    // Set PWM duty cycle (LED brightness)
    analogWrite(LED, pwmValue);

    // Print data for the Serial Monitor (text-based output)
    Serial.print("Potentiometer Value: ");
    Serial.print(potValue);
    Serial.print("  ");
    Serial.print("PWM Value: ");
    Serial.println(pwmValue);

    // Print data for the Serial Plotter (key:value format)
    
    Serial.print("Potentiometer Value:");  // Key for potentiometer
    Serial.println(potValue);  // Value for potentiometer

    Serial.print("PWM Value:");  // Key for PWM
    Serial.println(pwmValue);  // Value for PWM

    delay(100);  // Small delay for stability
}
