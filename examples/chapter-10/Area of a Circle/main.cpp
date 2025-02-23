#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
    const double PI = 3.14159;
    double radius;
    char goAgain;

    cout << "This program calculates the area of a circle.\n";
    cout << fixed << setprecision(2);

    do
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        cout << "The area of the circle is " << (PI * radius * radius) << endl;

        cout << "Do you want to calculate the area of another circle? (Y or N) ";
        cin >> goAgain;

        while (toupper(goAgain) != 'Y' && toupper(goAgain) != 'N')
        {
            cout << "Please enter Y or N: ";
            cin >> goAgain;
        }
    } while (toupper(goAgain) == 'Y');

    return 0;
}