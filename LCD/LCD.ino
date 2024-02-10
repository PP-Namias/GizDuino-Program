/*
   2x16 LCD DISPLAY MODULE SKETCH
   
   Wire Connections:
         LCD        GizDuino LIN-UNO
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
LiquidCrystal HELLOLCD(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows: 
  HELLOLCD.begin(16, 2);
  // Print a message to the LCD.
  HELLOLCD.print("Hello World!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  HELLOLCD.setCursor(2, 1);
  HELLOLCD.print("E-GIZMO :)");
}

