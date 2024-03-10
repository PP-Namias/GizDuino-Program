/*
LED 8 BLINK SKETCH

*/
//givenname for digtal pins.
int LED5_PIN = 10;
int LED1_PIN = 11;
int SWITCH1 = 2;
int SWITCH2 = 3;
int STATE1 = 0;
int STATE2 = 0;
int LEDS_STATE = 0;
// the setting up of pins.
void setup(){
    // initialize the digital pins as an output.
  pinMode(LED5_PIN, OUTPUT);
  pinMode(LED1_PIN, OUTPUT);  
  pinMode(SWITCH1, INPUT);
  pinMode(SWITCH2, INPUT);
  digitalWrite(LED5_PIN, LOW);  
}
// the loop is where your program runs repeatedly.
void loop(){
  STATE1 = digitalRead(SWITCH1);  // reading the digital pins
  STATE2 = digitalRead(SWITCH2);
  
  if (STATE1 == 0) {             // button pressed
    while (digitalRead(SWITCH1) == 0);
    switch (LEDS_STATE) {
      case 0:                          // if LED is off, turn on
        digitalWrite(LED5_PIN, HIGH);
        LEDS_STATE = 1;
      break;
      case 1:                          // if LED is on, turn off
        digitalWrite(LED5_PIN, LOW);
        LEDS_STATE = 0;
      break;
    }
  }
  if (STATE2 == 0) {  // if button is LOW, LED is ON
  digitalWrite (LED1_PIN, HIGH);
  }
  if (STATE2 == 1) {   // if button is HIGH, LED is OFF
    digitalWrite (LED1_PIN, LOW);
  }
}
