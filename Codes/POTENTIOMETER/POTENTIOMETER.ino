/*
POTENTIOMETER SKETCH

*/
//POT_PIN is the givenname for analog pin 0;
int POT_PIN = 0;
// LED_PIN is the givenname for digital pin 13.
int LED_PIN = 13;

// the setting up of pins.
void setup()
{
 // initialize the digital pin as an output.
 pinMode(LED_PIN, OUTPUT);
  
}
// the loop is where your program runs repeatedly.
void loop()
{
  int POT_VALUE; // potValue is declared in this scope
  
  POT_VALUE = analogRead(POT_PIN); // read analog pin 0 or potPin
  
  digitalWrite(LED_PIN, LOW); // LED is OFF
  
  delay(POT_VALUE);          // it depends on the potValue readings
  
  digitalWrite(LED_PIN, HIGH); // LED is ON

  delay(POT_VALUE);          //it depends on the potValue readings
  
  
}
