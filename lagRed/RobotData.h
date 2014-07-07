#pragma once

class RobotData
{
public:
	unsigned long lastReceiveMessage;
	int numPlayer;
	unsigned int remoteIp;

	RobotData() : lastReceiveMessage(0), numPlayer(0) {};
}
