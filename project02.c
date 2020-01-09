#include "HyperDisplay_UG2856KLBAG01.h"   
#define SERIAL_PORT Serial  
#define WIRE_PORT Wire      



  UG2856KLBAG01_I2C myTOLED; 

  uint8_t color = 0x01;
  uint8_t noColor = 0x00;

void setup() {
  Serial.begin(9600);
  Serial.println(F("Example4_Text: Transparent Graphical OLED"));
  WIRE_PORT.begin();
  myTOLED.begin(WIRE_PORT, false, SSD1309_ARD_UNUSED_PIN);  
  Wire.setClock(400000);

  helloWorlddisappear();
  delay(1000);


}

void loop() {
  startScreen();
  delay(1500);
  
}





void startScreen( void ) {
  
  myTOLED.setContrastControl(0);
  
  uint8_t x0      = 0;
  uint8_t y0      = 0;
  uint8_t x1      = 0;
  uint8_t y1      = 0;
  uint8_t r       = 0;

  x0 = 5;
  y0 = 5;
  myTOLED.pixelSet(x0, y0);

  x0 = 1;
  y0 = 22;
  x1 = 128;
  y1 = 22;
  myTOLED.lineSet(x0, y0, x1, y1);

  myTOLED.pixelSet(126,2);
  delay(1000);

  myTOLED.pixelSet(5 , 16); myTOLED.pixelSet(9 , 16); myTOLED.pixelSet(13 , 16); myTOLED.pixelSet(17 , 16); myTOLED.pixelSet(22 , 16); myTOLED.pixelSet(25 , 16); myTOLED.pixelSet(29 , 16); myTOLED.pixelSet(32 , 16);
  myTOLED.pixelSet(4 , 17); myTOLED.pixelSet(6 , 17); myTOLED.pixelSet(8 , 17); myTOLED.pixelSet(10 , 17); myTOLED.pixelSet(12 , 17); myTOLED.pixelSet(14 , 17); myTOLED.pixelSet(16 , 17); myTOLED.pixelSet(18 , 17); myTOLED.pixelSet(22 , 17); myTOLED.pixelSet(24 , 17); myTOLED.pixelSet(25 , 17); myTOLED.pixelSet(29 , 17); myTOLED.pixelSet(31 , 17); myTOLED.pixelSet(33 , 17);
  myTOLED.pixelSet(6 , 18); myTOLED.pixelSet(8 , 18); myTOLED.pixelSet(10 , 18); myTOLED.pixelSet(14 , 18); myTOLED.pixelSet(16 , 18); myTOLED.pixelSet(18 , 18); myTOLED.pixelSet(21 , 18); myTOLED.pixelSet(25 , 18); myTOLED.pixelSet(28 , 18); myTOLED.pixelSet(32 , 18);
  myTOLED.pixelSet(5 , 19); myTOLED.pixelSet(8 , 19); myTOLED.pixelSet(10 , 19); myTOLED.pixelSet(13 , 19); myTOLED.pixelSet(16 , 19); myTOLED.pixelSet(18 , 19); myTOLED.pixelSet(21 , 19); myTOLED.pixelSet(25 , 19); myTOLED.pixelSet(28 , 19); myTOLED.pixelSet(32 , 19);
  myTOLED.pixelSet(4 , 20); myTOLED.pixelSet(8 , 20); myTOLED.pixelSet(10 , 20); myTOLED.pixelSet(12 , 20); myTOLED.pixelSet(16 , 20); myTOLED.pixelSet(18 , 20); myTOLED.pixelSet(20 , 20); myTOLED.pixelSet(25 , 20); myTOLED.pixelSet(27 , 20); myTOLED.pixelSet(31 , 20); myTOLED.pixelSet(33 , 20);
  myTOLED.pixelSet(4 , 21); myTOLED.pixelSet(5 , 21); myTOLED.pixelSet(6 , 21); myTOLED.pixelSet(9 , 21); myTOLED.pixelSet(12 , 21); myTOLED.pixelSet(13 , 21); myTOLED.pixelSet(14 , 21); myTOLED.pixelSet(17 , 21); myTOLED.pixelSet(20 , 21); myTOLED.pixelSet(25 , 21); myTOLED.pixelSet(27 , 21); myTOLED.pixelSet(32 , 21); 
 
}

void HelloWorld( void ) {
//  
  myTOLED.pixelSet(24, 26); myTOLED.pixelSet(28, 26); myTOLED.pixelSet(36, 26); myTOLED.pixelSet(38, 26); myTOLED.pixelSet(47 ,26); myTOLED.pixelSet(51 ,26); myTOLED.pixelSet(64 ,26); myTOLED.pixelSet(70 ,26);
  myTOLED.pixelSet(24 ,27); myTOLED.pixelSet(28, 27); myTOLED.pixelSet(36, 27); myTOLED.pixelSet(38 ,27); myTOLED.pixelSet(47 ,27); myTOLED.pixelSet(51 ,27); myTOLED. pixelSet(64 ,27); myTOLED.pixelSet(70 ,27);
  myTOLED.pixelSet(24 ,28); myTOLED.pixelSet(28 ,28); myTOLED.pixelSet(36 ,28); myTOLED.pixelSet(38 ,28); myTOLED.pixelSet(47 ,28); myTOLED.pixelSet(51 ,28); myTOLED.pixelSet(64 ,28); myTOLED.pixelSet(70 ,28);
  myTOLED.pixelSet(24 , 29); myTOLED.pixelSet(28 , 29); myTOLED.pixelSet(31 , 29); myTOLED.pixelSet(32 , 29); myTOLED.pixelSet(33 , 29); myTOLED.pixelSet(36 , 29); myTOLED.pixelSet(38 , 29); myTOLED.pixelSet(41 , 29); myTOLED.pixelSet(42 , 29); myTOLED.pixelSet(43 , 29); myTOLED.pixelSet(47 , 29); myTOLED.pixelSet(51 , 29); myTOLED.pixelSet(54 , 29); myTOLED.pixelSet(55 , 29); myTOLED.pixelSet(56 , 29); myTOLED.pixelSet(59 , 29); myTOLED.pixelSet(61 , 29); myTOLED.pixelSet(62 , 29); myTOLED.pixelSet(64 , 29); myTOLED.pixelSet(70 , 29);
  myTOLED.pixelSet(24 , 30); myTOLED.pixelSet(28 , 30); myTOLED.pixelSet(30 , 30); myTOLED.pixelSet(34 , 30); myTOLED.pixelSet(36 , 30); myTOLED.pixelSet(38 , 30); myTOLED.pixelSet(40 , 30); myTOLED.pixelSet(44 , 30); myTOLED.pixelSet(47 , 30); myTOLED.pixelSet(51 , 30); myTOLED.pixelSet(53 , 30); myTOLED.pixelSet(57 , 30); myTOLED.pixelSet(59 , 30); myTOLED.pixelSet(60 , 30); myTOLED.pixelSet(64 , 30); myTOLED.pixelSet(67 , 30); myTOLED.pixelSet(68 , 30); myTOLED.pixelSet(69 , 30); myTOLED.pixelSet(70 , 30);
  myTOLED.pixelSet(24 , 31); myTOLED.pixelSet(28 , 31); myTOLED.pixelSet(30 , 31); myTOLED.pixelSet(34 , 31); myTOLED.pixelSet(36 , 31); myTOLED.pixelSet(38 , 31); myTOLED.pixelSet(40 , 31); myTOLED.pixelSet(44 , 31); myTOLED.pixelSet(47 , 31); myTOLED.pixelSet(51 , 31); myTOLED.pixelSet(53 , 31); myTOLED.pixelSet(57 , 31); myTOLED.pixelSet(59 , 31); myTOLED.pixelSet(64 , 31); myTOLED.pixelSet(66 , 31); myTOLED.pixelSet(70 , 31);
  myTOLED.pixelSet(24 , 32); myTOLED.pixelSet(25 , 32); myTOLED.pixelSet(26 , 32); myTOLED.pixelSet(27 , 32); myTOLED.pixelSet(28 , 32); myTOLED.pixelSet(30 , 32); myTOLED.pixelSet(31 , 32); myTOLED.pixelSet(32 , 32); myTOLED.pixelSet(33 , 32); myTOLED.pixelSet(34 , 32); myTOLED.pixelSet(36 , 32); myTOLED.pixelSet(38 , 32); myTOLED.pixelSet(40 , 32); myTOLED.pixelSet(44 , 32); myTOLED.pixelSet(47 , 32); myTOLED.pixelSet(51 , 32); myTOLED.pixelSet(53 , 32); myTOLED.pixelSet(57 , 32); myTOLED.pixelSet(59 , 32); myTOLED.pixelSet(64 , 32); myTOLED.pixelSet(66 , 32); myTOLED.pixelSet(70 , 32);
  myTOLED.pixelSet(24 , 33); myTOLED.pixelSet(28 , 33); myTOLED.pixelSet(30 , 33); myTOLED.pixelSet(36 , 33); myTOLED.pixelSet(38 , 33); myTOLED.pixelSet(40 , 33); myTOLED.pixelSet(44 , 33); myTOLED.pixelSet(47 , 33); myTOLED.pixelSet(49 , 33); myTOLED.pixelSet(51 , 33); myTOLED.pixelSet(53 , 33); myTOLED.pixelSet(57 , 33); myTOLED.pixelSet(59 , 33); myTOLED.pixelSet(64 , 33); myTOLED.pixelSet(66 , 33); myTOLED.pixelSet(70 , 33);
  myTOLED.pixelSet(24 ,34); myTOLED.pixelSet(28 ,34); myTOLED.pixelSet(30 ,34); myTOLED.pixelSet(36 ,34); myTOLED.pixelSet(38 ,34); myTOLED.pixelSet(40 ,34); myTOLED.pixelSet(44 ,34); myTOLED.pixelSet(47 ,34); myTOLED.pixelSet(49 ,34); myTOLED.pixelSet(51 ,34); myTOLED.pixelSet(53 ,34); myTOLED.pixelSet(57 ,34); myTOLED.pixelSet(59 ,34); myTOLED.pixelSet(64 ,34); myTOLED.pixelSet(66 ,34); myTOLED.pixelSet(70 ,34);
  myTOLED.pixelSet(24 , 35); myTOLED.pixelSet(28 , 35); myTOLED.pixelSet(30 , 35); myTOLED.pixelSet(36 , 35); myTOLED.pixelSet(38 , 35); myTOLED.pixelSet(40 , 35); myTOLED.pixelSet(44 , 35); myTOLED.pixelSet(47 , 35); myTOLED.pixelSet(49 , 35); myTOLED.pixelSet(51 , 35); myTOLED.pixelSet(53 , 35); myTOLED.pixelSet(57 , 35); myTOLED.pixelSet(59 , 35); myTOLED.pixelSet(64 , 35); myTOLED.pixelSet(66 , 35); myTOLED.pixelSet(70 , 35);
  myTOLED.pixelSet(24 , 36); myTOLED.pixelSet(28 , 36); myTOLED.pixelSet(30 , 36); myTOLED.pixelSet(36 , 36); myTOLED.pixelSet(38 , 36); myTOLED.pixelSet(40 , 36); myTOLED.pixelSet(44 , 36); myTOLED.pixelSet(47 , 36); myTOLED.pixelSet(49 , 36); myTOLED.pixelSet(51 , 36); myTOLED.pixelSet(53 , 36); myTOLED.pixelSet(57 , 36); myTOLED.pixelSet(59 , 36); myTOLED.pixelSet(64 , 36); myTOLED.pixelSet(66 , 36); myTOLED.pixelSet(70 , 36);
  myTOLED.pixelSet(24 , 37); myTOLED.pixelSet(28 , 37); myTOLED.pixelSet(32 , 37); myTOLED.pixelSet(33 , 37); myTOLED.pixelSet(34 , 37); myTOLED.pixelSet(36 , 37); myTOLED.pixelSet(38 , 37); myTOLED.pixelSet(41 , 37); myTOLED.pixelSet(43 , 37); myTOLED.pixelSet(48 , 37); myTOLED.pixelSet(50 , 37); myTOLED.pixelSet(54 , 37); myTOLED.pixelSet(55 , 37); myTOLED.pixelSet(56 , 37); myTOLED.pixelSet(59 , 37); myTOLED.pixelSet(64 , 37); myTOLED.pixelSet(67 , 37); myTOLED.pixelSet(68 , 37); myTOLED.pixelSet(69 , 37);
//  
}

void helloWorlddisappear() {

/////
  myTOLED.pixelSet(24, 26); myTOLED.pixelSet(28, 26); myTOLED.pixelSet(36, 26); myTOLED.pixelSet(38, 26); myTOLED.pixelSet(47 ,26); myTOLED.pixelSet(51 ,26); myTOLED.pixelSet(64 ,26); myTOLED.pixelSet(70 ,26);
  myTOLED.pixelSet(24 ,27); myTOLED.pixelSet(28, 27); myTOLED.pixelSet(36, 27); myTOLED.pixelSet(38 ,27); myTOLED.pixelSet(47 ,27); myTOLED.pixelSet(51 ,27); myTOLED. pixelSet(64 ,27); myTOLED.pixelSet(70 ,27);
  myTOLED.pixelSet(24 ,28); myTOLED.pixelSet(28 ,28); myTOLED.pixelSet(36 ,28); myTOLED.pixelSet(38 ,28); myTOLED.pixelSet(47 ,28); myTOLED.pixelSet(51 ,28); myTOLED.pixelSet(64 ,28); myTOLED.pixelSet(70 ,28);
  myTOLED.pixelSet(24 , 29); myTOLED.pixelSet(28 , 29); myTOLED.pixelSet(31 , 29); myTOLED.pixelSet(32 , 29); myTOLED.pixelSet(33 , 29); myTOLED.pixelSet(36 , 29); myTOLED.pixelSet(38 , 29); myTOLED.pixelSet(41 , 29); myTOLED.pixelSet(42 , 29); myTOLED.pixelSet(43 , 29); myTOLED.pixelSet(47 , 29); myTOLED.pixelSet(51 , 29); myTOLED.pixelSet(54 , 29); myTOLED.pixelSet(55 , 29); myTOLED.pixelSet(56 , 29); myTOLED.pixelSet(59 , 29); myTOLED.pixelSet(61 , 29); myTOLED.pixelSet(62 , 29); myTOLED.pixelSet(64 , 29); myTOLED.pixelSet(70 , 29);
  myTOLED.pixelSet(24 , 30); myTOLED.pixelSet(28 , 30); myTOLED.pixelSet(30 , 30); myTOLED.pixelSet(34 , 30); myTOLED.pixelSet(36 , 30); myTOLED.pixelSet(38 , 30); myTOLED.pixelSet(40 , 30); myTOLED.pixelSet(44 , 30); myTOLED.pixelSet(47 , 30); myTOLED.pixelSet(51 , 30); myTOLED.pixelSet(53 , 30); myTOLED.pixelSet(57 , 30); myTOLED.pixelSet(59 , 30); myTOLED.pixelSet(60 , 30); myTOLED.pixelSet(64 , 30); myTOLED.pixelSet(67 , 30); myTOLED.pixelSet(68 , 30); myTOLED.pixelSet(69 , 30); myTOLED.pixelSet(70 , 30);
  myTOLED.pixelSet(24 , 31); myTOLED.pixelSet(28 , 31); myTOLED.pixelSet(30 , 31); myTOLED.pixelSet(34 , 31); myTOLED.pixelSet(36 , 31); myTOLED.pixelSet(38 , 31); myTOLED.pixelSet(40 , 31); myTOLED.pixelSet(44 , 31); myTOLED.pixelSet(47 , 31); myTOLED.pixelSet(51 , 31); myTOLED.pixelSet(53 , 31); myTOLED.pixelSet(57 , 31); myTOLED.pixelSet(59 , 31); myTOLED.pixelSet(64 , 31); myTOLED.pixelSet(66 , 31); myTOLED.pixelSet(70 , 31);
  myTOLED.pixelSet(24 , 32); myTOLED.pixelSet(25 , 32); myTOLED.pixelSet(26 , 32); myTOLED.pixelSet(27 , 32); myTOLED.pixelSet(28 , 32); myTOLED.pixelSet(30 , 32); myTOLED.pixelSet(31 , 32); myTOLED.pixelSet(32 , 32); myTOLED.pixelSet(33 , 32); myTOLED.pixelSet(34 , 32); myTOLED.pixelSet(36 , 32); myTOLED.pixelSet(38 , 32); myTOLED.pixelSet(40 , 32); myTOLED.pixelSet(44 , 32); myTOLED.pixelSet(47 , 32); myTOLED.pixelSet(51 , 32); myTOLED.pixelSet(53 , 32); myTOLED.pixelSet(57 , 32); myTOLED.pixelSet(59 , 32); myTOLED.pixelSet(64 , 32); myTOLED.pixelSet(66 , 32); myTOLED.pixelSet(70 , 32);
  myTOLED.pixelSet(24 , 33); myTOLED.pixelSet(28 , 33); myTOLED.pixelSet(30 , 33); myTOLED.pixelSet(36 , 33); myTOLED.pixelSet(38 , 33); myTOLED.pixelSet(40 , 33); myTOLED.pixelSet(44 , 33); myTOLED.pixelSet(47 , 33); myTOLED.pixelSet(49 , 33); myTOLED.pixelSet(51 , 33); myTOLED.pixelSet(53 , 33); myTOLED.pixelSet(57 , 33); myTOLED.pixelSet(59 , 33); myTOLED.pixelSet(64 , 33); myTOLED.pixelSet(66 , 33); myTOLED.pixelSet(70 , 33);
  myTOLED.pixelSet(24 ,34); myTOLED.pixelSet(28 ,34); myTOLED.pixelSet(30 ,34); myTOLED.pixelSet(36 ,34); myTOLED.pixelSet(38 ,34); myTOLED.pixelSet(40 ,34); myTOLED.pixelSet(44 ,34); myTOLED.pixelSet(47 ,34); myTOLED.pixelSet(49 ,34); myTOLED.pixelSet(51 ,34); myTOLED.pixelSet(53 ,34); myTOLED.pixelSet(57 ,34); myTOLED.pixelSet(59 ,34); myTOLED.pixelSet(64 ,34); myTOLED.pixelSet(66 ,34); myTOLED.pixelSet(70 ,34);
  myTOLED.pixelSet(24 , 35); myTOLED.pixelSet(28 , 35); myTOLED.pixelSet(30 , 35); myTOLED.pixelSet(36 , 35); myTOLED.pixelSet(38 , 35); myTOLED.pixelSet(40 , 35); myTOLED.pixelSet(44 , 35); myTOLED.pixelSet(47 , 35); myTOLED.pixelSet(49 , 35); myTOLED.pixelSet(51 , 35); myTOLED.pixelSet(53 , 35); myTOLED.pixelSet(57 , 35); myTOLED.pixelSet(59 , 35); myTOLED.pixelSet(64 , 35); myTOLED.pixelSet(66 , 35); myTOLED.pixelSet(70 , 35);
  myTOLED.pixelSet(24 , 36); myTOLED.pixelSet(28 , 36); myTOLED.pixelSet(30 , 36); myTOLED.pixelSet(36 , 36); myTOLED.pixelSet(38 , 36); myTOLED.pixelSet(40 , 36); myTOLED.pixelSet(44 , 36); myTOLED.pixelSet(47 , 36); myTOLED.pixelSet(49 , 36); myTOLED.pixelSet(51 , 36); myTOLED.pixelSet(53 , 36); myTOLED.pixelSet(57 , 36); myTOLED.pixelSet(59 , 36); myTOLED.pixelSet(64 , 36); myTOLED.pixelSet(66 , 36); myTOLED.pixelSet(70 , 36);
  myTOLED.pixelSet(24 , 37); myTOLED.pixelSet(28 , 37); myTOLED.pixelSet(32 , 37); myTOLED.pixelSet(33 , 37); myTOLED.pixelSet(34 , 37); myTOLED.pixelSet(36 , 37); myTOLED.pixelSet(38 , 37); myTOLED.pixelSet(41 , 37); myTOLED.pixelSet(43 , 37); myTOLED.pixelSet(48 , 37); myTOLED.pixelSet(50 , 37); myTOLED.pixelSet(54 , 37); myTOLED.pixelSet(55 , 37); myTOLED.pixelSet(56 , 37); myTOLED.pixelSet(59 , 37); myTOLED.pixelSet(64 , 37); myTOLED.pixelSet(67 , 37); myTOLED.pixelSet(68 , 37); myTOLED.pixelSet(69 , 37);   
/////

  for(uint8_t indi = 255; indi > 1; indi--) {

    myTOLED.setContrastControl(indi);
    delay(5);    
  }
  myTOLED.setContrastControl(0);
  myTOLED.clearDisplay();
  myTOLED.setContrastControl(128);
}

void toolbar( void ) {

  uint8_t x0      = 0;
  uint8_t y0      = 0;
  uint8_t x1      = 0;
  uint8_t y1      = 0;
  uint8_t r       = 0;

  x0 = 5;
  y0 = 5;
  myTOLED.pixelSet(x0, y0);

  x0 = 1;
  y0 = 22;
  x1 = 128;
  y1 = 22;
  myTOLED.lineSet(x0, y0, x1, y1);
  myTOLED.pixelSet(126,2);

}
