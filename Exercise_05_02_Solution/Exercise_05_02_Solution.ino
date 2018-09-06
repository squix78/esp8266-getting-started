#include <Wire.h>  
#include "SSD1306Wire.h"

SSD1306Wire  display(0x3c, D3, D4);

// The y variable will be used to animate the lines
uint8_t y = 0;
// The direction changes, when y reaches either 0 or 64
sint8_t direction = 1;

void setup() {
  // Initialize the driver
  display.init();
  
  // Set the drawing color once
  display.setColor(WHITE);
}

void loop() {
  // Change the y value
  y = y + direction; 
  if (y == 64) {
    // decrease y
    direction = -1;
  } else if (y == 0) {
    // increase y
    direction = 1;
  }
  // Clear the frame buffer
  display.clear();
  
  // Draw the lines by using the current y value
  display.drawLine(0, y, 128, 64 - y);
  display.drawLine(0, 64 - y, 128, y);

  // Write the frame buffer to the display.
  display.display();

}

