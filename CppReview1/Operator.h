#pragma once
#include "RaceManager.h"

class Operator : public RaceManager
{
public:
	Operator(string name = "", float responseTime = 0.0f);
	~Operator();
	void print() const;

	float getResponseTime() const;
	void setResponseTime(float responseTime);
protected:
	float _responseTime;
};

