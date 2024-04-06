/* 
  "GizDuino Starter kit"
  
  Buzzer Sample code
  
  STEP 1: Construct the circuit of GizDuino Buzzer.
  STEP 2: Connect the USB Cable to your computer.
  STEP 3: Open the Arduino IDE.
  STEP 4: Open the Buzzer Sample code from GizDuino Starter kit code.
  STEP 5: Then, click Upload.
  
  This code is based on our UMT kit sample for buzzer.
*/
//Library for pitches 
#include "pitches.h"
#define BUZZER 9 
// Always use a PWM pin for the tone or analog write function
 
void setup() 
{
}
 
void loop() {
  
 
  // Note: This set of codes is just a simple         
  // application of buzzer sounds adjusting frequency 
  // and delay codes.                                 
  //                                                  
  // tone(pin number, frequency)                      
  // delay(time)                                      

  
  
  tone(BUZZER,NOTE_B5); // Sets pin 7 with a frequency of 300Hz 
  delay(500); 
  tone(BUZZER,NOTE_A5); // Sets pin 7 with a frequency of 500Hz
  delay(500);
  tone(BUZZER,NOTE_G5); // Sets pin 7 with a frequency of 700Hz 
  delay(500);
  
  
   
  
}
