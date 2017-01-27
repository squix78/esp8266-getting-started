void setup() {
  Serial.begin(115200);
  
  // Setup here the Flash Button D3 for input
  pinMode(D3, INPUT);

}

void loop() {
  // Read here the value of D3 and send it to the Serial console
  Serial.println(digitalRead(D3));
}
