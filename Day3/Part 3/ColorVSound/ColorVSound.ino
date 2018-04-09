#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>
void setup() {
CircuitPlayground.begin();
Serial.begin(9600);
}

void loop() {
  if(CircuitPlayground.leftButton()&&!CircuitPlayground.rightButton())
  {
   spiralRed();
   Serial.println("Left");
  }
  
  else if(CircuitPlayground.rightButton()&&!CircuitPlayground.leftButton())
  {
    Song();  
    Serial.println("Right");
  }
}


