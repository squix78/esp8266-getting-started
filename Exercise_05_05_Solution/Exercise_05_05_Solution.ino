#include <Wire.h>  
#include "SSD1306Wire.h"

SSD1306Wire  display(0x3c, D3, D4);

void setup() {
  // Initialize the driver
  display.init();

  // define font
  display.setFont(ArialMT_Plain_10);

  // add method here to center the text
  display.setTextAlignment(TEXT_ALIGN_CENTER);
  
  // Set the drawing color once
  display.setColor(WHITE);
}

void loop() {
  // Clear the frame buffer
  display.clear();

  String textToDisplay = "This is a very long text which should be aligned horizontally to the center of the screen and automatically wrapped to the next line.";
  
  // Find a method in the documentation which draws the above text with line wrap enabled
  display.drawStringMaxWidth(64, 0, 120, textToDisplay);

  // Write the frame buffer to the display.
  display.display();

}

