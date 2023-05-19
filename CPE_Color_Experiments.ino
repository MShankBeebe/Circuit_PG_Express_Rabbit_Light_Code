///////////////////////////////////////////////////////////////////////////////
// A program to make a softly changing rainbow light.  I based my code on Carter Nelson's code Circuit Playground Bike Light - Round N Round
//https://learn.adafruit.com/circuit-playground-bike-light/basic-neopixel-animation
// 
// 

#include <Adafruit_CircuitPlayground.h>

#define RED              0xFF0000
#define PINK             0xFF00C4
#define PURPLE           0xCD00FF
#define DARK_PURPLE      0xA200FF
#define DARKER_PURPLE    0x8000FF
#define DARKEST_PURPLE   0x6600FF
#define LIGHTEST_BLUE    0x0077FF
#define LIGHTER_BLUE     0x004DFF
#define BLUE             0x3D05D7
#define DARKER_BLUE      0x0505D7
#define ALMOST_NEON_BLUE 0x009AFF
#define NEON_BLUE        0x00DEFF
#define GREEN            0x00FF44
#define YELLOW_GREEN     0x66FF00
#define YELLOW           0xEFFF00
#define ORANGE           0xFFB300
#define ORANGE_RED       0xFF5500

#define RATE          200         // normal
#define SLOWER_RATE   400         // slower

///////////////////////////////////////////////////////////////////////////////
void setup(  // Turn one on using (r,g,b) values
) {
  CircuitPlayground.begin();
  
  // Set Brightness
  CircuitPlayground.setBrightness(255);
}


///////////////////////////////////////////////////////////////////////////////
void loop() 
{
  // Calling the animation function with different colors and rates
  changeColor(RED, RATE);
  changeColor(PINK, RATE);
  changeColor(PURPLE, RATE);
  changeColor(DARK_PURPLE, RATE);
  changeColor(DARKER_PURPLE, RATE);
  changeColor(DARKEST_PURPLE, RATE);
  changeColor(BLUE, SLOWER_RATE);
  changeColor(LIGHTER_BLUE, RATE);
  changeColor(LIGHTEST_BLUE, RATE);
  changeColor(ALMOST_NEON_BLUE, RATE);
  changeColor(NEON_BLUE, RATE);
  changeColor(GREEN, RATE);
  changeColor(YELLOW_GREEN, RATE);
  changeColor(YELLOW, RATE);
  changeColor(ORANGE, RATE);
  changeColor(ORANGE_RED, RATE);
}

//animation function, changes one pixel at a time to the new color
 void changeColor(int color, int rate)
 {
    for (int pixel=0; pixel<10; pixel++) {
    
    CircuitPlayground.setPixelColor(pixel, color);
    
    // slows the spinning animation to the rate we pass to the function
    delay(rate);
    }
 }
