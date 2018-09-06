
// Include the correct display library
// For a connection via I2C using Wire include
#include <Wire.h>  // Only needed for Arduino 1.6.5 and earlier
#include "SSD1306Wire.h" // legacy include: `#include "SSD1306.h"`

SSD1306Wire  display(0x3c, D3, D4);

void setup() {
  Serial.begin(115200);
  display.init();

  display.clear();
  display.setColor(WHITE);
  display.drawLine(0, 0, 128, 64);
  display.drawLine(0, 64, 128, 0);
  display.display();

}

void loop() {

}

