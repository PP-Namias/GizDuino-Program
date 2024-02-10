/*
LM35 TEMPERATURE SENSOR SKETCH

*/


float TEMP;
int TEMP_PIN = 0;  //
// the setting up of pins.
void setup()
{
  // initialize the digital pin as an output.
  Serial.begin(9600);
}
// the loop is where your program runs repeatedly.
void loop()
{
  TEMP = analogRead(TEMP_PIN); //read the analogpin
  TEMP = (TEMP * 0.488); //multiply by 0.488 for calibration and exact value of temperature.
  Serial.print(TEMP); // print the result open the serial monitor.
  Serial.println();
  delay(1000);  // 1 second delay.
}
