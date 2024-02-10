/*
SHIFT REGISTER SKETCH
 
 */

//givenname for digital pins.
const int LTH_PIN = 8;
const int CLK_PIN = 12;
const int DAT_PIN = 11;

//a byte is 8 bits/LED)
byte BTS = 0;
// the setting up of pins.
void setup() {
  // initialize the digital pin as an output.
  pinMode(LTH_PIN, OUTPUT);
  pinMode(DAT_PIN, OUTPUT);  
  pinMode(CLK_PIN, OUTPUT);
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
  digitalWrite(LTH_PIN, LOW);

  // read bit state
  int State = bitRead(BTS, pin);

  // change bit state
  State = -State + 1;

  // toggle the bit in bitsToSend:
  bitWrite(BTS, pin, State);

  // shift the bits out:
  shiftOut(DAT_PIN, CLK_PIN, MSBFIRST, BTS);

  // turn on the output so the LEDs can light up:
  digitalWrite(LTH_PIN, HIGH);
}

