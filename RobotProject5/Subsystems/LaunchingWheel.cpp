// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "LaunchingWheel.h"
#include "../Robotmap.h"
LaunchingWheel::LaunchingWheel() : Subsystem("LaunchingWheel") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	launchingWheelController = RobotMap::launchingWheelLaunchingWheelController;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void LaunchingWheel::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
void LaunchingWheel::Start(){
	launchingWheelController->Set(-1.0);
}
void LaunchingWheel::Stop(){
    launchingWheelController->Set(0);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.