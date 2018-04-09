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
  
  Serial.print("Capsense #3: "); Serial.println(Pressure);//Outputs the relative value of the force acting on the pad
 
}
