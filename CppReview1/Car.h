#pragma once
#include "Vehicle.h"

class Car: public Vehicle
{
public:
	Car(float speed = 0.0f, int passengers = 0, string name = ""); //I took operator out because I only want to allow for the setting of the driver after creation
	~Car();
	string getType() const;
	void setType(string type);

	virtual int travelTime(int distance);
	virtual void Car::print() const;
private:
};

