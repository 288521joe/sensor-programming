#include <Wire.h>                    
#include <Adafruit_MPU6050.h>         
#include <Adafruit_Sensor.h>          

Adafruit_MPU6050 mpu;

void setup() {
    Serial.begin(115200);
    Wire.begin(21, 22);

    if (!mpu.begin()) {
        Serial.println("MPU6050 not found!");
        while (1) delay(1000);
    }

    mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
    mpu.setGyroRange(MPU6050_RANGE_250_DEG);
    mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);
}

void loop() {
    // Create sensor event objects for accelerometer, gyroscope, and temperature
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);

    Serial.print("AccelX: ");
    Serial.print(a.acceleration.x);
    Serial.print(" m/s², ");

    Serial.print("AccelY: ");
    Serial.print(a.acceleration.y);
    Serial.print(" m/s², ");

    Serial.print("AccelZ: ");
    Serial.print(a.acceleration.z);
    Serial.println(" m/s²");

    // Print Gyroscope Data (X, Y, Z)
    Serial.print("GyroX: ");
    Serial.print(g.gyro.x);
    Serial.print(" rad/s, ");

    Serial.print("GyroY: ");
    Serial.print(g.gyro.y);
    Serial.print(" rad/s, ");

    Serial.print("GyroZ: ");
    Serial.print(g.gyro.z);
    Serial.println(" rad/s");

    // Print Temperature
    Serial.print("Temperature: ");
    Serial.print(temp.temperature);
    Serial.println(" °C");

    Serial.println("----------------------");
    
    delay(500);  // Short delay to prevent Serial Overflow
}


