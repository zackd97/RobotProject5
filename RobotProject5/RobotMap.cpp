// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::chassisLeftWheel = NULL;
SpeedController* RobotMap::chassisRightWheel = NULL;
RobotDrive* RobotMap::chassisRobotDrive21 = NULL;
SpeedController* RobotMap::launchingWheelLaunchingWheelController = NULL;
SpeedController* RobotMap::elevationSystemElevationController = NULL;
DigitalInput* RobotMap::elevationSystemUpLimit = NULL;
DigitalInput* RobotMap::elevationSystemDownLimit = NULL;
SpeedController* RobotMap::loadingArmLoadingController = NULL;
DigitalInput* RobotMap::loadingArmEndPosition = NULL;
DigitalInput* RobotMap::loadingArmBackPosition = NULL;
Servo* RobotMap::gateServoOneGateOne = NULL;
Servo* RobotMap::gateServoTwoGateTwo = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	chassisLeftWheel = new Jaguar(1, 1);
	lw->AddActuator("Chassis", "LeftWheel", (Jaguar*) chassisLeftWheel);
	
	chassisRightWheel = new Jaguar(1, 2);
	lw->AddActuator("Chassis", "RightWheel", (Jaguar*) chassisRightWheel);
	
	chassisRobotDrive21 = new RobotDrive(chassisLeftWheel, chassisRightWheel);
	
	chassisRobotDrive21->SetSafetyEnabled(true);
        chassisRobotDrive21->SetExpiration(0.1);
        chassisRobotDrive21->SetSensitivity(0.5);
        chassisRobotDrive21->SetMaxOutput(1.0);
        chassisRobotDrive21->SetInvertedMotor(RobotDrive::kRearLeftMotor, true);
        chassisRobotDrive21->SetInvertedMotor(RobotDrive::kRearRightMotor, true);        
	launchingWheelLaunchingWheelController = new Talon(1, 3);
	lw->AddActuator("LaunchingWheel", "LaunchingWheelController", (Talon*) launchingWheelLaunchingWheelController);
	
	elevationSystemElevationController = new Talon(1, 4);
	lw->AddActuator("ElevationSystem", "ElevationController", (Talon*) elevationSystemElevationController);
	
	elevationSystemUpLimit = new DigitalInput(1, 1);
	lw->AddSensor("ElevationSystem", "UpLimit", elevationSystemUpLimit);
	
	elevationSystemDownLimit = new DigitalInput(1, 2);
	lw->AddSensor("ElevationSystem", "DownLimit", elevationSystemDownLimit);
	
	loadingArmLoadingController = new Talon(1, 5);
	lw->AddActuator("LoadingArm", "LoadingController", (Talon*) loadingArmLoadingController);
	
	loadingArmEndPosition = new DigitalInput(1, 4);
	lw->AddSensor("LoadingArm", "EndPosition", loadingArmEndPosition);
	
	loadingArmBackPosition = new DigitalInput(1, 3);
	lw->AddSensor("LoadingArm", "BackPosition", loadingArmBackPosition);
	
	gateServoOneGateOne = new Servo(1, 6);
	lw->AddActuator("GateServoOne", "GateOne", gateServoOneGateOne);
	
	gateServoTwoGateTwo = new Servo(1, 7);
	lw->AddActuator("GateServoTwo", "GateTwo", gateServoTwoGateTwo);
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}