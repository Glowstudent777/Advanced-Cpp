#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159;

struct Circle
{
    double radius;
    double diameter;
    double area;
};

int main()
{
    Circle c;

    cout << "Enter the circle's diameter: ";
    cin >> c.diameter;

    c.radius = c.diameter / 2.0;

    c.area = PI * pow(c.radius, 2);

    cout << fixed << showpoint << setprecision(2);
    cout << "The circle's radius is " << c.radius << endl;
    cout << "The circle's area is " << c.area << endl;

    return 0;
}