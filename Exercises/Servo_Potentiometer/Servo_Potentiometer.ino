#include <Servo.h>

Servo myservo;  // create servo object to control a servo

const int servoPin = 3;
const int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

void setup() {
  Serial.begin(9600);
  myservo.attach(servoPin);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  Serial.print("Potentiometer: ");
  Serial.print(val);
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value
  Serial.print("  Servo: ");
  Serial.println(val);
  delay(15);                           // waits for the servo to get there
}
