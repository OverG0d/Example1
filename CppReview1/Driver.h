#pragma once
#include "Operator.h"

class Driver: public Operator
{
public:
	Driver(string name = "", float responseTime = 0.0f);

	~Driver();
private:

};

