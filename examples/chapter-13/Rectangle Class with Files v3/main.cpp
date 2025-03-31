#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle box;

    cout << "The area of the rectangle is: " << box.getArea() << endl;
    cout << "The width of the rectangle is: " << box.getWidth() << endl;
    cout << "The length of the rectangle is: " << box.getLength() << endl;

    return 0;
}