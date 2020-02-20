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

}

void loop() {
	
	Info_page();
	delay(5000);
	
  
  
}

void Info_page ( void ) {

    myTOLED.pixelSet( 36, 10); myTOLED.pixelSet(37 , 10); myTOLED.pixelSet( 38, 10); myTOLED.pixelSet( 69, 10); myTOLED.pixelSet( 72, 10);
    ////////////////
    myTOLED.pixelSet( 36, 11); myTOLED.pixelSet( 39, 11); myTOLED.pixelSet(69 , 11); myTOLED.pixelSet(72 , 11);
    ////////////////
    myTOLED.pixelSet(36 , 12); myTOLED.pixelSet(39 , 12); myTOLED.pixelSet(42 , 12); myTOLED.pixelSet(46 , 12); myTOLED.pixelSet(47 , 12); myTOLED.pixelSet(50 , 12); myTOLED.pixelSet(63 , 12); myTOLED.pixelSet(69 , 12); myTOLED.pixelSet(72 , 12);
    ///////////////
    myTOLED.pixelSet(36 , 13); myTOLED.pixelSet(39 , 13); myTOLED.pixelSet(41 , 13); myTOLED.pixelSet(43 , 13); myTOLED.pixelSet(45 , 13); myTOLED.pixelSet(53 , 13); myTOLED.pixelSet(54 , 13); myTOLED.pixelSet(55 , 13); myTOLED.pixelSet(57 , 13); myTOLED.pixelSet(59 , 13); myTOLED.pixelSet(62 , 13); myTOLED.pixelSet(64 , 13); myTOLED.pixelSet(67 , 13); myTOLED.pixelSet(68 , 13); myTOLED.pixelSet(69 , 13); myTOLED.pixelSet(72 , 13); myTOLED.pixelSet(73 , 13); myTOLED.pixelSet(74 , 13);
    //////////////
	myTOLED.pixelSet(36 , 14); myTOLED.pixelSet(39 , 14); myTOLED.pixelSet(41 , 14); myTOLED.pixelSet(42 , 14); myTOLED.pixelSet(43 , 14); myTOLED.pixelSet(46 , 14); myTOLED.pixelSet(47 , 14); myTOLED.pixelSet(50 , 14); myTOLED.pixelSet(52 , 14); myTOLED.pixelSet(55 , 14); myTOLED.pixelSet(57 , 14); myTOLED.pixelSet(58 , 14); myTOLED.pixelSet(60 , 14); myTOLED.pixelSet(62 , 14); myTOLED.pixelSet(63 , 14); myTOLED.pixelSet(64 , 14); myTOLED.pixelSet(66 , 14); myTOLED.pixelSet(69 , 14); myTOLED.pixelSet(72 , 14); myTOLED.pixelSet(75 , 14); myTOLED.pixelSet(77 , 14); myTOLED.pixelSet(80 , 14);
	//////////////
	myTOLED.pixelSet(36 , 15); myTOLED.pixelSet(39 , 15); myTOLED.pixelSet(41 , 15); myTOLED.pixelSet(48 , 15); myTOLED.pixelSet(50 , 15); myTOLED.pixelSet(52 , 15); myTOLED.pixelSet(55 , 15); myTOLED.pixelSet(57 , 15); myTOLED.pixelSet(60 , 15); myTOLED.pixelSet(62 , 15); myTOLED.pixelSet(66 , 15); myTOLED.pixelSet(69 , 15); myTOLED.pixelSet(72 , 15); myTOLED.pixelSet(75 , 15); myTOLED.pixelSet(77 , 15); myTOLED.pixelSet(80 , 15);
	//////////////
	myTOLED.pixelSet(36 , 16); myTOLED.pixelSet(37 , 16); myTOLED.pixelSet(38 , 16); myTOLED.pixelSet(42 , 16); myTOLED.pixelSet(43 , 16); myTOLED.pixelSet(45 , 16); myTOLED.pixelSet(46 , 16); myTOLED.pixelSet(47 , 16); myTOLED.pixelSet(50 , 16); myTOLED.pixelSet(53 , 16); myTOLED.pixelSet(54 , 16); myTOLED.pixelSet(55 , 16); myTOLED.pixelSet(57 , 16); myTOLED.pixelSet(60 , 16); myTOLED.pixelSet(63 , 16); myTOLED.pixelSet(64 , 16); myTOLED.pixelSet(67 , 16); myTOLED.pixelSet(68 , 16); myTOLED.pixelSet(73 , 16); myTOLED.pixelSet(74 , 16); myTOLED.pixelSet(78 , 16); myTOLED.pixelSet(79 , 16); myTOLED.pixelSet(80 , 16);
	////////////////
	myTOLED.pixelSet(55, 17); myTOLED.pixelSet(80 , 17);
	///////////////
	myTOLED.pixelSet(53 , 18); myTOLED.pixelSet(54 , 18); myTOLED.pixelSet(55 , 18); myTOLED.pixelSet(78 , 18); myTOLED.pixelSet(79 , 18); myTOLED.pixelSet(80 , 18);
	///////////////
	
	uint8_t x2      = 0;
    uint8_t y2      = 0;
    uint8_t x3      = 0;
    uint8_t y3      = 0;
	
	x2 = 36;
    y2 = 21; 
    x3 = 80;
    y3 = 21;
    myTOLED.lineSet(x2, y2, x3, y3);
	/////////////////
	
	myTOLED.pixelSet(37 , 26); myTOLED.pixelSet(38 , 26); myTOLED.pixelSet(58 , 26); myTOLED.pixelSet(61 , 26); myTOLED.pixelSet(62 , 26); myTOLED.pixelSet(63 , 26); myTOLED.pixelSet(74 , 26);
	/////////////////
	myTOLED.pixelSet(37 , 27); myTOLED.pixelSet(39 , 27); myTOLED.pixelSet(52 , 27); myTOLED.pixelSet(58 , 27); myTOLED.pixelSet(61 , 27); myTOLED.pixelSet(64 , 27); myTOLED.pixelSet(74 , 27);
	////////////////
	myTOLED.pixelSet(37 , 28); myTOLED.pixelSet(40 , 28); myTOLED.pixelSet(47 , 28); myTOLED.pixelSet(49 , 28); myTOLED.pixelSet(55 , 28); myTOLED.pixelSet(58 , 28); myTOLED.pixelSet(61 , 28); myTOLED.pixelSet(64 , 28); myTOLED.pixelSet(74 , 28); myTOLED.pixelSet(76 , 28); myTOLED.pixelSet(78 , 28); myTOLED.pixelSet(80 , 28); myTOLED.pixelSet(83 , 28); myTOLED.pixelSet( 84, 28); myTOLED.pixelSet( 85, 28);
	////////////////
	myTOLED.pixelSet(37 , 29); myTOLED.pixelSet(40 , 29); myTOLED.pixelSet(43 , 29); myTOLED.pixelSet(44 , 29); myTOLED.pixelSet(45 , 29); myTOLED.pixelSet(47 , 29); myTOLED.pixelSet(48 , 29); myTOLED.pixelSet(50 , 29); myTOLED.pixelSet(52 , 29); myTOLED.pixelSet(54 , 29); myTOLED.pixelSet(56 , 29); myTOLED.pixelSet(58 , 29); 	myTOLED.pixelSet(61 , 29); myTOLED.pixelSet(64 , 29); myTOLED.pixelSet(68 , 29); myTOLED.pixelSet(72 , 29); myTOLED.pixelSet(73 , 29); myTOLED.pixelSet(74 , 29); myTOLED.pixelSet(76 , 29); myTOLED.pixelSet(77 , 29); myTOLED.pixelSet(82 , 29); myTOLED.pixelSet(85 , 29);
	////////////////
	myTOLED.pixelSet(37 , 30); myTOLED.pixelSet(40 , 30); myTOLED.pixelSet(42 , 30); myTOLED.pixelSet(45 , 30); myTOLED.pixelSet(47 , 30); myTOLED.pixelSet(50 , 30); myTOLED.pixelSet(52 , 30); myTOLED.pixelSet(54 , 30); myTOLED.pixelSet(55 , 30); myTOLED.pixelSet(56 , 30); myTOLED.pixelSet(58 , 30); myTOLED.pixelSet(61 , 30); myTOLED.pixelSet(62 , 30); myTOLED.pixelSet(63 , 30); myTOLED.pixelSet(67 , 30); myTOLED.pixelSet(69 , 30); myTOLED.pixelSet(71 , 30); myTOLED.pixelSet(74 , 30); myTOLED.pixelSet(76 , 30); myTOLED.pixelSet(80 , 30); myTOLED.pixelSet(82 , 30); myTOLED.pixelSet(85, 30);
	////////////////
	myTOLED.pixelSet(37 , 31); myTOLED.pixelSet(40 , 31); myTOLED.pixelSet(42 , 31); myTOLED.pixelSet(45 , 31); myTOLED.pixelSet(47 , 31); myTOLED.pixelSet(50 , 31); myTOLED.pixelSet(52 , 31); myTOLED.pixelSet(54 , 31); myTOLED.pixelSet(58 , 31); myTOLED.pixelSet(61 , 31); myTOLED.pixelSet(64 , 31); myTOLED.pixelSet(67 , 31); myTOLED.pixelSet(69 , 31); myTOLED.pixelSet(71 , 31); myTOLED.pixelSet(74 , 31); myTOLED.pixelSet(76 , 31); myTOLED.pixelSet(80 , 31); myTOLED.pixelSet(82 , 31); myTOLED.pixelSet( 85, 31); 
	////////////////
	myTOLED.pixelSet(37 , 32); myTOLED.pixelSet(38 , 32); myTOLED.pixelSet(39 , 32); myTOLED.pixelSet(43 , 32); myTOLED.pixelSet(44 , 32); myTOLED.pixelSet(47 , 32); myTOLED.pixelSet(50 , 32); myTOLED.pixelSet(52, 32); myTOLED.pixelSet(55 , 32); myTOLED.pixelSet(56 , 32); myTOLED.pixelSet(57 , 32); myTOLED.pixelSet(61 , 32); myTOLED.pixelSet(65 , 32); myTOLED.pixelSet(68 , 32); myTOLED.pixelSet(72 , 32); myTOLED.pixelSet(73 , 32); myTOLED.pixelSet(76 , 32); myTOLED.pixelSet(80 , 32); myTOLED.pixelSet(83 , 32); myTOLED.pixelSet(84 , 32); myTOLED.pixelSet(85 , 32);
	////////////////
	myTOLED.pixelSet(85, 33);
	/////////////////
	myTOLED.pixelSet(85, 34);
	////////////////
	myTOLED.pixelSet(83, 35); myTOLED.pixelSet(84, 35); myTOLED.pixelSet(85, 35);
	////////////////
	myTOLED.pixelSet(87 , 28); myTOLED.pixelSet(90 , 28); myTOLED.pixelSet(93 , 28); myTOLED.pixelSet(96 , 28); myTOLED.pixelSet(97 , 28); myTOLED.pixelSet(98 , 28);
	///////////////
	myTOLED.pixelSet(87 , 29); myTOLED.pixelSet(90 , 29); myTOLED.pixelSet(92 , 29); myTOLED.pixelSet(94 , 29); myTOLED.pixelSet(98 , 29);
	///////////////
	myTOLED.pixelSet(87 , 30); myTOLED.pixelSet(90 , 30); myTOLED.pixelSet(92 , 30); myTOLED.pixelSet(93 , 30); myTOLED.pixelSet(94 , 30); myTOLED.pixelSet(97 , 30);
	//////////////
	myTOLED.pixelSet(87 , 31); myTOLED.pixelSet(90 , 31); myTOLED.pixelSet(92 , 31); myTOLED.pixelSet(96 , 31);
	////////////////
	myTOLED.pixelSet(88 , 32); myTOLED.pixelSet(89 , 32); myTOLED.pixelSet(90 , 32); myTOLED.pixelSet(93 , 32);myTOLED.pixelSet(94 , 32); myTOLED.pixelSet(96 , 32); myTOLED.pixelSet(97 , 32); myTOLED.pixelSet(98 , 32); 
	///////////////
	
	

}
