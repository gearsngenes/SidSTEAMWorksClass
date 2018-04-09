#include <Wire.h>
#include <SPI.h>
#include <Adafruit_CircuitPlayground.h>

int Banana1 = 3;
int Banana2=12;
int Banana3=10;

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();

}


void loop() {
  int P1 = CircuitPlayground.readCap(Banana1);
  int P2 = CircuitPlayground.readCap(Banana2);
  int P3 = CircuitPlayground.readCap(Banana3);
  if (P1 > 50) {
    CircuitPlayground.playTone(262,100);
    CircuitPlayground.strip.setPixelColor(1, 255, 0, 0);
    CircuitPlayground.strip.show();

  }
  if (P2 > 50) {
    CircuitPlayground.playTone(524,100);
    CircuitPlayground.strip.setPixelColor(6, 255, 0, 0);
    CircuitPlayground.strip.show();

  }
  if (P3 > 50) {
    CircuitPlayground.playTone(370,100);
    CircuitPlayground.strip.setPixelColor(8, 255, 0, 0);
    CircuitPlayground.strip.show();

  }
  else {
    CircuitPlayground.strip.setPixelColor(1, 0, 0, 0);
    CircuitPlayground.strip.setPixelColor(6, 0, 0, 0);
    CircuitPlayground.strip.setPixelColor(8, 0, 0, 0);
    CircuitPlayground.strip.show();
  }
  delay(100);
}
