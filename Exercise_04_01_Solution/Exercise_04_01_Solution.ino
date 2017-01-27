int counter = 1;

void setup() {
  // Start the serial output here
  // Use 115200 as default speed
  Serial.begin(115200);
}

void loop() {
  // Explanation: The first line just prints (print) the counter without new line
  // The second (println) prints out Hello world and adds a new line afterwards
  // You could also do Serial.println(String(counter) + ". Hello world"); in one line
  Serial.print(counter);
  Serial.println(". Hello world");
  
  // Increase the counter
  counter++;
  
  // Sleep a second
  delay(1000);
}
