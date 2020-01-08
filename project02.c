#include "HyperDisplay_UG2856KLBAG01.h"   
#define SERIAL_PORT Serial  
#define WIRE_PORT Wire

UG2856KLBAG01_I2C myTOLED; 


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(F("Example4_Text: Transparent Graphical OLED"));
  WIRE_PORT.begin();
  myTOLED.begin(WIRE_PORT, false, SSD1309_ARD_UNUSED_PIN);  
  Wire.setClock(400000);

}

void loop() {
  // put your main code here, to run repeatedly:
  hellowWorld1();
  delay(5000);
  
  

}



void helloWorld( void ); {
  
  myTOLED.setContrastControl(0);
  
  x0 = 1;
  y0 = 24;
  x1 = 128;
  y1 = 24;
 
  myTOLED.lineSet(x0, y0, x1, y1);
  
  myTOLED.pixelSet(5 , 16); myTOLED.pixelSet(9 , 16); myTOLED.pixelSet(13 , 16); myTOLED.pixelSet(17 , 16); myTOLED.pixelSet(22 , 16); myTOLED.pixelSet(25 , 16); myTOLED.pixelSet(29 , 16); myTOLED.pixelSet(32 , 16);
  myTOLED.pixelSet(4 , 17); myTOLED.pixelSet(6 , 17); myTOLED.pixelSet(8 , 17); myTOLED.pixelSet(10 , 17); myTOLED.pixelSet(12 , 17); myTOLED.pixelSet(14 , 17); myTOLED.pixelSet(16 , 17); myTOLED.pixelSet(18 , 17); myTOLED.pixelSet(22 , 17); myTOLED.pixelSet(24 , 17); myTOLED.pixelSet(25 , 17); myTOLED.pixelSet(29 , 17); myTOLED.pixelSet(31 , 17); myTOLED.pixelSet(33 , 17);
  myTOLED.pixelSet(6 , 18); myTOLED.pixelSet(8 , 18); myTOLED.pixelSet(10 , 18); myTOLED.pixelSet(14 , 18); myTOLED.pixelSet(16 , 18); myTOLED.pixelSet(18 , 18); myTOLED.pixelSet(21 , 18); myTOLED.pixelSet(25 , 18); myTOLED.pixelSet(28 , 18); myTOLED.pixelSet(32 , 18);
  myTOLED.pixelSet(5 , 19); myTOLED.pixelSet(8 , 19); myTOLED.pixelSet(10 , 19); myTOLED.pixelSet(13 , 19); myTOLED.pixelSet(16 , 19); myTOLED.pixelSet(18 , 19); myTOLED.pixelSet(21 , 19); myTOLED.pixelSet(25 , 19); myTOLED.pixelSet(28 , 19); myTOLED.pixelSet(32 , 19);
  myTOLED.pixelSet(4 , 20); myTOLED.pixelSet(8 , 20); myTOLED.pixelSet(10 , 20); myTOLED.pixelSet(12 , 20); myTOLED.pixelSet(16 , 20); myTOLED.pixelSet(18 , 20); myTOLED.pixelSet(20 , 20); myTOLED.pixelSet(25 , 20); myTOLED.pixelSet(27 , 20); myTOLED.pixelSet(31 , 20); myTOLED.pixelSet(33 , 20);
  myTOLED.pixelSet(4 , 21); myTOLED.pixelSet(5 , 21); myTOLED.pixelSet(6 , 21); myTOLED.pixelSet(9 , 21); myTOLED.pixelSet(12 , 21); myTOLED.pixelSet(13 , 21); myTOLED.pixelSet(14 , 21); myTOLED.pixelSet(17 , 21); myTOLED.pixelSet(20 , 21); myTOLED.pixelSet(25 , 21); myTOLED.pixelSet(27 , 21); myTOLED.pixelSet(32 , 21);
  
  
  
  
  
  
  
  
}
