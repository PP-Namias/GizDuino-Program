/*

  "GizDuino Starter kit"
  
  RELAY Sample code
  
  STEP 1: Construct the circuit of GizDuino Relay.
  STEP 2: Connect the USB Cable to your computer.
  STEP 3: Open the Arduino IDE.
  STEP 4: Open the RELAY Sample code from GizDuino Starter kit code.
  STEP 5: Then, click Upload.
  
  It is a simple program turns on the LED in 1 second and turn off in 1 second
  using Ea2-4.5NU relay with gizDuino MCU board.
 
  This example code is in the public domain.
 */

int relay = 3; // relay is the givenname for digital pin 3.
int led = 4; // led is the givenname for digital pin 4.

void setup(){
  // initialize the digital pin as an output.
  pinMode(relay, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(led, HIGH); // led assigned in Logic high.
  
  
}
void loop(){
  digitalWrite(led, HIGH); // led assigned in Logic high.
  digitalWrite(relay, HIGH); // turn the relay ON
  delay(1000); //delay in 1sec
  digitalWrite(relay, LOW); // turn the relay OFF
  delay(1000);
  
}
