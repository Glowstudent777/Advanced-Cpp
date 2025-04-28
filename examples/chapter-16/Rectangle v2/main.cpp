#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    double width, length;
    bool tryAgain = true;

    Rectangle rect;

    cout << "Enter the rectangle width: ";
    cin >> width;

    while (tryAgain)
    {
        try
        {
            rect.setWidth(width);
            tryAgain = false;
        }
        catch (Rectangle::NegativeWidth)
        {
            cout << "Error: Negative width is not allowed." << endl;
            cout << "Enter the rectangle width: ";
            cin >> width;
        }
    }

    cout << "Enter the rectangle length: ";
    cin >> length;

    tryAgain = true;
    while (tryAgain)
    {
        try
        {
            rect.setHeight(length);
            tryAgain = false;
        }
        catch (Rectangle::NegativeLength)
        {
            cout << "Error: Negative length is not allowed." << endl;
            cout << "Enter the rectangle length: ";
            cin >> length;
        }
    }

    cout << "The area of the rectangle is: " << rect.getArea() << endl;

    return 0;
}