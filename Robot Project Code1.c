task waterbottleup
 turnFlashlightOn(Flashlight, 100);
 untilButtonPress vexRT(Btn8R);
 turnFlashlightOff(Flashlight);
 startMotor(clawMotor, 40);
 startMotor (armMotor, 10);
 untilSonarLessThan (Sonar, 100);
 stopMotor (clawMotor);
 stopMotor (armMotor);

task main()
{
 while(1==1)
 {
   if vexRT(Btn8U)==1
	   {
	     forward(150);
	   }
 	 if vexRT(Btn8L)==1
	 	 {
	 	   startMotor(rightMotor, 50);
	     wait(5);
	  	 stopMotor(rightMotor);
	   }
   if SensorValue(limitSwitch)==0
 		 {
 		   startTask (waterbottleup);
 		 }
	}
}
