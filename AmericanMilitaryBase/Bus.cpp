#include "Bus.h"
#include "AmericanBase.h"


Bus::Bus(int p, int maxP, double pet, double max_pet) : Vehicle(pet, max_pet)
{
    people = p;
    max_people = maxP;
};

int Bus::getPeopleCount()
{
	return people;
}

int Bus::getMaxPeople()
{
	return max_people;
}

void Bus::arrive() {
    if (people <= max_people) {
    AmericanBase::people_on_base += people;
    AmericanBase::vehicles_on_base++;
    }
}

bool Bus::leave() {
    if (people > max_people) {
        return false;
    }


    if (Vehicle::leave()) {

        if (AmericanBase::people_on_base >= people) {

            AmericanBase::people_on_base -= people;
            return true;
        }
    }
    return false;
}


