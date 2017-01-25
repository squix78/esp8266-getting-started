int counter = 1;

void setup() {
  // Start the serial output here
  // Use 115200 as default speed
  Serial.begin(115200);
}

void loop() {
  // Write here to the serial console: "1. Hello world", "2. Hello world", etc
  Serial.print(counter);
  Serial.println(". Hello world");
  
  // Increase the counter
  counter++;
  
  // Sleep a second
  delay(1000);
}
