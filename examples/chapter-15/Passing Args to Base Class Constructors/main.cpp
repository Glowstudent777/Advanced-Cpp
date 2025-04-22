#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
    double boxWidth, boxLength, boxHeight;

    cout << "Enter the dimensions of the box:\n";
    cout << "Width: ";
    cin >> boxWidth;
    cout << "Length: ";
    cin >> boxLength;
    cout << "Height: ";
    cin >> boxHeight;

    Box box(boxWidth, boxLength, boxHeight);
    cout << "\nThe dimensions of the box are:\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "Height: " << box.getHeight() << endl;
    cout << "Area: " << box.getArea() << endl;
    cout << "Volume: " << box.getVolume() << endl;
}