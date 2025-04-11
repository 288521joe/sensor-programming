
# sensor-prog using ESP32

**Setting up ESP32 in Arduino IDE**

•	File → Preferences https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json

•	Open Tools → Board → Boards Manager. (install)

•	Download CP2102 Driver

•	If failed to connect" error → Hold the BOOT button while uploading.

# Digital input/Output
**Digital input instruction Within code**

# Control via serial monitor
**Serial.begin(baud_rate)**	.........Start serial communication

**Serial.end()**.....................Stop serial communication

S**erial.available()**	.............Check if data is available to read

**Serial.read()**	...................Read a single byte

**Serial.readString()**	.............Read entire input as a string

**Serial.readStringUntil('\n')**	...Read input until a newline is encountered

**Serial.write(byte)**	.............Send raw byte data

**Serial.print(data)**	.............Print data without newline

**Serial.println(data)**	...........Print data with a newline

**Serial.setTimeout(time_ms)**	.....Set timeout for reading data

**Serial.flush()**	.................Wait until all data is sent

**serialEvent()**	...................Automatically handle incoming data

