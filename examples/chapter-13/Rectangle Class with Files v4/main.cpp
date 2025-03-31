#include <iostream>
#include <iomanip>
#include "Rectangle.h"

using namespace std;

int main()
{
    double houseWidth, houseLength;

    cout << "Enter the width of the house: ";
    cin >> houseWidth;

    cout << "Enter the length of the house: ";
    cin >> houseLength;

    Rectangle house(houseWidth, houseLength);

    cout << fixed << setprecision(2);
    cout << "The area of the house is: " << house.getArea() << endl;
    cout << "The width of the house is: " << house.getWidth() << endl;
    cout << "The length of the house is: " << house.getLength() << endl;

    return 0;
}