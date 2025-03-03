#include <iostream>
#include <iomanip>

using namespace std;

struct PayInfo
{
    int hours;
    double payRate;
};

int main()
{
    const int NUM_EMPLOYEES = 3;
    PayInfo workers[NUM_EMPLOYEES];
    int index;

    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees and their hourly pay rates.\n";

    for (index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> workers[index].hours;

        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        cin >> workers[index].payRate;

        cout << endl;
    }

    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);

    for (index = 0; index < NUM_EMPLOYEES; index++)
    {
        double gross;
        gross = workers[index].hours * workers[index].payRate;
        cout << "Employee #" << (index + 1);
        cout << " Gross Pay: $" << gross << endl;
    }

    return 0;
}