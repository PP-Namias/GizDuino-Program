#include <Servo.h>

#define BUZZER 13

int pos = 0;

Servo servo_9;

void setup()
{
  servo_9.attach(9, 500, 2500);
}
void loop()
{
  // sweep the servo from 0 to 180 degrees in steps
  // of 1 degrees
  tone(BUZZER, 1000); // Turn on buzzer
  for (pos = 0; pos <= 180; pos += 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  
  delay(500); 
  
  noTone(13); // Turn off buzzer
  for (pos = 180; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  delay(500); 
}