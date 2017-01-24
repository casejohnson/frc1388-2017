// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RunWinch.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

RunWinch::RunWinch(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::winch.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void RunWinch::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void RunWinch::Execute() {
	double scaler = Robot::oi->getOpStick()->GetY();
	if (fabs(scaler)>=0.1){
		RobotMap::winchWinchMotor->Set(.2 * Robot::oi->getOpStick()->GetY());
	}
	else {
		RobotMap::winchWinchMotor->Set(0.0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool RunWinch::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void RunWinch::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RunWinch::Interrupted() {

}
