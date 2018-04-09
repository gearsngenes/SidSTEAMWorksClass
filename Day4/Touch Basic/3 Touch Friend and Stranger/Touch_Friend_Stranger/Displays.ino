void fill(int r, int g, int b)                        //Flash spiral
{
  for(int j = 0; j < 10; j++)
  {
    CircuitPlayground.strip.setPixelColor(j, r, g, b);
    CircuitPlayground.strip.show();
  }
}
