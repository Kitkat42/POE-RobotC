task killSwitch
{
		stopMotor(clawMotor);
 	 	stopMotor(armMotor);
 	 	stopMotor(rightMotor);
 	 	stopMotor(leftMotor);
 	 	stopTask (go);
 	 	stopTask (leftturn);
 	 	stopTask (rightturn);
 	 	stopTask (waterbottleup);
 	 	stopTask (avoidred);
}//this task stops everything incase the robot runs off the mats or
//something goes wrong so that we dont have to jump all over the robot

task avoidred
{
backward(50);
 wait(2);
 pointTurn(left,100);
wait(1.5);
}//helps avoid the red tape, will be paired with the lightsensor

task main()
{
  while(vexRT(Btn8U)==1)
 	 	{
 	 		if (vexRT(Btn8R)==1)
 	 		 {
 	 		startTask(killSwitch);
 	 		 }
 	 	}
 	while(vexRT(Btn8U)==1)
 		{
 			if(vexRT(Btn8L)==1)
 			 {
 			   startTask(leftturn);
 			 }


}

 if (vexRT(Btn8R)==0)
 		 {
 		   stopTask (waterbottleup);
 		 }
	 if (SensorValue(lineSensor) <1500)
		 {
			startTask(avoidred);
		 }
	if (SensorValue(lightSensor) <350)
		{
		startTask(avoidred);
		}
