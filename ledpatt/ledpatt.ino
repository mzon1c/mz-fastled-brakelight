#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 12

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 3
//#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
     
       FastLED.addLeds<WS2812B, DATA_PIN, BRG>(leds, NUM_LEDS);
     
}

void loop() {
int i=0;
int p1=digitalRead(4);
int p2=digitalRead(5);
int p3=digitalRead(6);
int p4=digitalRead(7);
int p5=digitalRead(8);
int p6=digitalRead(9);
int p7=digitalRead(10);
int i1=digitalRead(11);  //brake light
int i2=digitalRead(12);  //right indicator
int i3=digitalRead(13);  //left indicatior


//START OF PATTERN 1
if(p1 == HIGH)
{
  leds[0] = CRGB(70,0,0);
  leds[1] = CRGB(70,0,0);
  leds[2] = CRGB(70,0,0);
  leds[3] = CRGB(70,0,0);
  leds[4] = CRGB(70,0,0);
  leds[5] = CRGB(70,0,0);
  leds[6] = CRGB(70,0,0);
 /* leds[7] = CRGB(70,0,0);
  leds[8] = CRGB(70,0,0);
  leds[9] = CRGB(70,0,0);
  leds[10] = CRGB(70,0,0);
  leds[11] = CRGB(70,0,0);
*/
  FastLED.show();
  
  if(i1 == HIGH)
  {
   
  // Turn the LED on, then pause
  leds[0] = CRGB::Red;
  leds[1] = CRGB::Red;
  leds[2] = CRGB::Red;
  leds[3] = CRGB::Red;
  leds[4] = CRGB::Red;
  leds[5] = CRGB::Red;
   leds[6] = CRGB::Red;
    leds[7] = CRGB::Red;
     leds[8] = CRGB::Red;
      leds[9] = CRGB::Red;
       leds[10] = CRGB::Red;
        leds[11] = CRGB::Red;
         
  FastLED.show();
  delay(50);
 
   //Now turn the LED off, then pause

 leds[0] = CRGB(70,0,0);
  leds[1] = CRGB(70,0,0);
  leds[2] = CRGB(70,0,0);
  leds[3] = CRGB(70,0,0);
  leds[4] = CRGB(70,0,0);
  leds[5] = CRGB(70,0,0);
    leds[6] = CRGB(70,0,0);
  leds[7] = CRGB(70,0,0);
  leds[8] = CRGB(70,0,0);
  leds[9] = CRGB(70,0,0);
  leds[10] = CRGB(70,0,0);
  leds[11] = CRGB(70,0,0);

  FastLED.show();
  delay(50);
   

     
 

  
  }else if(i2 == HIGH)
    {

      for(i=3;i>=0;i--){
       
      
      
      leds[i] = CRGB(255,100,0);
      
      FastLED.show();
      delay(200);
      //leds[3] = CRGB(75,0,0);
      }
       for(i=3;i>=0;i--){
       
      
      
      leds[i] = CRGB(75,0,0);
      
      FastLED.show();
      delay(200);
      //leds[3] = CRGB(75,0,0);
      }
    
      /*leds[1] = CRGB(255,100,0);
      leds[2] = CRGB(255,100,0);
      leds[3] = CRGB(255,100,0);
      leds[4] = CRGB(70,0,0);
      leds[5] = CRGB(70,0,0);
        leds[6] = CRGB(70,0,0);
  leds[7] = CRGB(70,0,0);
  leds[8] = CRGB(70,0,0);
  leds[9] = CRGB(70,0,0);
  leds[10] = CRGB(70,0,0);
  leds[11] = CRGB(70,0,0);

      FastLED.show();
      */
      
    }else if(i3 == HIGH)
    {
      
       leds[0] = CRGB(70,0,0);
      leds[1] = CRGB(70,0,0);
      leds[2] = CRGB(70,0,0);
      leds[3] = CRGB(70,0,0);
      leds[4] = CRGB(70,0,0);
      leds[5] = CRGB(70,0,0);
        leds[6] = CRGB(70,0,0);
  leds[7] = CRGB(70,0,0);
  leds[8] = CRGB(255,100,0);
  leds[9] = CRGB(255,100,0);
  leds[10] = CRGB(255,100,0);
  leds[11] = CRGB(255,100,0);

      FastLED.show();
      
      
      }
  
  
  
  
  }//END OF PATTERN 1

  //START OF PATTER 2
 else if(p2 == HIGH)
 {
  
    leds[0] = CRGB(255,0,0); 
   leds[1] = CRGB(255,0,0);
   leds[2] = CRGB(255,0,0);
   leds[3] = CRGB(255,0,0);
   leds[4] = CRGB(255,0,0);
   leds[5] = CRGB(255,0,0);
     leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
   FastLED.show();
   delay(50);
   leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
   leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
   leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
     FastLED.show();
     delay(50);
          leds[0] = CRGB(255,0,0); 
   leds[1] = CRGB(255,0,0);
   leds[2] = CRGB(255,0,0);
   leds[3] = CRGB(255,0,0);
   leds[4] = CRGB(255,0,0);
   leds[5] = CRGB(255,0,0);
   leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
   FastLED.show();
   delay(50);
   leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
   leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
   leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
     FastLED.show();
     delay(50);
   leds[0] = CRGB(255,0,0); 
   leds[1] = CRGB(255,0,0);
   leds[2] = CRGB(255,0,0);
   leds[3] = CRGB(255,0,0);
   leds[4] = CRGB(255,0,0);
   leds[5] = CRGB(255,0,0);
   leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
   FastLED.show();
   delay(50);
   leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
   leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
   leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
     FastLED.show();
     delay(50);

   leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
   leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
   leds[6] = CRGB(0,0,255); 
   leds[7] = CRGB(0,0,255);
   leds[8] = CRGB(0,0,255);
   leds[9] = CRGB(0,0,255);
   leds[10] = CRGB(0,0,255);
   leds[11] = CRGB(0,0,255);
   FastLED.show();
   delay(50);
   leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
   leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
      leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
     FastLED.show();
     delay(50);
        leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
    leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
     leds[6] = CRGB(0,0,255); 
   leds[7] = CRGB(0,0,255);
   leds[8] = CRGB(0,0,255);
   leds[9] = CRGB(0,0,255);
   leds[10] = CRGB(0,0,255);
   leds[11] = CRGB(0,0,255);
   FastLED.show();
   delay(50);
   leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
   leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
      leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
     FastLED.show();
     delay(50);
        leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
    leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
     leds[6] = CRGB(0,0,255); 
   leds[7] = CRGB(0,0,255);
   leds[8] = CRGB(0,0,255);
   leds[9] = CRGB(0,0,255);
   leds[10] = CRGB(0,0,255);
   leds[11] = CRGB(0,0,255);
   FastLED.show();
   delay(50);
   leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
   leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
      leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
     FastLED.show();
     delay(50);//
  
  
  
  
  }//END OF PATTERN 2

  //START OF PATTERN 3
  else if(p3 == HIGH)
  {
            leds[0] = CRGB(255,100,0); 
   leds[1] = CRGB(255,100,0);
   leds[2] = CRGB(255,100,0);
 leds[3] = CRGB(255,100,0);
   leds[4] = CRGB(255,100,0);
   leds[5] = CRGB(255,100,0);
      leds[6] = CRGB(255,100,0);
         leds[7] = CRGB(255,100,0);
            leds[8] = CRGB(255,100,0);
               leds[9] = CRGB(255,100,0);
                  leds[10] = CRGB(255,100,0);
                     leds[11] = CRGB(255,100,0);
   FastLED.show();
   delay(300);
   leds[0] = CRGB(70,0,0); 
   leds[1] = CRGB(70,0,0);
   leds[2] = CRGB(70,0,0);
   leds[3] = CRGB(70,0,0);
   leds[4] = CRGB(70,0,0);
   leds[5] = CRGB(70,0,0);
   leds[6] = CRGB(70,0,0);
   leds[7] = CRGB(70,0,0);
   leds[8] = CRGB(70,0,0);
   leds[9] = CRGB(70,0,0);
   leds[10] = CRGB(70,0,0);
   leds[11] = CRGB(70,0,0);
     FastLED.show();
     delay(300);//
  
    
    
    
    }


  //END OF PATTERN3

    //START OF PATTERN 4
  else if(p4 == HIGH)
  {
            leds[0] = CRGB(255,255,255); 
   leds[1] = CRGB(255,255,255);
   leds[2] = CRGB(255,255,255);
 leds[3] = CRGB(255,255,255);
   leds[4] = CRGB(255,255,255);
   leds[5] = CRGB(255,255,255);
     leds[6] = CRGB(255,255,255);
   leds[7] = CRGB(255,255,255);
 leds[8] = CRGB(255,255,255);
   leds[9] = CRGB(255,255,255);
   leds[10] = CRGB(255,255,255);
     leds[11] = CRGB(255,255,255);
   FastLED.show();
   delay(50);
    leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
   leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
    leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
     FastLED.show();
     delay(50);//
       leds[0] = CRGB(255,255,255); 
   leds[1] = CRGB(255,255,255);
   leds[2] = CRGB(255,255,255);
 leds[3] = CRGB(255,255,255);
   leds[4] = CRGB(255,255,255);
   leds[5] = CRGB(255,255,255);
        leds[6] = CRGB(255,255,255);
   leds[7] = CRGB(255,255,255);
 leds[8] = CRGB(255,255,255);
   leds[9] = CRGB(255,255,255);
   leds[10] = CRGB(255,255,255);
     leds[11] = CRGB(255,255,255);
     FastLED.show();
     delay(50);//
       leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
   leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
    leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
     FastLED.show();
     delay(50);//
         leds[0] = CRGB(255,255,255); 
   leds[1] = CRGB(255,255,255);
   leds[2] = CRGB(255,255,255);
 leds[3] = CRGB(255,255,255);
   leds[4] = CRGB(255,255,255);
   leds[5] = CRGB(255,255,255);
        leds[6] = CRGB(255,255,255);
   leds[7] = CRGB(255,255,255);
 leds[8] = CRGB(255,255,255);
   leds[9] = CRGB(255,255,255);
   leds[10] = CRGB(255,255,255);
     leds[11] = CRGB(255,255,255);
    FastLED.show();
     delay(50);//
         leds[0] = CRGB(0,0,0); 
   leds[1] = CRGB(0,0,0);
   leds[2] = CRGB(0,0,0);
   leds[3] = CRGB(0,0,0);
   leds[4] = CRGB(0,0,0);
   leds[5] = CRGB(0,0,0);
         leds[6] = CRGB(0,0,0); 
   leds[7] = CRGB(0,0,0);
   leds[8] = CRGB(0,0,0);
   leds[9] = CRGB(0,0,0);
   leds[10] = CRGB(0,0,0);
   leds[11] = CRGB(0,0,0);
     FastLED.show();
     delay(300);//
    
    
    
    }


  //END OF PATTERN4


  
}

