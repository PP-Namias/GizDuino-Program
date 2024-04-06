/*
  "GizDuino Starter kit"
  
  DC Motor Sample code
  
  STEP 1: Construct the circuit of GizDuino DC motor.
  STEP 2: Connect the USB Cable to your computer.
  STEP 3: Open the Arduino IDE.
  STEP 4: Open the DC Motor Sample code from GizDuino Starter kit code.
  STEP 5: Then, click Upload.
  
  
*/
// motorPin is the givenname for digital pin 9.
int motorPin = 9;
// the setting up of pins.
void setup()
{
//initialize the digital pin as an output.
Serial.begin(9600);
pinMode(motorPin, OUTPUT);
Serial.println("Type 0 to 255 for the speed of DC motor ");
}
void loop()
{
  
if (Serial.available())
{
int pwmSpeed = Serial.parseInt();
if (pwmSpeed>= 0 && pwmSpeed <= 255)
{
analogWrite(motorPin, pwmSpeed);
}
}
} 
