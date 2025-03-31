#include <iostream>

using namespace std;

class Rectangle
{
private:
    double width;
    double length;

public:
    void setWidth(double width);
    void setLength(double length);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

void Rectangle::setWidth(double w)
{
    width = w;
}

void Rectangle::setLength(double l)
{
    length = l;
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getLength() const
{
    return length;
}

double Rectangle::getArea() const
{
    return width * length;
}

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

    cout << "The width of the rectangle is: " << box.getWidth() << endl;
    cout << "The length of the rectangle is: " << box.getLength() << endl;
    cout << "The area of the rectangle is: " << box.getArea() << endl;

    return 0;
}