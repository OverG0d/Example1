#pragma once
#include "Vehicle.h"

class Plane: public Vehicle
{
public:
	Plane(string name = "", int speed = 0, int passengers = 0); //note to self: the reason I pass objects by reference is because when the
	//function uses the object indicated it will not create a copy of it but will simply point to it and make the changes to the original, thus
	//avoiding any complications with memory leakage or possible dangling pointers from improper use of delete within the function.... etc.
	//but thats only with dynamic memory allocation... also handles objects that are on the heap on the heap instead of making a copy on
	//the stack, it could be TOO big
	~Plane();

	virtual void Plane::print() const;
	virtual int travelTime(int distance);
private:
	float maxHeight; //for flying.
};

