#include "RaceManager.h"

string RaceManager::getName() const
{
	return _driverName;
}
void RaceManager::setName(string name)
{
	_driverName = name;
}