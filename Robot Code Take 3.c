#pragma config(Sensor, in3,    Potentiometer,  sensorPotentiometer)
#pragma config(Sensor, in4,    lineSensor,     sensorLineFollower)
#pragma config(Sensor, in5,    lightSensor,    sensorReflection)
#pragma config(Sensor, dgtl2,  Sonar,          sensorSONAR_inch)
#pragma config(Motor,  port1,           rightMotor,    tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           clawMotor,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           Headlight1,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port8,           Headlight2,    tmotorVexFlashlight, openLoop, reversed)
#pragma config(Motor,  port9,           armMotor,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          leftMotor,     tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true)
	{
		while (vexRT(Btn8L)==0)
		{
		while (vexRT(Btn8D)==0)
		{
		while (vexRT(Btn8U)==1)
		{
			startMotor(rightMotor, 100);
			startMotor(leftMotor,100);
			wait(1);
			stopMotor(rightMotor);
			stopMotor(leftMotor);
		}
		}
		}
		while (vexRT(Btn8D)==0)
		{
		while (vexRT(Btn8U)==0)
		{
		while (vexRT(Btn8L)==1)
		{
			startMotor(rightMotor, 100);
			startMotor(leftMotor,-100);
			wait(.3);
			stopMotor(rightMotor);
			stopMotor(leftMotor);
		}
		}
		}
	}
}
