#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle box;
    double rectWidth, rectLength;

    cout << "Enter the width of the rectangle: ";
    cin >> rectWidth;

    cout << "Enter the length of the rectangle: ";
    cin >> rectLength;

    box.setWidth(rectWidth);
    box.setLength(rectLength);

    cout << "The area of the rectangle is: " << box.getArea() << endl;
    cout << "The width of the rectangle is: " << box.getWidth() << endl;
    cout << "The length of the rectangle is: " << box.getLength() << endl;

    return 0;
}