/*
SERVO SKETCH

*/


#include <Servo.h> 
 
Servo MYSERVO;  // create servo object to control a servo 
                // a maximum of eight servo objects can be created 
 
void setup() 
{ 
  MYSERVO.attach(9);  // attaches the servo on pin 9 to the servo object 
} 
 
 
void loop() 
{
int POT_VALUE = analogRead(0);

POT_VALUE = map (POT_VALUE, 0, 1023, 0, 180);
MYSERVO.write(POT_VALUE);


}
