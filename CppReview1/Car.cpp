#include "Car.h"
#include <iostream>

using namespace std;

Car::Car(float speed, int passengers, string name)
{
	//lol
	_speed = speed;
	_passengers = passengers;
	_name = name;
}


Car::~Car()
{
}

string Car::getType() const
{
	return _name;
}
void Car::setType(string type)
{
	_name = type;
}

int Car::travelTime(int distance)
{
	int time;
	time = distance / _speed + (1/6) * _passengers; //I wonder what this will look like...
	return time;
}

void Car::print() const
{
	Car temp;
	temp.setSpeed(_speed); //I made a temporary object for logging speed because it seemed
	//better to go by value rather than using a pointer, and I had
	//some issues using this with travelTime...
	cout << "Vehicle Brand:" << _name << endl;
	cout << "Speed:" << _speed << " Km's an hour" << endl;
	cout << "Passengers:" << _passengers << endl;
	cout << "Driver Name:" << _driverName << endl;
	cout << "Hours required to travel 1000 KM's: " << temp.travelTime(1000) << endl << endl;
}
