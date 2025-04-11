#define TRIG_PIN 5
#define ECHO_PIN 18

void setup() {
    Serial.begin(115200);
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
}

void loop() {
    // Send a 10µs pulse to trigger the ultrasonic burst
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Measure the echo time (duration in microseconds)
    long duration = pulseIn(ECHO_PIN, HIGH);

    // Convert time to distance (Speed of Sound = 343m/s)
    float distance = (duration * 0.0343) / 2;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    delay(500);
}
