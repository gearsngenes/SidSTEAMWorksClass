int LEDpin=13;
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  Serial.println("LED on");
  digitalWrite(LEDpin, HIGH);
  delay(1000);              
  Serial.println("LED off");
  digitalWrite(LEDpin, LOW);
  delay(1000);
}
