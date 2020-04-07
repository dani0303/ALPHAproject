//////Created and designed by
/////*Daniel Rodriguez*//////
/////Open soure from Sparkfun


#include "BluetoothSerial.h"

#include "HyperDisplay_UG2856KLBAG01.h"   
#define SERIAL_PORT Serial  
#define WIRE_PORT Wire      

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

String message = "";

String command = "";

char incomingChar;

char incomingCmd;

BluetoothSerial SerialBT;



UG2856KLBAG01_I2C myTOLED; 
uint8_t color = 0x01;
uint8_t noColor = 0x00;

void setup() {
    
    Serial.begin(115200);
    SerialBT.begin("project Alpha"); //Bluetooth device name
    Serial.println("The device started, now you can pair it with bluetooth!");

    Serial.begin(9600);
    Serial.println(F("Example4_Text: Transparent Graphical OLED"));
    WIRE_PORT.begin();
    myTOLED.begin(WIRE_PORT, false, SSD1309_ARD_UNUSED_PIN);  
    Wire.setClock(400000);
}

void loop() {
  
  main_home();
  delay(500);
  app_1_communicater();
  delay(500);
  app_2_communicater();
  

  
  
}

////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////******info app

void repeater (void) {
  int counter = 10;
  while(1 < counter) {
    main_home();
    delay(500);
    app_1_communicater();
    delay(500);
    app_2_communicater();
  }
  counter++;
}


void app_center1( void ){

    uint8_t x0      = 0;
    uint8_t y0      = 0;
    uint8_t x1      = 0;
    uint8_t y1      = 0;
    uint8_t r       = 0;

    x0 = 5;
    y0 = 5;
    myTOLED.pixelSet(x0, y0);  

    x0 = 35;//2
    y0 = 33;
    x1 = 46;//2
    y1 = 53;
    myTOLED.rectangleSet(x0, y0, x1, y1);               
    //myTOLED.rectangleSet(x0+2, y0+2, x1-2, y1-2, true);


    myTOLED.pixelSet(40, 37); myTOLED.pixelSet(41, 37);
    myTOLED.pixelSet(40, 38); myTOLED.pixelSet(41, 38);
    myTOLED.pixelSet(40, 40); myTOLED.pixelSet(41, 40);
    myTOLED.pixelSet(40, 41); myTOLED.pixelSet(41, 41);
    myTOLED.pixelSet(40, 42); myTOLED.pixelSet(41, 42);
    myTOLED.pixelSet(40, 43); myTOLED.pixelSet(41, 43);
    myTOLED.pixelSet(40, 44); myTOLED.pixelSet(41, 44);
    myTOLED.pixelSet(40, 45); myTOLED.pixelSet(41, 45);
    myTOLED.pixelSet(40, 46); myTOLED.pixelSet(41, 46);
    myTOLED.pixelSet(40, 47); myTOLED.pixelSet(41, 47);
    myTOLED.pixelSet(40, 48); myTOLED.pixelSet(41, 48); myTOLED.pixelSet(42, 48); myTOLED.pixelSet(43, 48);
}

///////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////*****art app

void app_center2( void ){
    
    uint8_t x0      = 0;
    uint8_t y0      = 0;
    uint8_t x1      = 0;
    uint8_t y1      = 0;
    uint8_t r       = 0;

    x0 = 5;
    y0 = 5;
    myTOLED.pixelSet(x0, y0);  

    x0 = 50;
    y0 = 33;
    x1 = 61;
    y1 = 53;
    myTOLED.rectangleSet(x0, y0, x1, y1);               
    //myTOLED.rectangleSet(x0+2, y0+2, x1-2, y1-2, true);

    //myTOLED.pixelSet(51, 36); myTOLED.pixelSet(52, 36); 
    //myTOLED.pixelSet(53, 37);
    //myTOLED.pixelSet(52, 38);
    myTOLED.pixelSet(55, 39);
    myTOLED.pixelSet(55, 40);
    myTOLED.pixelSet(55, 41);
    myTOLED.pixelSet(55, 42);
    myTOLED.pixelSet(55, 43);
    myTOLED.pixelSet(55, 44);
    myTOLED.pixelSet(56, 45);
    myTOLED.pixelSet(57, 46);
    myTOLED.pixelSet(57, 47);
    myTOLED.pixelSet(57, 48);
    myTOLED.pixelSet(58, 49);
    myTOLED.pixelSet(59, 49);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////************picture app

void app_center3( void ){

    uint8_t x0      = 0;
    uint8_t y0      = 0;
    uint8_t x1      = 0;
    uint8_t y1      = 0;
    uint8_t r       = 0;

    x0 = 5;
    y0 = 5;
    myTOLED.pixelSet(x0, y0);  

    x0 = 65;
    y0 = 33;
    x1 = 76;
    y1 = 53;
    myTOLED.rectangleSet(x0, y0, x1, y1);               
    //myTOLED.rectangleSet(x0+2, y0+2, x1-2, y1-2, true); 

    myTOLED.pixelSet(66, 40); myTOLED.pixelSet(67, 40); myTOLED.pixelSet(68, 40);//////////////lines 134-139 are for the letter "P"
    myTOLED.pixelSet(69, 41); myTOLED.pixelSet(69, 42);
    myTOLED.pixelSet(68, 43); myTOLED.pixelSet(67, 43); myTOLED.pixelSet(66, 43);
    myTOLED.pixelSet(66, 44);
    myTOLED.pixelSet(66, 45);
    myTOLED.pixelSet(66, 46);
    
    myTOLED.pixelSet(71, 40);/////////////////////////lines 141-147 are for the letter "I"
    myTOLED.pixelSet(71, 41);
    myTOLED.pixelSet(71, 42);
    myTOLED.pixelSet(71, 43);
    myTOLED.pixelSet(71, 44);
    myTOLED.pixelSet(71, 45);
    myTOLED.pixelSet(71, 46);
    
    myTOLED.pixelSet(73, 40); myTOLED.pixelSet(74, 40); myTOLED.pixelSet(75, 40);///////////////lines 149-151 are for the letter "C"
    myTOLED.pixelSet(73, 41); myTOLED.pixelSet(73, 42); myTOLED.pixelSet(73, 43); myTOLED.pixelSet(73, 44); myTOLED.pixelSet(73, 45); myTOLED.pixelSet(73, 46);
    myTOLED.pixelSet(74, 46); myTOLED.pixelSet(75, 46);
}

/////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////***************games app

void app_center4( void ){

    uint8_t x0      = 0;
    uint8_t y0      = 0;
    uint8_t x1      = 0;
    uint8_t y1      = 0;
    uint8_t r       = 0;

    x0 = 5;
    y0 = 5;
    myTOLED.pixelSet(x0, y0);  

    x0 = 80;
    y0 = 33;
    x1 = 91;
    y1 = 53;
    myTOLED.rectangleSet(x0, y0, x1, y1);               
    //myTOLED.rectangleSet(x0+2, y0+2, x1-2, y1-2, true);

    myTOLED.pixelSet(82, 43); myTOLED.pixelSet(83, 43); myTOLED.pixelSet(84, 43); myTOLED.pixelSet(85, 43); myTOLED.pixelSet(86, 43); myTOLED.pixelSet(87, 43); myTOLED.pixelSet(88, 43); myTOLED.pixelSet(89, 43);
    myTOLED.pixelSet(82, 44); myTOLED.pixelSet(89, 44);
    myTOLED.pixelSet(82, 45); myTOLED.pixelSet(87, 45); myTOLED.pixelSet(89, 45);
    myTOLED.pixelSet(82, 46); myTOLED.pixelSet(85, 46); myTOLED.pixelSet(89, 46);
    myTOLED.pixelSet(82, 47); myTOLED.pixelSet(84, 47); myTOLED.pixelSet(89, 47); myTOLED.pixelSet(86, 47);
    myTOLED.pixelSet(82, 48); myTOLED.pixelSet(85, 48); myTOLED.pixelSet(87, 48); myTOLED.pixelSet(89, 48);
    myTOLED.pixelSet(82, 49); myTOLED.pixelSet(89, 49);
    myTOLED.pixelSet(82, 50); myTOLED.pixelSet(83, 50); myTOLED.pixelSet(84, 50); myTOLED.pixelSet(85, 50); myTOLED.pixelSet(89, 50); myTOLED.pixelSet(86, 50); myTOLED.pixelSet(87, 50); myTOLED.pixelSet(88, 50); myTOLED.pixelSet(89, 50);
}

///////////////////////////////////////////////////////////////////////////

void main_home( void )
{
  app_center1();
  app_center2();
  app_center3();
  app_center4();
  
}


void app_center1_selector ( void ) {

    uint8_t x2      = 0;
    uint8_t y2      = 0;
    uint8_t x3      = 0;
    uint8_t y3      = 0;
    //uint8_t r       = 0;

    x2 = 35;
    y2 = 55; 
    x3 = 47;
    y3 = 55;
    myTOLED.lineSet(x2, y2, x3, y3);////////////////underlines when you open info
   ////////////////each value is added by 4****

}

void app_center2_selector( void ) {

    

    uint8_t x4      = 0;
    uint8_t y4      = 0;
    uint8_t x5      = 0;
    uint8_t y5      = 0;
    //uint8_t r       = 0;

    x4 = 51;
    y4 = 55;
    x5 = 61;
    y5 = 55;

    myTOLED.lineSet(x4, y4, x5, y5);///////////////underlines art app to open
    ////////////////each value is added by 4*******

}

void app_center3_selector ( void ) {

    
    uint8_t x6      = 0;
    uint8_t y6      = 0;
    uint8_t x7      = 0;
    uint8_t y7      = 0;
    //uint8_t r       = 0;

    x6 = 65;  
    y6 = 55;
    x7 = 76;
    y7 = 55;

    myTOLED.lineSet(x6, y6, x7, y7);////////////////////////underlines picture app to open
    //////////////////////each value is added by 4***********

}

void app_center4_selector( void ) {

    
    uint8_t x8      = 0;
    uint8_t y8      = 0;
    uint8_t x9      = 0;
    uint8_t y9      = 0;
    //uint8_t r       = 0;

    x8 = 80;
    y8 = 55;
    x9 = 91;
    y9 = 55;

    myTOLED.lineSet(x8, y8, x9, y9);

}

void lineTest( void )
{
  myTOLED.clearDisplay();

  for(hd_hw_extent_t indi = 0; indi < myTOLED.xExt; indi+=5)
  {
    myTOLED.line(0,0,indi,myTOLED.yExt-1,1,(color_t)&color);
    delay(10);
  }
  
  for(hd_hw_extent_t indi = 0; indi < myTOLED.yExt; indi+=5)
  {
    myTOLED.line(0,myTOLED.yExt-1,myTOLED.xExt-1,myTOLED.yExt-indi-1,1,(color_t)&color);
    delay(10);
  }

  for(hd_hw_extent_t indi = 0; indi < myTOLED.xExt; indi+=5)
  {
    myTOLED.line(myTOLED.xExt-1,myTOLED.yExt-1,myTOLED.xExt-indi-1,0,1,(color_t)&color);
    delay(10);
  }

  for(hd_hw_extent_t indi = 0; indi < myTOLED.yExt; indi+=5)
  {
    myTOLED.line(myTOLED.xExt-1,0,0,indi,1,(color_t)&color);
  }
}

void rectTest ( void ) {

   myTOLED.clearDisplay();

  for(uint8_t indi = 0; indi < myTOLED.yExt/2; indi+=1)
  {
    myTOLED.rectangle(myTOLED.xExt/2-1-indi, myTOLED.yExt/2-1-indi, myTOLED.xExt/2+1+indi, myTOLED.yExt/2+1+indi, false, (color_t)&color);
    delay(50);
  }

  for(uint8_t indi = 0; indi < myTOLED.yExt/2; indi+=1)
  {
    myTOLED.rectangle(myTOLED.xExt/2-1-indi, myTOLED.yExt/2-1-indi, myTOLED.xExt/2+1+indi, myTOLED.yExt/2+1+indi, false, (color_t)&noColor);
    delay(50);
  }

  for(uint8_t indi = 0; indi < myTOLED.yExt/2; indi+=1)
  {
    myTOLED.rectangle(myTOLED.xExt/2-1-indi, myTOLED.yExt/2-1-indi, myTOLED.xExt/2+1+indi, myTOLED.yExt/2+1+indi, false, (color_t)&color);
    delay(50);
  }

}

void circleTest( void ) {

   myTOLED.clearDisplay();
  
  for(uint8_t indi = 0; indi < (myTOLED.xExt/2 - 1); indi++)
  {
    myTOLED.circle((myTOLED.xExt/2 - 1),(myTOLED.yExt/2 - 1), indi, false, (color_t)&color);
    delay(10);
  }
  myTOLED.circle((myTOLED.xExt/2 - 1),(myTOLED.yExt/2 - 1), myTOLED.xExt/2, true, (color_t)&color);
}

void info_page ( void ) {
  
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
  myTOLED.pixelSet(37 , 29); myTOLED.pixelSet(40 , 29); myTOLED.pixelSet(43 , 29); myTOLED.pixelSet(44 , 29); myTOLED.pixelSet(45 , 29); myTOLED.pixelSet(47 , 29); myTOLED.pixelSet(48 , 29); myTOLED.pixelSet(50 , 29); myTOLED.pixelSet(52 , 29); myTOLED.pixelSet(54 , 29); myTOLED.pixelSet(56 , 29); myTOLED.pixelSet(58 , 29);   myTOLED.pixelSet(61 , 29); myTOLED.pixelSet(64 , 29); myTOLED.pixelSet(68 , 29); myTOLED.pixelSet(72 , 29); myTOLED.pixelSet(73 , 29); myTOLED.pixelSet(74 , 29); myTOLED.pixelSet(76 , 29); myTOLED.pixelSet(77 , 29); myTOLED.pixelSet(82 , 29); myTOLED.pixelSet(85 , 29);
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


  

void app_1_communicater ( void ) {
  
   int counter = 0;

  while(counter <= 100) {

     if (SerialBT.available()) {
      counter + 104;
      char incomingChar = SerialBT.read();
      if (incomingChar != '\n') {
        message += String(incomingChar);
      }
      else {
        message = "";
      }
      Serial.write(incomingChar);  
    }

    if (message == "info") {
        counter+100;
        Serial.println("yo");
        app_center1_selector();
        delay(750);

        for(uint8_t indi = 255; indi > 1; indi--) {
          myTOLED.setContrastControl(indi);
          delay(5);
        }
        myTOLED.setContrastControl(0);
        myTOLED.clearDisplay();
        myTOLED.setContrastControl(128);
        info_page();
        exit();
      }
  }
}


void app_2_communicater ( void ) {
  int counter = 0;
  while(counter <= 100) {
     if (SerialBT.available()) {
      char incomingChar = SerialBT.read();
      if (incomingChar != '\n') {
        message += String(incomingChar);
      }
      else {
        message = "";
      }
      Serial.write(incomingChar);  
    }
    if (message == "art") {
        counter+100;
        Serial.println("yo");
        app_center2_selector();
        delay(750);

        for(uint8_t indi = 255; indi > 1; indi--) {
          myTOLED.setContrastControl(indi);
          delay(5);
        }
        myTOLED.setContrastControl(0);
        myTOLED.clearDisplay();
        myTOLED.setContrastControl(128);
        delay(500);
        lineTest();
        delay(500);
        rectTest();
        delay(500);
        circleTest();
        delay(500);
      }
    }
}


void exit ( void ) {

  int counter2 = 0;
  while(counter2 <= 100) {
    if (SerialBT.available()) {
    char incomingCmd = SerialBT.read();
      if (incomingCmd != '\n') {
        command += String(incomingCmd);
      }
      else {
        command = "";
      }
      Serial.write(incomingCmd);
    }
    if (command == "back") {
      //counter2+101;/////////breaks out of loop
      for(uint8_t indi=255; indi > 1; indi--) {
        myTOLED.setContrastControl(indi);
        delay(5);
      }

      myTOLED.setContrastControl(0);
      myTOLED.clearDisplay();
      myTOLED.setContrastControl(128);
      repeater();
    }
  }
}

void exit_a ( void ) {
  int counter3 = 0;
  while(counter3 <= 100) {
    if (SerialBT.available()) {
    char incomingCmd = SerialBT.read();
      if (incomingCmd != '\n') {
        command += String(incomingCmd);
      }
      else {
        command = "";
      }
      Serial.write(incomingCmd);
    }
    if (command == "back") {
      counter3+101;/////////breaks out of loop
      for(uint8_t indi=255; indi > 1; indi--) {
        myTOLED.setContrastControl(indi);
        delay(5);
      }

      myTOLED.setContrastControl(0);
      myTOLED.clearDisplay();
      myTOLED.setContrastControl(128);
      main_home();
      delay(500);
      app_1_communicater();
      delay(500);
      app_2_communicater();
    }
  }
}

  
 






/////////////////////////////////////////////////////////////////////////////////

