/*
DC MOTOR SKETCH  
  
*/
// MOTOR_PIN is the givenname for digital pin 9.
int MOTOR_PIN = 9;
// the setting up of pins.
void setup()
{
//initialize the digital pin as an output.
Serial.begin(9600);
pinMode(MOTOR_PIN, OUTPUT);
Serial.println("TYPE 0 TO 255 FOR THE SPEED OF DC MOTOR>>");
}
void loop()
{
  
if (Serial.available())
{
int PWM_SPEED = Serial.parseInt();
if (PWM_SPEED>= 0 && PWM_SPEED <= 255)
{
analogWrite(MOTOR_PIN, PWM_SPEED);
}
}
} 
