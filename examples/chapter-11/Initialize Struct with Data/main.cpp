#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct EmployeePay
{
    string name;
    int empNum;
    double payRate;
    double hours;
    double grossPay;
};

int main()
{
    EmployeePay emp1 = {"Betty Ross", 141, 18.75};
    EmployeePay emp2 = {"Jill Sandburg", 142, 17.50};

    cout << fixed << showpoint << setprecision(2);

    cout << "Name: " << emp1.name << endl;
    cout << "Employee Number: " << emp1.empNum << endl;
    cout << "Enter the number of hours worked by " << emp1.name << ": ";
    cin >> emp1.hours;
    emp1.grossPay = emp1.hours * emp1.payRate;
    cout << "Gross Pay: " << emp1.grossPay << endl;

    cout << endl;

    cout << "Name: " << emp2.name << endl;
    cout << "Employee Number: " << emp2.empNum << endl;
    cout << "Enter the number of hours worked by " << emp2.name << ": ";
    cin >> emp2.hours;
    emp2.grossPay = emp2.hours * emp2.payRate;
    cout << "Gross Pay: " << emp2.grossPay << endl;

    return 0;
}