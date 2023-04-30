//  in USER_SETUP_ID 206 >  #define TFT_RGB_ORDER TFT_RGB  // Colour order Red-Green-Blue
//  flash 16MB / ST7789  / 170 x 320 / 3,3 volt / 
// connector  GND , 3V , 43 , 44
// LILYGO T-DISPLAY S3
// ADC2 can not be used with WIFI enabled

#include "Arduino.h"
#include "TFT_eSPI.h"
#include "pinoutS3.h" 

TFT_eSPI lcd = TFT_eSPI();

void setup(void)
{   lcd.init();
    lcd.setSwapBytes(true);
    lcd.fillScreen(TFT_BLACK);    lcd.setRotation(4);    lcd.pushImage( 0 , 0 , 170 , 320 , pinoutS3 );  // no need for sprite
 }

void loop()
{
delay(1000);
} 


   
 
