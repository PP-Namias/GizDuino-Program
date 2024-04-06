/*
 
  "GizDuino Starter kit"
  
  Shift Register Sample code
  
  STEP 1: Construct the circuit of GizDuino Shift Register.
  STEP 2: Connect the USB Cable to your computer.
  STEP 3: Open the Arduino IDE.
  STEP 4: Open the Shift Register Sample code from GizDuino Starter kit code.
  STEP 5: Then, click Upload.
  
  code by: yan_g http out
  modified date: June 25, 2014

  
 */

//givenname for digital pins.
const int lthPin = 8;
const int clkPin = 12;
const int datPin = 11;

//a byte is 8 bits/LED)
byte BTS = 0;
// the setting up of pins.
void setup() {
  // initialize the digital pin as an output.
  pinMode(lthPin, OUTPUT);
  pinMode(datPin, OUTPUT);  
  pinMode(clkPin, OUTPUT);
}

void loop() {
  for (int j = 0; j < 8; j++) {
    regisTog(j);
    delay(100);
  }
}

// This method sends bits to the shift register:
void regisTog(int pin) {
  //  turn of the output so the pins don't light up
  //  while we're shifting bits
  digitalWrite(lthPin, LOW);
  
  // read bit state
  int State = bitRead(BTS, pin);
  
  // change bit state
  State = -State + 1;
  
  // toggle the bit in bitsToSend:
  bitWrite(BTS, pin, State);
  
  // shift the bits out:
  shiftOut(datPin, clkPin, MSBFIRST, BTS);

  // turn on the output so the LEDs can light up:
  digitalWrite(lthPin, HIGH);
}
