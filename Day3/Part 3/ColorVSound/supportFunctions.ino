void spiralRed()
{
  for (int i = 0; i <= 10; i++) {
    CircuitPlayground.strip.setPixelColor((i - 1) % 10, 0, 0, 0);
    CircuitPlayground.strip.setPixelColor(i % 10, 255, 0, 0);
    CircuitPlayground.strip.show();
    delay(50);
  }
  CircuitPlayground.strip.setPixelColor(0, 0, 0, 0);
  CircuitPlayground.strip.show();
}

void Song()
{

  CircuitPlayground.playTone(261, 300);
  CircuitPlayground.playTone(294, 300);
  CircuitPlayground.playTone(330, 300);
  CircuitPlayground.playTone(349, 300);
  CircuitPlayground.playTone(392, 300);
  CircuitPlayground.playTone(440, 300);
  CircuitPlayground.playTone(494, 300);
  CircuitPlayground.playTone(523, 300);
}


