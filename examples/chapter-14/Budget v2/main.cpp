#include <iostream>
#include <iomanip>
#include "Budget.h"

using namespace std;

int main()
{
    int count;
    const int NUM_DIVISIONS = 4;
    double mainOfficeRequest;

    cout << "Enter the main office's budget request: ";
    cin >> mainOfficeRequest;

    Budget::mainOffice(mainOfficeRequest);
    Budget divisions[NUM_DIVISIONS];

    for (count = 0; count < NUM_DIVISIONS; count++)
    {
        double amount;
        cout << "Enter the budget for division " << (count + 1) << ": ";
        cin >> amount;
        divisions[count].addBudget(amount);
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "\nHere are the division budget requests:\n";
    for (count = 0; count < NUM_DIVISIONS; count++)
    {
        cout << "Division " << (count + 1) << "\t$"
             << divisions[count].getDivisionBudget() << endl;
    }
    cout << "\nTotal Budget Requests:\t$"
         << divisions[0].getCorpBudget() << endl;

    return 0;
}