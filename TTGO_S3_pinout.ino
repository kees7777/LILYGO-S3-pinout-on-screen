//  in USER_SETUP_ID 206 >  #define TFT_RGB_ORDER TFT_RGB  // Colour order Red-Green-Blue
//  flash 16MB / ST7789  / 170 x 320 / 3,3 volt / 
// connector  GND , 3V , 43 , 44
// LILYGO T-DISPLAY S3
// ADC2 gaat niet samen met WIFI


#include "Arduino.h"
#include "TFT_eSPI.h"
#include "pinoutS3.h" // pinout picture , lcd.setRotation(4); sprite.pushImage( 0,0,170 , 320 ,  pinoutS3   );

TFT_eSPI lcd = TFT_eSPI();
//TFT_eSprite sprite = TFT_eSprite(&lcd); // nr1 sprite actie 1
// TFT_eSprite sprite2 = TFT_eSprite(&lcd); // nr2 sprite actie 1

int deb=0;

int Mode=0;
#define adc_BATTERIJ  4  // 1/2 x Vsupp. = ± 3.3
#define BUTTON_LEFT   0 // BOOT BUTTON
#define BUTTON_RIGHT  14


void setup(void)
{
    pinMode(BUTTON_RIGHT,INPUT_PULLUP);

  //  Serial.begin(115200);
    lcd.init();
    lcd.setSwapBytes(true);
    lcd.fillScreen(TFT_BLACK);    lcd.setRotation(4);    lcd.pushImage( 0 , 0 , 170 , 320 , pinoutS3 );  // geen sprite nodig
    
    //sprite.createSprite(320, 170); //  lcd.setRotation(1) / lcd.setRotation(3);
   // sprite.createSprite(170, 320);  //  lcd.setRotation(2) / lcd.setRotation(4); // nr1 sprite actie 2
   
    // sprite.setTextDatum(3);
    // sprite.setSwapBytes(true);  // nr1 sprite actie 3
    // sprite.setFreeFont();

}

void loop()
{
  // if(digitalRead(BUTTON_RIGHT)==0){  if(deb==0)  {Mode++;  if(Mode==2)  Mode=0;  deb=1;  }}    else{deb=0;}
  // if(Mode==0){ }
  // if(Mode==1){ }

 // sprite.fillSprite(TFT_BLACK);
 // sprite.fillRoundRect(6,5,38,32,4,blue);
 // sprite.setTextColor(TFT_RED,TFT_WHITE);
 // sprite.pushImage( 0 , 0 , 170 , 320 , pinoutS3 );  // nr1 sprite actie 4

// for(int i=1;i<13;i++)
  // {  
  //   sprite.drawLine(            0 , pinoffset  +(i*pindd)     , 169    ,pinoffset  +(i*pindd)   ,TFT_WHITE);
  //   if (  strlen(adcl[i-1]) > 0  )
  //     { 
  //       sprite.fillRoundRect(       0 , pinoffset - 8 +(i*pindd) ,  30 , 16 , 3 , TFT_DARKGREEN );
  //     sprite.setTextColor(TFT_BLUE,TFT_DARKGREEN);
  //    sprite.setTextDatum(3);  sprite.drawString(adcl[i-1], 4   ,pinoffset +(i*pindd),1) ;
  //     }
  
  //  if (  strlen(adcr[i-1]) > 0  )
  //     {
  //       sprite.fillRoundRect(  169-50 , pinoffset - 8 +(i*pindd) ,  30 , 16 , 3 , TFT_DARKGREEN );
  //       sprite.setTextColor(TFT_RED);
  //   sprite.setTextDatum(5);  sprite.drawString(adcr[i-1], 169-4   ,pinoffset +(i*pindd),1) ;
  //     }

  //   sprite.setTextColor(TFT_WHITE); sprite.setTextDatum(5);  sprite.drawString(pinl[i-1], 80   ,pinoffset +(i*pindd),2) ;
  //   sprite.setTextColor(TFT_WHITE); sprite.setTextDatum(3);  sprite.drawString(pinr[i-1], 90   ,pinoffset +(i*pindd),2) ;

// }
  
 // sprite.pushSprite(0,0);  // nr1 sprite actie 5
 delay(800);
  } 


   
 
