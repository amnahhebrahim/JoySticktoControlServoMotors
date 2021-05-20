#include <Servo.h>
Servo motor_1; //include library and create object for servo motor
Servo motor_2;

//define global variable that are the joystick pins for x and y axis:

int joy_x=0;
//int joy_y=1;
//int joyValue=0;
void setup() {
motor_1.attach(6); //define output pin for motor to get signal
motor_2.attach(9);
  // put your setup code here, to run once:
pinMode(joy_x, INPUT); // define the pins for input of joystick
//pinMode(joy_y, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int joyValueX1= analogRead(joy_x);
 joyValueX1= map (joyValueX1, 0, 1023, 0, 180);
motor_1.write(joyValueX1);
motor_2.write(joyValueX1);
}
