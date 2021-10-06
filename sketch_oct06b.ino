#include <Adafruit_NeoPixel.h>

#define PIN 2   // input pin Neopixel is attached to

#define NUMPIXELS      12 // number of neopixels in strip

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 1000; // timing delay in milliseconds
int red;
int blue;
int green;
void setcolor (){
  red = random(0,255);
  green = random(0,255);
  blue = random(0,255);
}

void setup() {
  // Initialize the NeoPixel library.
  pixels.begin();
  pixels.setBrightness(50);
}

void loop() {
  setcolor();

  for (int i=0; i < NUMPIXELS +4; i++) {
    
      pixels.setPixelColor(i, pixels.Color(red, green, blue));
      pixels.show();
      pixels.setPixelColor(i-5, pixels.Color(0, 0, 0));
      pixels.show();
    
    delay(delayval);
  }
  pixels.setPixelColor(11, pixels.Color(0, 0, 0));
  pixels.show();
}



  
