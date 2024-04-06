/*
  "GizDuino Starter kit"
  
   Blinking 8 LEDs
   
   STEP 1: Construct the circuit of GizDuino Blinking 8 LEDs.
   STEP 2: Connect the USB Cable to your computer.
   STEP 3: Open the Arduino IDE.
   STEP 4: Open the BLINKING 8 LEDS Sample code from GizDuino Starter kit code.
   STEP 5: Then, click Upload.
   
   This sample code turns ON the LEDs in 1 second and turn OFF
   in 1 second. It is a simple and easiest way using more pins
   for blinking LEDs.
 

*/
// givenname for digital pins. 
int a = 4;
int b = 5;
int c = 6;
int d = 7;
int e = 8;
int f = 9;
int g = 10;
int h = 11;
// the setting up of pins.
void setup(){
  // initialize the digital pins as an output.
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(h, OUTPUT);
  
}
// the loop is where your program runs repeatedly.
void loop(){
  digitalWrite(a, HIGH);   // turn the LEDs ON (HIGH)
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(h, HIGH);
  delay(1000);             // wait for a second
  
  digitalWrite(a, LOW);    // turn the LEDs OFF (LOW)
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(h, LOW);
  delay(1000);            // wait for a second
  
}
