// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/DecreaseShooterPower.h"
#include "Commands/Drive.h"
#include "Commands/Fire.h"
#include "Commands/IncreaseShooterPower.h"
#include "Commands/Intake.h"
#include "Commands/RunShooter.h"
#include "Commands/ShooterPresetPower.h"
#include "Commands/ToggleDrive.h"
#include "Commands/ToggleFeeder.h"
#include "Commands/ToggleIntake.h"
#include "Commands/TurnIntakeOff.h"
#include "Commands/TurnShooterOff.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    opStick.reset(new Joystick(2));
    
    intakeOff.reset(new JoystickButton(opStick.get(), 7));
    intakeOff->WhenPressed(new TurnIntakeOff());
    intakeToggle.reset(new JoystickButton(opStick.get(), 6));
    intakeToggle->WhenPressed(new ToggleIntake());
    offPower.reset(new JoystickButton(opStick.get(), 5));
    offPower->WhenPressed(new TurnShooterOff());
    presetPower.reset(new JoystickButton(opStick.get(), 4));
    presetPower->WhenPressed(new ShooterPresetPower());
    decreasePower.reset(new JoystickButton(opStick.get(), 3));
    decreasePower->WhenPressed(new DecreaseShooterPower());
    increasePower.reset(new JoystickButton(opStick.get(), 2));
    increasePower->WhenPressed(new IncreaseShooterPower());
    rightStick.reset(new Joystick(1));
    
    rightFireButton.reset(new JoystickButton(rightStick.get(), 1));
    rightFireButton->WhenPressed(new Fire());
    leftStick.reset(new Joystick(0));
    
    leftFireButton.reset(new JoystickButton(leftStick.get(), 2));
    leftFireButton->WhenPressed(new Fire());
    toggleButton.reset(new JoystickButton(leftStick.get(), 1));
    toggleButton->WhenPressed(new ToggleDrive());

    // SmartDashboard Buttons
    SmartDashboard::PutData("ToggleFeeder", new ToggleFeeder());
    SmartDashboard::PutData("ShooterPresetPower", new ShooterPresetPower());
    SmartDashboard::PutData("TurnShooterOff", new TurnShooterOff());
    SmartDashboard::PutData("DecreaseShooterPower", new DecreaseShooterPower());
    SmartDashboard::PutData("IncreaseShooterPower", new IncreaseShooterPower());
    SmartDashboard::PutData("ToggleIntake", new ToggleIntake());
    SmartDashboard::PutData("TurnIntakeOff", new TurnIntakeOff());
    SmartDashboard::PutData("ToggleDrive", new ToggleDrive());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<Joystick> OI::getLeftStick() {
   return leftStick;
}

std::shared_ptr<Joystick> OI::getRightStick() {
   return rightStick;
}

std::shared_ptr<Joystick> OI::getOpStick() {
   return opStick;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
