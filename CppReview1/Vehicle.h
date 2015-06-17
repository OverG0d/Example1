#pragma once
#include "RaceManager.h"
#include "Operator.h"
class Vehicle : public RaceManager
{
public:
	Vehicle(string name = "", int speed = 0, int passengers = 0);
	~Vehicle();
	virtual void print() const = 0;
	
	int getPassengers() const;
	void setPassengers(int passengers = 0);

	int getSpeed() const;
	void setSpeed(int speed);

	Operator getDriver() const; //pure virtual functions need to be overwritten for all immediately derived classes
	void setDriver(Operator& driver); //this is a pointer so the function can access the info in an existing Operator and make a deep copy

	virtual int travelTime(int distance) = 0; //for printing and manipulating the travel time of each vehicle

	//I'll probably need to make this an abstract class.... No need for Vehicle objects...

	//operator overloads:
	template <class T>
	T operator+(const T& target)
	{
		T temp;
		temp._name = target._name; //this is so the object's name doesnt become null, all of the temps properties need to be defined or members get
		//converted to NULL??
		temp._driverName = target._driverName;
		temp._speed = objectType._speed + target._speed;
		temp._passengers = objectType._passengers + target._passengers;
		return temp; //can I make this a different return type instead? But it can only return one value, so should I do it by reference then? Argh..... this'll be difficult....
	} //try to figure out why this is not working tomorrow..... I'll need to reread this in the book, I REALLY WANT TO GET GOOD AT OPERATOR OVERLOADING!
	//= must be member
	
protected:
	int _speed; //of the car
	int _passengers; //in the car
	Operator _driver; //to make a shallow copy of the object
};

