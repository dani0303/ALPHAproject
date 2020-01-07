#include "HyperDisplay_UG2856KLBAG01.h"   
#define SERIAL_PORT Serial  
#define WIRE_PORT Wire      


  UG2856KLBAG01_I2C myTOLED; 

void setup() {
  Serial.begin(9600);
  Serial.println(F("Example4_Text: Transparent Graphical OLED"));
  WIRE_PORT.begin();
  myTOLED.begin(WIRE_PORT, false, SSD1309_ARD_UNUSED_PIN);  
  Wire.setClock(400000);

  wind_info_t defaultWindow, myWindow;
}

void loop() {
  myTOLED.setContrastControl(0);
  myTOLED.pixelSet(84, 3);
  

  
}
