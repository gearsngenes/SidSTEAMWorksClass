int LEDpin=13;
int t1=0;
int t2=1;
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LEDpin, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  //define your time functions
  t1=t1+1     //Time increases linearly
  t2=5*t2     //Time increases Geometrically
  Serial.println("LED on");
  digitalWrite(LEDpin, HIGH);
  delay(/*Function of time*/);              
  Serial.println("LED off");
  digitalWrite(LEDpin, LOW);
  delay(/*Function of time*/);
}
