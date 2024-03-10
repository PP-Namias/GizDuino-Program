/*
RELAY SKETCH

*/

int RELAY_PIN = 3; // RELAY_PIN is the givenname for digital pin 3.
int LED_INDICATOR = 4; // LED_INDICATOR is the givenname for digital pin 4.

void setup(){
  // initialize the digital pin as an output.
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(LED_INDICATOR, OUTPUT);
  pinMode(LED_INDICATOR, HIGH); // LED_INDICATOR assigned in Logic high.
  
  
}
void loop(){
  digitalWrite(LED_INDICATOR, HIGH); // LED_INDICATOR assigned in Logic high.
  digitalWrite(RELAY_PIN, HIGH); // turn the relay ON
  delay(1000); //delay in 1sec
  digitalWrite(RELAY_PIN, LOW); // turn the relay OFF
  delay(1000);
  
}
