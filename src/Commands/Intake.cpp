// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "Intake.h"
#define LEFTMOTOR 1.0
#define RIGHTMOTOR 0.75
#define TOGGLED 0
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

Intake::Intake(): Command() {
        // Use requires() here to declare subsystem dependencies
    // eg. requires(Robot::chassis.get());
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::ballIntake.get());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTOR

// Called just before this Command runs the first time
void Intake::Initialize() {
	RobotMap::ballIntakeIntakeMotor1->Set(0.0);
	RobotMap::ballIntakeIntakeMotor2->Set(0.0);
}

// Called repeatedly when this Command is scheduled to run
void Intake::Execute() {
	if(Robot::ballIntake->isSwitched && TOGGLED==false){
		TOGGLED = true;
		LEFTMOTOR*=-1.0;
		RIGHTMOTOR*=-1.0;
	}
	if(Robot::ballIntake->isSwitched==false && TOGGLED==true){
		TOGGLED = false;
		LEFTMOTOR*=-1.0;
		RIGHTMOTOR*=-1.0;
	}

	RobotMap::ballIntakeIntakeMotor1->Set(LEFTMOTOR);
	RobotMap::ballIntakeIntakeMotor2->Set(RIGHTMOTOR);

}

// Make this return true when this Command no longer needs to run execute()
bool Intake::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void Intake::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Intake::Interrupted() {

}
