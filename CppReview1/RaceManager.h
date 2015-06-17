#pragma once
#include <string>

using namespace std;

class RaceManager //this class is abstract and it's children are the 'Vehicle' class and the 'Operator' class
{
public:
	string getName() const; //remember that the function type must match the return type
	void setName(string name);
	virtual void print() const = 0; //if you dont want the children to be abstract, they MUST redefine this function without pure virtualness!
protected:
	string _name; //for the brand of vehicle
	string _driverName; //remember that these two variables apply to ALL derived classes, so they must never come in conflict...
};

