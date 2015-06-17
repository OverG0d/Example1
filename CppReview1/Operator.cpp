#include "Operator.h"
#include <iostream>

using namespace std;

Operator::Operator(string name, float responseTime)
{
	_driverName = name;
	_responseTime = responseTime; //for setting a default response time... 
}


Operator::~Operator()
{
}

void Operator::print() const //remember that virtual classes can't be used like : here... interesting
{
	cout << "Name:" << _driverName << endl;
	cout << "Response Time:" << _responseTime << endl;
}

float Operator::getResponseTime() const
{
	return _responseTime;
}
void Operator::setResponseTime(float responseTime)
{
	_responseTime = responseTime;
}