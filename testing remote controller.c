#pragma config(Sensor, dgtl11, green,          sensorLEDtoVCC)
#pragma config(Motor,  port1,           rightmotor,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port10,          leftmotor,     tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while(true)
	{
	turnLEDOn(green);

	if (vexRT(Btn8D)==1)
		{
			startMotor(rightmotor,60);
		}
	}
}
