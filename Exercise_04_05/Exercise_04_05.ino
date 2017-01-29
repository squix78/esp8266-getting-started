
#define BUTTON D3
#define LED    D0
boolean state = true;

void toggle() {
    state = !state;
    digitalWrite(LED, state);
}

void setup() {
  // Setup Serial
  Serial.begin(115200);

  // Setup Pins
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);

  // Setup Interrupts. Experiment with FALLING, RISING and CHANGE

}

void loop() {
 // Nothing to do here
}
