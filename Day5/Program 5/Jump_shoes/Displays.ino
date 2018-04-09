void redSpark(){
  for(int i=0;i<=10; i++){
    CircuitPlayground.strip.setPixelColor(i,255,0,0);
    CircuitPlayground.strip.show();
  }
}

