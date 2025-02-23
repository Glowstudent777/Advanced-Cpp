#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string input, name;
    int idNumber, age;
    double income;

    cout << "What is your ID number? ";
    getline(cin, input);
    idNumber = stoi(input);

    cout << "What is your name? ";
    getline(cin, name);

    cout << "What is your age? ";
    getline(cin, input);
    age = stoi(input);

    cout << "What is your annual income? ";
    getline(cin, input);
    income = stod(input);

    cout << fixed << showpoint << setprecision(2);
    cout << "ID Number: " << idNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Annual Income: $" << income << endl;

    return 0;
}