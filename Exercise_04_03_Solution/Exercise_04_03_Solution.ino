boolean ledState = false;

void setup() {
  // Set the LED pin D0 into the correct mode (OUTPUT)
  pinMode(D0, OUTPUT);
}

void loop() {
  // lets blink!
  digitalWrite(D0, ledState);
  ledState = !ledState;
  delay(1000);
}
