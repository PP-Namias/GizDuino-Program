/*
   LM34 TEMPERARURE SENSOR SKETCH

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
int raw_voltage = analogRead(LM34_pin);
float milli_volts= (raw_voltage/1024.0) * 5000;
float fahrenheit= milli_volts/10;
Serial.print(fahrenheit);
Serial.println(" degrees Fahrenheit, ");

float celsius= (fahrenheit - 32) * (5.0/9.0);

Serial.print (celsius);
Serial.println(" degrees Celsius");
delay(1000);

}
