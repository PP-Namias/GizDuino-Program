/*
  "GizDuino Starter Kit"
  
  LATCH AND SWITCH BUTTON sample codes
  
  STEP 1: Construct the circuit of GizDuino Latch and Switch button.
  STEP 2: Connect the USB Cable to your computer.
  STEP 3: Open the Arduino IDE.
  STEP 4: Open the Latch and Switch Button Sample code from GizDuino Starter kit code.
  STEP 5: Then, click Upload.
  
  This sample code has two function button.
  Button 1 :  Latch switch, once you press the button it will
               stay turn ON, press it again it will OFF.
  Button 2 :  Button switch, once you press it will turn ON and
              when you realesed turn OFF.


*/
//givenname for digtal pins.
int ledPin1 = 10;
int ledPin2 = 11;
int switchPin1 = 2;
int switchPin2 = 3;
int switch_state = 0;
int switch_state1 = 0;
int LEDstate = 0;
// the setting up of pins.
void setup(){
    // initialize the digital pins as an output.
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);  
  pinMode(switchPin1, INPUT);
  pinMode(switchPin2, INPUT);
  digitalWrite(ledPin1, LOW);  
}
// the loop is where your program runs repeatedly.
void loop(){
  switch_state = digitalRead(switchPin1);  // reading the digital pins
  switch_state1 = digitalRead(switchPin2);
  
  if (switch_state == 0) {             // button pressed
    while (digitalRead(switchPin1) == 0);
    switch (LEDstate) {
      case 0:                          // if LED is off, turn on
        digitalWrite(ledPin1, HIGH);
        LEDstate = 1;
      break;
      case 1:                          // if LED is on, turn off
        digitalWrite(ledPin1, LOW);
        LEDstate = 0;
      break;
    }
  }
  if (switch_state1 == 0) {  // if button is LOW, LED is ON
  digitalWrite (ledPin2, HIGH);
  }
  if (switch_state1 == 1) {   // if button is HIGH, LED is OFF
    digitalWrite (ledPin2, LOW);
  }
}
