/*****
 * Author: Glowstudent
 * Program: Car Class
 *****/

#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
    const int abTimes = 5;
    Car car(2020, "Toyota");

    cout << "Car make: " << car.getMake() << endl;
    cout << "Car year model: " << car.getYearModel() << endl;

    cout << "Initial speed: " << car.getSpeed() << " km/h" << endl;

    cout << "\nAccelerating... " << endl;

    for (int i = 0; i < abTimes; i++)
    {
        car.accelerate();
        cout << "Current speed: " << car.getSpeed() << " km/h" << endl;
    }

    cout << "\nBraking... " << endl;
    for (int i = 0; i < abTimes; i++)
    {
        car.brake();
        cout << "Current speed: " << car.getSpeed() << " km/h" << endl;
    }

    cout << "\nFinal speed: " << car.getSpeed() << " km/h" << endl;

    return 0;
}