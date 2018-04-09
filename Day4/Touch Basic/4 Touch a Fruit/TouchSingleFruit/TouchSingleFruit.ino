#include <Wire.h>
#include <SPI.h>
#include <Adafruit_CircuitPlayground.h>

int Banana = 3;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();

}


void loop() {
  int Pressure = CircuitPlayground.readCap(Banana); //detectst the touch a pad recieves
  if (Pressure > 50) {
    Serial.println("Banana: Touched");
    CircuitPlayground.playTone(262,300);
    CircuitPlayground.strip.setPixelColor(1, 255, 0, 0);
    CircuitPlayground.strip.show();

  }
  else {
    Serial.println("Banana: Untouched");
    CircuitPlayground.strip.setPixelColor(1, 0, 0, 0);
    CircuitPlayground.strip.show();
  }
  delay(100);
}
