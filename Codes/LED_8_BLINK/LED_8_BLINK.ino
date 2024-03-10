/*
LED 8 BLINK SKETCH
 
 */
// givenname for digital pins. 
int LED8_PIN = 4;
int LED7_PIN = 5;
int LED6_PIN = 6;
int LED5_PIN = 7;
int LED4_PIN = 8;
int LED3_PIN = 9;
int LED2_PIN = 10;
int LED1_PIN = 11;
// the setting up of pins.
void setup(){
  // initialize the digital pins as an output.
  pinMode(LED8_PIN, OUTPUT);
  pinMode(LED7_PIN, OUTPUT);
  pinMode(LED6_PIN, OUTPUT);
  pinMode(LED5_PIN, OUTPUT);
  pinMode(LED4_PIN, OUTPUT);
  pinMode(LED3_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  pinMode(LED1_PIN, OUTPUT);

}
// the loop is where your program runs repeatedly.
void loop(){
  // turn the LEDs ON (HIGH)
  digitalWrite(LED8_PIN, HIGH);  
  digitalWrite(LED7_PIN, HIGH);
  digitalWrite(LED6_PIN, HIGH); 
  digitalWrite(LED5_PIN, HIGH); 
  digitalWrite(LED4_PIN, HIGH); 
  digitalWrite(LED3_PIN, HIGH); 
  digitalWrite(LED2_PIN, HIGH); 
  digitalWrite(LED1_PIN, HIGH); 
  delay(1000);             // wait for a second
  // turn the LEDs OFF (LOW)
  digitalWrite(LED8_PIN, LOW);  
  digitalWrite(LED7_PIN, LOW); 
  digitalWrite(LED6_PIN, LOW);  
  digitalWrite(LED5_PIN, LOW);  
  digitalWrite(LED4_PIN, LOW);  
  digitalWrite(LED3_PIN, LOW);  
  digitalWrite(LED2_PIN, LOW); 
  digitalWrite(LED1_PIN, LOW);   
  delay(1000);            // wait for a second

}




