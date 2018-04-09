#include <Wire.h>
#include <SPI.h>
#include <Adafruit_CircuitPlayground.h>

int touchpad=3;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
  
}


void loop() {
  int Pressure=CircuitPlayground.readCap(touchpad);//detectst the touch a pad recieves
  if(Pressure>50){
    Serial.println("Capsense #3: Touched");
   CircuitPlayground.strip.setPixelColor(1,255,0,0);
  CircuitPlayground.strip.show();
    
  }
  else{
    Serial.println("Capsense #3: Untouched");
    CircuitPlayground.strip.setPixelColor(1,0,0,0);
   CircuitPlayground.strip.show();
  }
  delay(100);
}
