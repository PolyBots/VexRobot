task main()
{
	bIfiAutonomousMode = false;
	while(1)
	{
		motor[port4]= -(vexRT[ch2]);
		motor[port7] = vexRT[ch3];
	}
}
