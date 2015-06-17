#include <iostream>
#include "Vehicle.h"
#include "Driver.h"
#include "Operator.h"
#include "Car.h"
#include "Plane.h"

using namespace std;

int main()
{
	Driver* one = new Driver("Max"); //remember that dynamic memory allocation requires it to be a pointer

	Car* two = new Car(197, 3, "Farari");
	Car* three = new Car(50, 5, "Cheese");
	Car* four = new Car();
	two->setDriver(*one); //this seems to work since Driver is derived from Operator, and Operator is the required parameter.

	two->print();
	
	delete one;
	one = NULL;

	delete two;
	two = NULL;

	delete three;
	three = NULL;

	delete four;
	four = NULL;
	cin.get();

	return 0;
}
/*******************************************************
* TO DO:
* Sooo... I made Vehicle Virtual and now I think I need to change it back in order to successfully overload operators, but I don't want Vehicle objects able to be created...
* Create a copy constructor to create a deep copy and overload the =
* operator, cant remember for which class though
*******************************************************/