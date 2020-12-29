// A simple servo motor program

// importing the servo library
#include <Servo.h>
// creating a new Servo object
Servo testServo;


// defining the pin on the board that the servo is connected to
#define servoPin 9

// angle variable to use when moving servo arm
int ang = 0;


void setup() {

// "attaching" the previously declared servo object to the servoPin. It is worth noting that for some servos, you will have to pass 2 extra parameters to define the min and max angles of the servo
// this is not needed here since the servo will be using the default values
  testServo.attach(servoPin);

}

void loop() {
  
  // this line uses the write() function to swivel the servo arm 100 degrees
  testServo.write(100);
  
  // add a delay of .1 seconds
  delay(100);
  
  // rotating the arm throughout a period of time using a for loop
  for(ang = 0; ang <= 100; ang+=1){
    testServo.write(ang);
    delay(15);    
  }

  //returns arm back to 0 degrees
  testServo.write(0);
}
