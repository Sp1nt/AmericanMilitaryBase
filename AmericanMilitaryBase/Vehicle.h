#pragma once
class Vehicle
{
protected:
	double tank_volume; 
	double petrol_amount; 

	int people;
	int max_people;

	double load;
	double max_load;

public:
	Vehicle(double, double );
	double getTankVolume();
	double getPetrolAmount(); 

	virtual void arrive() = 0; 
	virtual bool leave();

};

