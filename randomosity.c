#pragma config(Sensor, in3,    Potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in4,    lineSensor,     sensorLineFollower)
#pragma config(Sensor, in5,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl2,  Sonar,          sensorSONAR_inch)
#pragma config(Sensor, dgtl5,  button,         sensorNone)
#pragma config(Motor,  port1,           rightMotor,    tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           Headlight1,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port8,           Headlight2,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port9,           armMotor,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          leftMotor,     tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	if (vexRT(Btn8U)==1)
	{
		turnFlashlightOn(Headlight2, 127);
		turnFlashlightOn(Headlight1, 127);
		untilButtonPress(button);
		turnFlashlightOn(Headlight1, 50);
		turnFlashlightOn(Headlight2, 50);
		startMotor(clawMotor, 30);
		wait(1);
		stopMotor(clawMotor);
		wait(5);
		startMotor(clawMotor,-30);
		wait(1);
		stopMotor(clawMotor);
		startMotor(armMotor, -40);
		wait(1.5);
		stopMotor(armMotor);
		startMotor(leftMotor,100);
		wait(1.5);
		stopMotor(leftMotor);
		startMotor(rightMotor,100);
		startMotor(leftMotor,100);
		wait(5);
		stopMotor(leftMotor);
		stopMotor(rightMotor);
		startMotor(clawMotor, 30);
		wait(2);
		stopMotor(clawMotor);
	}
}
