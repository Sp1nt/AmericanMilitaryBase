#pragma once
#include <iostream>
#include "Vehicle.h"

using namespace std;

class AmericanBase
{
	Vehicle* vehicle;
public:
	static int people_on_base; 
	static int vehicles_on_base; 
	static double petrol_on_base; 
	static double goods_on_base; 
	
	AmericanBase();
	AmericanBase(int, int, double, double);

	void Print() const;
	void AddVehicle(Vehicle*);

	~AmericanBase();
};

