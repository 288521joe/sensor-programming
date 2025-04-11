#define LED 4       
#define POT 34       

void setup() {
    pinMode(LED, OUTPUT);      
    pinMode(POT, INPUT);       
    Serial.begin(9600);        
}

void loop() {
    int potValue = analogRead(POT);  

  Map potentiometer value (0-4095) to PWM range (0-255)
    int pwmValue = map(potValue, 0, 4095, 0, 255);

    
    analogWrite(LED, pwmValue);  

    
    Serial.print("Potentiometer Value: ");
    Serial.print(potValue);
    Serial.print(" | PWM Value: ");
    Serial.println(pwmValue);

    delay(100);
}


