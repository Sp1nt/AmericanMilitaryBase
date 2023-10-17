#include "AmericanBase.h"
#include <iostream>

int AmericanBase::people_on_base = 0;
int AmericanBase::vehicles_on_base = 0;
double AmericanBase::petrol_on_base = 0;
double AmericanBase::goods_on_base = 0;

AmericanBase::AmericanBase()
{
	people_on_base = 0;
	vehicles_on_base = 0;
	petrol_on_base = 0;
	goods_on_base = 0;
}

AmericanBase::AmericanBase(int pob, int vob,  double gob, double gdob)
{
	people_on_base = pob;
	vehicles_on_base = vob;
	petrol_on_base = gob;
	goods_on_base = gdob;

}

void AmericanBase::Print() const
{
	cout << "\tPeople on base:" << people_on_base << endl;
	cout << "\tVehicles on base:" << vehicles_on_base << endl;
	cout << "\tPetrol on base:" << petrol_on_base << endl;
	cout << "\tGoods on base:" << goods_on_base << endl;

}

void AmericanBase::AddVehicle(Vehicle* v)
{
	vehicle = v;
}

AmericanBase::~AmericanBase()
{
	delete[] vehicle;
}



