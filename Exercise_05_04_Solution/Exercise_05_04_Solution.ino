#include <Wire.h>  
#include "SSD1306Wire.h"
#include "Rancho_Regular_16.h"

SSD1306Wire  display(0x3c, D3, D4);

void setup() {
  // Initialize the driver
  display.init();

  // Set the font type here
  display.setFont(Rancho_Regular_16);
  
  // Set the drawing color once
  display.setColor(WHITE);
}

void loop() {
  // Clear the frame buffer
  display.clear();
  
  // Draw the text and optionally add a counter
  display.drawString (10, 10, "Crunchy Rancho");

  // Write the frame buffer to the display.
  display.display();

}

