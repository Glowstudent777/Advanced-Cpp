#include <iostream>
#include <cctype>
#include <iomanip>
#include "Account.h"

using namespace std;

void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
    Account savings;
    char choice;

    cout << fixed << setprecision(2);

    do
    {
        displayMenu();
        cin >> choice;

        while (toupper(choice) < 'A' || toupper(choice) > 'G')
        {
            cout << "Please make a choice in the range A-G: ";
            cin >> choice;
        }

        switch (toupper(choice))
        {
        case 'a':
        case 'A':
            cout << "The current balance is $" << savings.getBalance() << endl;
            break;
        case 'b':
        case 'B':
            cout << "There have been " << savings.getTransactions() << " transactions." << endl;
            break;

        case 'c':
        case 'C':
            cout << "Interest earned for this period is $" << savings.getInterest() << endl;
            break;
        case 'd':
        case 'D':
            makeDeposit(savings);
            break;
        case 'e':
        case 'E':
            withdraw(savings);
            break;
        case 'f':
        case 'F':
            savings.calcInterest();
            cout << "Interest has been calculated and added to the balance." << endl;
            break;
        }
    } while (toupper(choice) != 'G');

    return 0;
}

void displayMenu()
{
    cout << "\n                   Menu\n"
         << "----------------------------------------------\n"
         << "A. Display the account balance\n"
         << "B. Display the number of transactions\n"
         << "C. Display the interest earned for this period\n"
         << "D. Make a deposit\n"
         << "E. Make a Withdrawal\n"
         << "F. Calculate interest\n"
         << "G. Quit the program\n"
         << "Enter your choice: ";
}

void makeDeposit(Account &account)
{
    double amount;

    cout << "Enter the amount to deposit: $";
    cin >> amount;

    cin.ignore();
    account.makeDeposit(amount);
}

void withdraw(Account &account)
{
    double amount;

    cout << "Enter the amount to withdraw: $";
    cin >> amount;

    cin.ignore();
    if (account.withdraw(amount))
    {
        cout << "Withdrawal successful." << endl;
    }
    else
    {
        cout << "Withdrawal failed. Insufficient funds." << endl;
    }
}