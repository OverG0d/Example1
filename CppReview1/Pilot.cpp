#include "Pilot.h"


Pilot::Pilot(string name, float responseTime) : Operator(name, responseTime)
{
	_name = name;
	_responseTime = responseTime;
}


Pilot::~Pilot()
{
}

