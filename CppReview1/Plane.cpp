#include "Plane.h"
#include <iostream>

using namespace std;

Plane::Plane(string name, int speed, int passengers)
{
	_name = name;
	_speed = speed;
	_passengers = passengers;
}


Plane::~Plane()
{
}

void Plane::print() const
{
	Plane temp;
	temp.setSpeed(_speed); //I made a temporary object for logging speed because it seemed
	//better to go by value rather than using a pointer, and I had
	//some issues using this with travelTime...
	cout << "Vehicle Brand:" << _name << endl;
	cout << "Speed:" << _speed << " Km's an hour" << endl;
	cout << "Passengers:" << _passengers << endl;
	cout << "Driver Name:" << _driverName << endl;
	cout << "Hours required to travel 1000 KM's: " << temp.travelTime(1000) << endl << endl;
}


int Plane::travelTime(int distance)
{
	int time;
	time = distance / _speed;
	return time;
}