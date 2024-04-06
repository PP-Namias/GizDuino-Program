/*

  "GizDuino Starter kit"
  
  BLINK Sample code
  
  STEP 1: Construct the circuit of GizDuino Blink.
  STEP 2: Connect the USB Cable to your computer.
  STEP 3: Open the Arduino IDE.
  STEP 4: Open the BLINK Sample code from GizDuino Starter kit code.
  STEP 5: Then, click Upload.
  
  This sample code is based on Arduino Example>Basic>Blink.
  
  It is a simple program turns on the LED in 1 second and turn off in 1 second.
 
  This example code is in the public domain.
 */
 

// led is the givenname for digital pin 13.
int led = 13;

// the setting up of pins.
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop is where your program runs repeatedly.
void loop() {
  digitalWrite(led, HIGH);   // turn the LED ON (HIGH)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED OFF (LOW)
  delay(1000);               // wait for a second
}
