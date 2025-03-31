#include "Rectangle.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Rectangle::Rectangle(double w, double l)
{
    width = w;
    length = l;
}

void Rectangle::setWidth(double w)
{
    if (w >= 0)
        width = w;
    else
    {
        cout << "Width cannot be negative." << endl;
        exit(EXIT_FAILURE);
    }
}

void Rectangle::setLength(double l)
{
    if (l >= 0)
        length = l;
    else
    {
        cout << "Length cannot be negative." << endl;
        exit(EXIT_FAILURE);
    }
}