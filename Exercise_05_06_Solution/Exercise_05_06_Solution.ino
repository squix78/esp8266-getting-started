// Include the driver file
#include "DHTesp.h"

// Declare the driver
DHTesp dht;

void setup() {
    Serial.begin(115200);

    // Initialize the driver
    dht.setup(D6, DHTesp::DHT11);
}

void loop() {

  // Read humidity and temperature into float variables
  float humidity = dht.getHumidity();
  float temperature = dht.getTemperature();

  // Use printf to write the values formatted to the command line
  Serial.printf("Hum: %.1f%%, Temp: %.1f°C\n", humidity, temperature);

  // Wait
  delay(1000);

}

