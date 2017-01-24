// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::driveTrainLeftFront;
std::shared_ptr<SpeedController> RobotMap::driveTrainLeftRear;
std::shared_ptr<SpeedController> RobotMap::driveTrainRightFront;
std::shared_ptr<SpeedController> RobotMap::driveTrainRightRear;
std::shared_ptr<RobotDrive> RobotMap::driveTrainRobotDrive;
std::shared_ptr<SpeedController> RobotMap::ballIntakeIntakeMotor1;
std::shared_ptr<SpeedController> RobotMap::ballIntakeIntakeMotor2;
std::shared_ptr<SpeedController> RobotMap::shooterShootingMotor;
std::shared_ptr<SpeedController> RobotMap::winchWinchMotor;
std::shared_ptr<SpeedController> RobotMap::feederShooterFeedingMotor;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveTrainLeftFront.reset(new Talon(8));
    lw->AddActuator("DriveTrain", "LeftFront", std::static_pointer_cast<Talon>(driveTrainLeftFront));
    
    driveTrainLeftRear.reset(new Talon(0));
    lw->AddActuator("DriveTrain", "LeftRear", std::static_pointer_cast<Talon>(driveTrainLeftRear));
    
    driveTrainRightFront.reset(new Talon(2));
    lw->AddActuator("DriveTrain", "RightFront", std::static_pointer_cast<Talon>(driveTrainRightFront));
    
    driveTrainRightRear.reset(new Talon(3));
    lw->AddActuator("DriveTrain", "RightRear", std::static_pointer_cast<Talon>(driveTrainRightRear));
    
    driveTrainRobotDrive.reset(new RobotDrive(driveTrainLeftFront, driveTrainLeftRear,
              driveTrainRightFront, driveTrainRightRear));
    
    driveTrainRobotDrive->SetSafetyEnabled(true);
        driveTrainRobotDrive->SetExpiration(0.1);
        driveTrainRobotDrive->SetSensitivity(0.5);
        driveTrainRobotDrive->SetMaxOutput(1.0);

    ballIntakeIntakeMotor1.reset(new Talon(6));
    lw->AddActuator("BallIntake", "IntakeMotor1", std::static_pointer_cast<Talon>(ballIntakeIntakeMotor1));
    
    ballIntakeIntakeMotor2.reset(new Talon(7));
    lw->AddActuator("BallIntake", "IntakeMotor2", std::static_pointer_cast<Talon>(ballIntakeIntakeMotor2));
    
    shooterShootingMotor.reset(new Talon(4));
    lw->AddActuator("Shooter", "ShootingMotor", std::static_pointer_cast<Talon>(shooterShootingMotor));
    
    winchWinchMotor.reset(new TalonSRX(1));
    lw->AddActuator("Winch", "WinchMotor", std::static_pointer_cast<TalonSRX>(winchWinchMotor));
    
    feederShooterFeedingMotor.reset(new Talon(5));
    lw->AddActuator("Feeder", "ShooterFeedingMotor", std::static_pointer_cast<Talon>(feederShooterFeedingMotor));
    


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
