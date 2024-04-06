/*
  "GizDuino Starter kit"
  
  Temperature sensor (LM35) Sample code
  
  STEP 1: Construct the circuit of GizDuino Temperature sensor.
  STEP 2: Connect the USB Cable to your computer.
  STEP 3: Open the Arduino IDE.
  STEP 4: Open the Temperature sensor (LM35) Sample code from GizDuino Starter kit code.
  STEP 5: Then, click Upload.
  
  This sample code is simply read the Sensor output.
*/


float Temp;
int TempPin = 0;  //
// the setting up of pins.
void setup()
{
  // initialize the digital pin as an output.
  Serial.begin(9600);
}
// the loop is where your program runs repeatedly.
void loop()
{
  Temp = analogRead(TempPin); //read the analogpin
  Temp = Temp * 0.488; //multiply by 0.488 for calibration and exact value of temperature.
  Serial.print(Temp); // print the result open the serial monitor.
  Serial.println();
  delay(1000);  // 1 second delay.
}
