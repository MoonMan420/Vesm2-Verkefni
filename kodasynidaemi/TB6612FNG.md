```C
/*
  Demonstrates use of TB6612FNG H-Bridge Motor Controller
  Drives two DC Motors
*/

// Motor A
int pwmA = 5;
int in1A = 3;
int in2A = 4;

// Motor B
int pwmB = 6;
int in1B = 7;
int in2B = 8;

// Speed control potentiometers
int SpeedControl1 = A0;  
int SpeedControl2 = A1;

// Stanby mode
int standby = 9;

// Motor Speed Values - Start at zero, max is 255
int MotorSpeed1 = 150;
int MotorSpeed2 = 150;

void setup()
{
  // Set all the motor control pins to outputs
  piMode(standby, OUTPUT)
  pinMode(pwmA, OUTPUT);
  pinMode(pwmB, OUTPUT);
  pinMode(in1A, OUTPUT);
  pinMode(in2A, OUTPUT);
  pinMode(in1B, OUTPUT);
  pinMode(in2B, OUTPUT);
}

void loop() 
{  
  // Set Motor A forward
  digitalWrite(in1A, HIGH);
  digitalWrite(in2A, LOW);

 // Set Motor B forward
  digitalWrite(in1B, HIGH);
  digitalWrite(in2B, LOW);
 
  // Set the motor speeds
  analogWrite(pwmA, MotorSpeed1);
  analogWrite(pwmB, MotorSpeed2);
}
```
