/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       Franklin                                                  */
/*    Created:      10/31/2026, 3:56:13 PM                                    */
/*    Description:  IQ2 project                                               */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the IQ2 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here
motor motor1 = motor(PORT1, false);
motor motor2 = motor(PORT2, false);
motor_group both_motors = motor_group(motor1, motor2);


int main() {
	
    Brain.Screen.printAt( 2, 30, "Hello IQ2" );
   
    while(1) {
        both_motors.spin(forward, 100, percent);
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}