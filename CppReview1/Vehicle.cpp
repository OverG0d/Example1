#include "Vehicle.h"
#include "Car.h"
#include <iostream>
#include <iomanip>

using namespace std;

Vehicle::Vehicle(string name, int speed, int passengers)
{
	_name = name;
	if (speed >= 0)
	{
		_speed = speed;
		_passengers = passengers;
	}
	else
	{
		_speed = 0;
		_passengers = 0;
	}
}


Vehicle::~Vehicle()
{
}

void Vehicle::setPassengers(int passengers)
{
	if (passengers >= 0)
		_passengers = passengers;
	else
		_passengers = 0;
}
int Vehicle::getPassengers() const
{
	return _passengers;
}

int Vehicle::getSpeed() const
{
	return _speed;
}
void Vehicle::setSpeed(int speed)
{
	_speed = speed;
}

Operator Vehicle::getDriver() const //What is this good for? Should I overloas the << operator too?
{
	return _driver;
}
void Vehicle::setDriver(Operator& driver) //so here I simply make a shallow copy due to the absence of pointers and also set the driverName in
										//this class
{
	_driver = driver;
	_driverName = driver.getName();
}
/*
T operator+(const T& objectType, const T target) //this wasnt working because this was by reference and the declaration was not :P silly me...
{
	T temp;
	temp._name = target._name; //this is so the object's name doesnt become null, all of the temps properties need to be defined or members get
	//converted to NULL??
	temp._speed = objectType._speed + target._speed;
	temp._passengers = objectType._passengers + target._passengers;
	return temp; //can I make this a different return type instead? But it can only return one value, so should I do it by reference then? Argh..... this'll be difficult....
}*/