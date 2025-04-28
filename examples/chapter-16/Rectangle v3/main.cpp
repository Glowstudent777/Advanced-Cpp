#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    double width, height;

    Rectangle rect;

    cout << "Enter the rectangle width: ";
    cin >> width;

    cout << "Enter the rectangle height: ";
    cin >> height;

    try
    {
        rect.setWidth(width);
        rect.setHeight(height);

        cout << "The area of the rectangle is: " << rect.getArea() << endl;
    }
    catch (Rectangle::NegativeWidth e)
    {
        cout << "Error: " << e.getValue() << " is not a valid width." << endl;
    }
    catch (Rectangle::NegativeLength e)
    {
        cout << "Error: " << e.getValue() << " is not a valid length." << endl;
    }

    return 0;
}