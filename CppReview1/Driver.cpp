#include "Driver.h"
#include <iostream>

using namespace std;

Driver::Driver(string name, float responseTime)  //remember to not set values in the params in the cpp file
{
	_driverName = name;
	if (responseTime >= 0)
		_responseTime = responseTime;
	else
		_responseTime = 0;
}

Driver::~Driver()
{
	//DESTROY!!!!!
}
