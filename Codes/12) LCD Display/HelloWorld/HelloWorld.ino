/*
  "Gizduino Starter kit"
  
   LCD Display 2x16 sample code
  
   STEP 1: Construct the circuit of GizDuino LCD Display.
   STEP 2: Connect the USB Cable to your computer.
   STEP 3: Open the Arduino IDE.
   STEP 4: Open the HelloWorld Sample code from GizDuino Starter kit code.
   STEP 5: Then, click Upload.
  
   This sample code prints "Hello World!" to the LCD.
 
   Wire Connections:
         LCD        GizDuino plus
         RS  ======= digital pin 12
      Enable ======= digital pin 11
          D4 ======= digital pin 5
          D5 ======= digital pin 4
          D6 =======digital pin 3
          D7 ======= digital pin 2
         R/W ======= ground* 10K resistor: ends to +5V and ground
          wiper to LCD VO pin (pin 3)
   
   To demonstrate the 2x 16 LCD Display.
 
   This example code is in the public domain.

 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal hellolcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows: 
  hellolcd.begin(16, 2);
  // Print a message to the LCD.
  hellolcd.print("Hello World!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  hellolcd.setCursor(0, 1);
  // print the number of seconds since reset:
  hellolcd.print(millis()/1000);
}

