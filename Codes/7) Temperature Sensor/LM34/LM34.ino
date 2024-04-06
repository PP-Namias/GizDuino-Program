/*
   LM34 Temperature Sensor Sketch
   
   This sample sketch is for LM34 IC
   Temperature Sensor, it can display the
   degrees in Fahrenheit and Celcius.
   
  STEP 1: Construct the circuit of GizDuino Temperature sensor.
  STEP 2: Connect the USB Cable to your computer.
  STEP 3: Open the Arduino IDE.
  STEP 4: Open the Temperature sensor (LM34) Sample code from GizDuino Starter kit code.
  STEP 5: Then, click Upload.
  
  This sample code is simply read the Sensor output.

*/
//initializes/defines the output pin of the LM34 temperature sensor
int LM34_pin= 0;
//this sets the ground pin to LOW and the input voltage pin to high
void setup()
{
Serial.begin(9600);
}


void loop()
{
int raw_voltage = analogRead(outputpin);
float milli_volts= (raw_voltage/1024.0) * 5000;
float fahrenheit= milli_volts/10;
Serial.print(fahrenheit);
Serial.println(" degrees Fahrenheit, ");

float celsius= (fahrenheit - 32) * (5.0/9.0);

Serial.print (celsius);
Serial.println(" degrees Celsius");
delay(1000);

}
