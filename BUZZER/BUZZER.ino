/* 
BUZZER SKETCH

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

  
  
  tone(BUZZER,NOTE_B5); // Sets pin 9 with a frequency of 300Hz 
  delay(500); 
  tone(BUZZER,NOTE_A5); // Sets pin 9 with a frequency of 500Hz
  delay(500);
  tone(BUZZER,NOTE_G5); // Sets pin 9 with a frequency of 700Hz 
  delay(500);
  
  
   
  
}
