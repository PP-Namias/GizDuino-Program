/*
LDR SKETCH
  
*/

int LDR_PIN = 0;  //define a pin for Photo resistor
int LED_INDICATOR=12;     //define a pin for LED
// the setting up of pins.
void setup()
{
    Serial.begin(9600);  //Begin serial communcation
    pinMode(LED_INDICATOR, OUTPUT );  // initialize the digital pin as an output.
}
// the loop is where your program runs repeatedly.
void loop()
{
    Serial.println(analogRead(LDR_PIN)); //Write the value of the photoresistor to the serial monitor.
    analogWrite(LED_INDICATOR, analogRead(LDR_PIN)/4);  //send the value to the ledPin. Depends the value of resistor 
                                                //you have  to divide the value. for example, 
                                                //with a 10k resistor divide the value by 2, for 100k resistor divide by 4.
   delay(10); //short delay for faster response to light.
}
