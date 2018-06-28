#include "FastLED.h"
// How many leds in your strip?
#define NUM_LEDS 12
#define DATA_PIN 2
CRGB leds[NUM_LEDS];
int i;
void setup() { 
     
  FastLED.addLeds<WS2812B, DATA_PIN, BRG>(leds, NUM_LEDS);   
  loadpat2();
     
}

void loop() {
int p1=digitalRead(3);
int p2=digitalRead(4);
int p3=digitalRead(5);
int p4=digitalRead(6);
int p5=digitalRead(7);
int p6=digitalRead(8);
int p7=digitalRead(9);
int i1=digitalRead(11);  //brake light
int i2=digitalRead(12);  //right indicator
int i3=digitalRead(13);  //left indicatior
int i4=digitalRead(10); //park light



//START OF PATTERN 1
if(p1 == HIGH)
{

  if(i4 == HIGH)
  {
  for(i=0;i<12;i++)
  leds[i] = CRGB(10,0,0);
  FastLED.show();
  }
  else 
  {
  for(i=0;i<12;i++)
  leds[i] = CRGB(0,0,0);
  FastLED.show();   
  }
  
  if(i1 == HIGH && i2 == LOW && i3 == LOW)
  {
  for(i=0;i<12;i++)
  leds[i] = CRGB::Red;
  FastLED.show(); 
  }else if(i2 == HIGH && i1 == LOW && i3 == LOW)
    {
      for(i=0;i<6;i++)
       leds[i] = CRGB(255,100,0);
        FastLED.show();

    }else if(i3 == HIGH && i1 == LOW && i2 == LOW)
    {  
      for(i=6;i<12;i++)
 leds[i] = CRGB(255,100,0);
      FastLED.show();   
      }else if(i1 == HIGH && i2 == HIGH)
      {    
  for(i=6;i<12;i++)
  leds[i] = CRGB::Red;
    for(i=0;i<6;i++)
  leds[i] = CRGB(255,100,0);

  FastLED.show(); 
 }
   else if(i1 == HIGH && i3 == HIGH)
      {
    
  for(i=0;i<6;i++)
  leds[i] = CRGB::Red;
  FastLED.show(); 
   
 for(i=6;i<12;i++)
  leds[i] = CRGB(255,100,0);
     FastLED.show();
  
        }
  
  }//END OF PATTERN 1

  //START OF PATTER 2
 else if(p2 == HIGH)
 {

  
  pattern2();
  
  
  
  }//END OF PATTERN 2

  //START OF PATTERN 3
  else if(p3 == HIGH)
  {
            
  
    pattern3();
    
    
    }


  //END OF PATTERN3

    //START OF PATTERN 4
  else if(p4 == HIGH)
  {
   
   pattern4(); 
    
    }


  //END OF PATTERN4


  
}

void loadpat2() //loading pattern2
{
  int i,j,k,l;
  
   for(i=0;i<12;i++)
  leds[i] = (0,0,0);
     FastLED.show();
  delay(100);

  for(i=0,j=11,k=5,l=6;i<3;i++,j--,k--,l++)
  {
    leds[i]= CRGB::Red;
    leds[j]= CRGB::Red;
    leds[k]= CRGB::Red;
    leds[l]= CRGB::Red;
    FastLED.show();
  delay(75);
    leds[i]=(0,0,0);
    leds[j]=(0,0,0);
    leds[k]=(0,0,0);
    leds[l]=(0,0,0);
  }
  
   for(i=2,j=3,k=8,l=9;i>=0;i--,j++,k--,l++)
  {
    leds[i]= CRGB::Red;
    leds[j]= CRGB::Red;
    leds[k]= CRGB::Red;
    leds[l]= CRGB::Red;
    FastLED.show();
  delay(75);
    leds[i]=(0,0,0);
    leds[j]=(0,0,0);
    leds[k]=(0,0,0);
    leds[l]=(0,0,0);
  }
   FastLED.show();
  delay(200);
  
}

void pattern2() // PATTERN2 ~ COP LIGHT
{
int j;
   for(j=0;j<4;j++)
  {
   for(i=0;i<6;i++)
   { leds[i] = CRGB(255,0,0); 
     leds[i+6] = CRGB(0,0,0); 
     }
   FastLED.show();
   delay(50);
   for(i=0;i<12;i++)
   leds[i] = CRGB(0,0,0); 
   
   FastLED.show();
     delay(50);
     
  }    

  for(j=0;j<4;j++)
  {
   for(i=0;i<6;i++)
   {
   leds[i] = CRGB(0,0,0); 
   
   leds[i+6] = CRGB(0,0,255); 
   }
   FastLED.show();
   delay(50);

   for(i=0;i<12;i++)
   leds[i] = CRGB(0,0,0); 
  
     FastLED.show();
     delay(50);
  }
  
  
  }

void pattern3() // PATTER3 ~ HAZARD
{
int i;
  for(i=0;i<12;i++)
            leds[i] = CRGB(255,100,0); 
  
   FastLED.show();
   delay(350);
  for(i=0;i<12;i++)
   leds[i] = CRGB(0,0,0); 
  
     FastLED.show();
     delay(300);//
     
}

void pattern4() // PATTERN4 ~ STROBE
{
int j;
   for(j=0;j<3;j++)
    {
    for(i=0;i<12;i++)
    leds[i] = CRGB(255,255,255); 
   FastLED.show();
   delay(50);
    for(i=0;i<12;i++)
    leds[i] = CRGB(0,0,0); 
     FastLED.show();
     delay(50);//
    }
     delay(300);//
    
  
  }

