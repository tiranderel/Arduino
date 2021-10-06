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
  for (int j = 255; j>0; j=j-90){
    for (int i = 0; i< NUMPIXELS; i++){
      pixels.setPixelColor(i, pixels.Color(j, 0, 50));
      pixels.show();
      delay(delayval);
     
    }
    //for (int i = 0; i< NUMPIXELS; i++){
    //pixels.setPixelColor(i, pixels.Color(0, 0, 0));
      //pixels.show();
    //delay(delayval);
    //}
  }
}
  
