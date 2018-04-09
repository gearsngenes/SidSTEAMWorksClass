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
  if(Pressure>50&&Pressure<300){
    fill(125,255,0);
    Serial.println("Friend Incoming!");
  }
  else if(Pressure>=300&&Pressure<1000){
    fill(255,0,0);
    Serial.println("STRANGER DANGER!!");
  }
  else{
    fill(0,0,0);
  }
  delay(100);
}
