#include <iostream>
#include <memory> // For smart pointers

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
    double number, totalArea;
    Rectangle *kitchen = nullptr, *bedroom = nullptr, *den = nullptr;

    unique_ptr<Rectangle> kitchen(new Rectangle);
    unique_ptr<Rectangle> bedroom(new Rectangle);
    unique_ptr<Rectangle> den(new Rectangle);

    cout << "What is the width of the kitchen? ";
    cin >> number;
    kitchen->setWidth(number);

    cout << "What is the length of the kitchen? ";
    cin >> number;
    kitchen->setLength(number);

    cout << "What is the width of the bedroom? ";
    cin >> number;
    bedroom->setWidth(number);

    cout << "What is the length of the bedroom? ";
    cin >> number;
    bedroom->setLength(number);

    cout << "What is the width of the den? ";
    cin >> number;
    den->setWidth(number);

    cout << "What is the length of the den? ";
    cin >> number;
    den->setLength(number);

    totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();
    cout << "The total area of the three rooms is: " << totalArea << endl;

    return 0;
}