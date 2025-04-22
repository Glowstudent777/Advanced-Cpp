#include <iostream>
#include <iomanip>
#include "Car.h"
#include "Truck.h"
#include "SUV.h"

using namespace std;

int main()
{
    Car car("BMW", 2007, 50000, 15000.0, 4);
    Truck truck("Toyota", 2006, 40000, 12000.0, "4WD");
    SUV suv("Volvo", 2005, 30000, 18000.0, 5);

    cout << fixed << showpoint << setprecision(2);
    cout << "We have the following car in inventory:\n";
    cout << car.getModel() << " " << car.getMake() << " with " << car.getDoors() << " doors and " << car.getMileage() << " miles.\n";
    cout << "Price: $" << car.getPrice() << endl
         << endl;

    cout << "We have the following truck in inventory:\n";
    cout << truck.getModel() << " " << truck.getMake() << " with " << truck.getDriveType() << " drive and " << truck.getMileage() << " miles.\n";
    cout << "Price: $" << truck.getPrice() << endl
         << endl;

    cout << "We have the following SUV in inventory:\n";
    cout << suv.getModel() << " " << suv.getMake() << " with " << suv.getPassengers() << " passengers and " << suv.getMileage() << " miles.\n";
    cout << "Price: $" << suv.getPrice() << endl
         << endl;

    return 0;
}