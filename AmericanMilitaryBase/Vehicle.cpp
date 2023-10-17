#include "Vehicle.h"
#include "AmericanBase.h"

Vehicle::Vehicle(double init_petrol_amount, double init_tank_volume)
{
	petrol_amount = init_petrol_amount;
    tank_volume = init_tank_volume;
}
double Vehicle::getTankVolume()
{
	return tank_volume;
}

double Vehicle::getPetrolAmount()
{
	return petrol_amount;
}

bool Vehicle::leave()
{
    if (AmericanBase::petrol_on_base == 0 || AmericanBase::vehicles_on_base == 0 ||
        AmericanBase::people_on_base == 0 || petrol_amount > tank_volume) {
        return false;
    }

    double fullF = tank_volume - petrol_amount;  

    if (AmericanBase::petrol_on_base >= fullF) {
        AmericanBase::petrol_on_base -= fullF;
        petrol_amount = tank_volume;
        AmericanBase::vehicles_on_base--;
        return true;
    }

    return false;
}
