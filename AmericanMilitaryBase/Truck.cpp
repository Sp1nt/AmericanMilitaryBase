#include "Truck.h"
#include "AmericanBase.h"

Truck::Truck(double l, double max_l, double pet, double max_pet) : Vehicle(pet, max_pet)
{
    load = l; 
    max_load = max_l;
}

double Truck::getCurrentLoad()
{
	return load;
}

double Truck::getMaxLoad()
{
	return max_load;
}

void Truck::arrive() {
    if (load <= max_load) {
        AmericanBase::vehicles_on_base++;
        AmericanBase::people_on_base++;
        AmericanBase::goods_on_base += load;
    }
}

bool Truck::leave() {
    if (load > max_load) {
        return false; 
    }
    if (Vehicle::leave()) {
        AmericanBase::people_on_base--;
        if (AmericanBase::goods_on_base >= load) {
            AmericanBase::goods_on_base -= load;
            return true; 
        }
    }
    return false;
}
