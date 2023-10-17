#include <iostream>
#include "AmericanBase.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"

using namespace std;

int main() {
    setlocale(0, "");

    AmericanBase* base = new AmericanBase(2000, 200, 20000, 5000);

    // create vehicles
    Vehicle* bus = new Bus(5, 15, 100, 150);
    Vehicle* truck = new Truck(500, 1000, 190, 250);

    cout << endl << endl;
    cout << "\t--------------------------------" << endl;
    cout << "\tDisplaying information about the military base: " << endl;
    base->Print();
    cout << "\t--------------------------------" << endl;
    cout << endl << endl;


    // Arrival of the bus to the base
    bus->arrive();
    cout << "\tThe bus arrived at the base." << endl;

    bus->arrive();
    cout << "\tThe bus arrived at the base." << endl;

    bus->arrive();
    cout << "\tThe bus arrived at the base." << endl;

    // Arrival of the truck at the base
    truck->arrive();
    cout << "\tThe truck arrived at the base." << endl;

    cout << endl << endl;
    cout << "\t--------------------------------" << endl;
    cout << "\tDisplaying information about the military base: " << endl;
    base->Print();
    cout << "\t--------------------------------" << endl;
    cout << endl << endl;

    // Departure of the bus from the base
    if (bus->leave()) {
        cout << "\tThe bus left the base." << endl;
    }
    else {
        cout << "\tThe bus can't leave." << endl;
    }

    cout << endl << endl;
    cout << "\t--------------------------------" << endl;
    cout << "\tDisplaying information about the military base: " << endl;
    base->Print();
    cout << "\t--------------------------------" << endl;
    cout << endl << endl;

    // Departure of the truck from the base
    if (truck->leave()) {
        cout << "\tThe truck left the base." << endl;
    }
    else {
        cout << "\tThe truck can't leave." << endl;
    }

    cout << endl << endl;
    cout << "\t--------------------------------" << endl;
    cout << "\tDisplaying information about the military base: " << endl;
    base->Print();
    cout << "\t--------------------------------" << endl;
    cout << endl << endl;

    return 0;
}