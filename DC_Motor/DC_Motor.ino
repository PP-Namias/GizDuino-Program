int Motor_1 = 7;
int Motor_2 = 6;

int Buzzer = 9;
int Light = 8;

void Clear() {
  digitalWrite(Motor_1, LOW);
  digitalWrite(Motor_2, LOW);
  digitalWrite(Buzzer, LOW);
  digitalWrite(Light, LOW);
}

void setup() {
  // DC Motor
  pinMode(Motor_1,OUTPUT);
  pinMode(Motor_2,OUTPUT);

  //Buzzer
  pinMode(Buzzer,OUTPUT);
  
  //Light 
  pinMode(Light,OUTPUT);
}

void loop() {  
  digitalWrite(Motor_1, HIGH);
  digitalWrite(Motor_2, LOW);
  
  digitalWrite(Buzzer, HIGH);

  delay(2000);
  Clear();
 
  digitalWrite(Motor_1, LOW);
  digitalWrite(Motor_2, HIGH);
  
  digitalWrite(Light, HIGH);

  delay(2000);
  Clear();
}