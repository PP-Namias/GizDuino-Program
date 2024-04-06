/*
   "GizDuino Starter kit"
   
   Potentiometer Sample code
  
  STEP 1: Construct the circuit of GizDuino Potentiometer.
  STEP 2: Connect the USB Cable to your computer.
  STEP 3: Open the Arduino IDE.
  STEP 4: Open the Potentiometer Sample code from GizDuino Starter kit code.
  STEP 5: Then, click Upload.
  

*/
//potPin is the givenname for analog pin 0;
int potPin = 0;
// led is the givenname for digital pin 13.
int LEDPin = 13;

// the setting up of pins.
void setup()
{
 // initialize the digital pin as an output.
 pinMode(LEDPin, OUTPUT);
  
}
// the loop is where your program runs repeatedly.
void loop()
{
  int potValue; // potValue is declared in this scope
  
  potValue = analogRead(potPin); // read analog pin 0 or potPin
  
  digitalWrite(LEDPin, LOW); // LED is OFF
  
  delay(potValue);          // it depends on the potValue readings
  
  digitalWrite(LEDPin, HIGH); // LED is ON
  
  delay(potValue);          //it depends on the potValue readings
  
  
}
