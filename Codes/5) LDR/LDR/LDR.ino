/*
  "GizDuino Starter kit"
  
  LDR Sample code
  
  STEP 1: Construct the circuit of GizDuino LDR.
  STEP 2: Connect the USB Cable to your computer.
  STEP 3: Open the Arduino IDE.
  STEP 4: Open the LDR Sample code from GizDuino Starter kit code.
  STEP 5: Then, click Upload.
  
  This sample codes shows you how sensitive the LDR using it 
  like a switch. If you cover the LDR or put it in the dark
  the LED should turn on. (like a dark sensor)
  
*/



int lightPin = 0;  //define a pin for Photo resistor
int ledPin=12;     //define a pin for LED
// the setting up of pins.
void setup()
{
    Serial.begin(9600);  //Begin serial communcation
    pinMode( ledPin, OUTPUT );  // initialize the digital pin as an output.
}
// the loop is where your program runs repeatedly.
void loop()
{
    Serial.println(analogRead(lightPin)); //Write the value of the photoresistor to the serial monitor.
    analogWrite(ledPin, analogRead(lightPin)/4);  //send the value to the ledPin. Depends the value of resistor 
                                                //you have  to divide the value. for example, 
                                                //with a 10k resistor divide the value by 2, for 100k resistor divide by 4.
   delay(10); //short delay for faster response to light.
}
