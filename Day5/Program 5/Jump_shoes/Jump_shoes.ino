#include <Adafruit_CircuitPlayground.h>
#include <Wire.h>
#include <SPI.h>

float x,y,z; //values to measure acceleration in 3 dimensions
float total=0.0;
void setup() {
    CircuitPlayground.begin();
    Serial.begin(9600);
}

void loop() {
  if(total>10.0){ //IF the acceleration is greater than the acceleration due to gravity, turn pixel red
    redSpark();
  }
  else{

  }
  getAcc();         //collect magnitude of acceleration

  delay(500);
}
