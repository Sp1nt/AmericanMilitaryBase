#pragma once
#include "Vehicle.h"

using namespace std;
class Bus : public Vehicle
{

public:
	Bus(int , int , double , double );
	int getPeopleCount(); 
	int getMaxPeople();
	void arrive(); 
	bool leave();
};

