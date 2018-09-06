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
  // Change the y value here

  if (y == 64) {
    // set y direction here
    
  } else if (y == 0) {
    // set y direction here

  }
  // Clear the frame buffer
  display.clear();
  
  // Add the y variable in four places by either
  // adding y to the existing value or by subtracting from it
  display.drawLine(0, 0, 128, 64);
  display.drawLine(0, 64, 128, 0);

  // Write the frame buffer to the display.
  display.display();

}

