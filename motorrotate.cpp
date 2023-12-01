#include <Servo.h>

Servo motor;

void setup() {
  motor.attach(9); // Attach the motor to pin 9
  motor.write(0); // Set the initial position of the motor to 0 degrees
  delay(3000); // Wait for 3 second
}

void loop() {
  motor.write(180); // Rotate the motor to 180 degrees
  delay(5000); // Wait for 5 seconds
  motor.write(0); // Rotate the motor back to 0 degrees
  delay(5000); // Wait for 5 seconds
}


int directionPin = 12;
int pwmPin = 3;
int brakePin = 9;

//uncomment if using channel B, and remove above definitions
//int directionPin = 13;
//int pwmPin = 11;
//int brakePin = 8;

//boolean to switch direction
bool directionState;

void setup() {
  
//define pins
pinMode(directionPin, OUTPUT);
pinMode(pwmPin, OUTPUT);
pinMode(brakePin, OUTPUT);

}

/*void loop() {

//change direction every loop()
directionState = !directionState;

//write a low state to the direction pin (13)
if(directionState == false){
  digitalWrite(directionPin, LOW);
}

//write a high state to the direction pin (13)
else{
  digitalWrite(directionPin, HIGH);
}

//release breaks
digitalWrite(brakePin, LOW);

//set work duty for the motor
analogWrite(pwmPin, 30);

delay(2000);

//activate breaks
digitalWrite(brakePin, HIGH);

//set work duty for the motor to 0 (off)
analogWrite(pwmPin, 0);

delay(2000);
} */