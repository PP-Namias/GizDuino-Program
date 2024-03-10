/*
BLINK SKETCH
*/
// LED_PIN is the givenname for digital pin 13.
int LED_PIN = 13;

// the setting up of pins.
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED_PIN, OUTPUT);     
}

// the loop is where your program runs repeatedly.
void loop() {
  digitalWrite(LED_PIN, HIGH);   // turn the LED ON (HIGH)
  delay(1000);               // wait for a second
  digitalWrite(LED_PIN, LOW);    // turn the LED OFF (LOW)
  delay(1000);               // wait for a second
}
