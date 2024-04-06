/*
  "GizDuino Starter kit
  
  Servo sweep Sample code
  
  STEP 1: Construct the circuit of GizDuino Servo sweep.
  STEP 2: Connect the USB Cable to your computer.
  STEP 3: Open the Arduino IDE.
  STEP 4: Open the Servo sweep Sample code from GizDuino Starter kit code.
  STEP 5: Then, click Upload.
  
  This sample codes shows you how the servo sweeps
  by adjusting the potentiometer value.
  
  This example code is in the public domain.

*/


#include <Servo.h> 
 
Servo myservo;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
int pos = 0;    // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{
int potValue = analogRead(0);

potValue = map (potValue, 0, 1023, 10, 170);
myservo.write(potValue);


}
