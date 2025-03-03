/*****
 * Author: Glowstudent
 * Program: Customer Accounts
 *****/

#include <iostream>
#include <iomanip>
#include <sstream>
#include <limits>
#include <string>

using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};

struct Place
{
    string address;
    string city;
    string state;
    string zip;
};

struct Customer
{
    string name;
    Place residence;
    string phone;
    double balance;
    Date lastPayment;
};

void displayMenu();
void displayCustomers(Customer[], int);
string displayDate(Date);
void displayAllCustomers(Customer[], int);
void exitProgram();
void clearScreen();

int main()
{
    const int NUM_CUSTOMERS = 10;
    Customer customers[NUM_CUSTOMERS];
    int choice;

    clearScreen();
    cout << "\033]0;Customer Accounts\007";
    displayMenu();
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    while (choice != 8)
    {
        bool notification = false;
        int customerNum = 0;

        clearScreen();

        switch (choice)
        {
        case 1:
            if (customers[NUM_CUSTOMERS - 1].name != "")
            {
                cout << "The maximum number of customers has been reached.\n";
                notification = true;
                break;
            }

            for (int i = 0; i < NUM_CUSTOMERS; i++)
            {
                if (customers[i].name == "")
                {
                    cout << "Enter the customer's name: ";
                    getline(cin, customers[i].name);

                    cout << "Enter the customer's street address: ";
                    getline(cin, customers[i].residence.address);

                    cout << "City: ";
                    getline(cin, customers[i].residence.city);

                    cout << "State: ";
                    getline(cin, customers[i].residence.state);

                    cout << "ZIP: ";
                    getline(cin, customers[i].residence.zip);

                    cout << "Enter the customer's phone number: ";
                    getline(cin, customers[i].phone);

                    cout << "Enter the customer's balance: $";
                    cin >> customers[i].balance;

                    while (customers[i].balance < 0 || cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Invalid Input. Please try again." << endl;
                        cout << "Enter the customer's balance: $";
                        cin >> customers[i].balance;
                    }

                    cout << "Enter the date of the last payment.\n";
                    cout << "Month (up to 2 digits): ";
                    cin >> customers[i].lastPayment.month;

                    while (customers[i].lastPayment.month < 1 || customers[i].lastPayment.month > 12 || cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Invalid month. Please try again." << endl;
                        cout << "Month (up to 2 digits): ";
                        cin >> customers[i].lastPayment.month;
                    }

                    cout << "Day (up to 2 digits): ";
                    cin >> customers[i].lastPayment.day;

                    while (customers[i].lastPayment.day < 1 || customers[i].lastPayment.day > 31 || cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Invalid day. Please try again." << endl;
                        cout << "Day (up to 2 digits): ";
                        cin >> customers[i].lastPayment.day;
                    }

                    cout << "Year (4 digits): ";
                    cin >> customers[i].lastPayment.year;

                    while (customers[i].lastPayment.year < 1776 || customers[i].lastPayment.year > 9999 || cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');

                        cout << "Invalid year. Please try again." << endl;
                        cout << "Year (4 digits): ";
                        cin >> customers[i].lastPayment.year;
                    }

                    cin.ignore();

                    clearScreen();
                    cout << "Customer added successfully." << endl;
                    notification = true;

                    break;
                }
            }
            break;
        case 2:
            if (customers[0].name == "")
            {
                cout << "No customers to edit. Returning to the menu...\n";
                notification = true;
                break;
            }

            displayCustomers(customers, NUM_CUSTOMERS);

            cout << "Enter the customer number to change the name: ";
            cin >> customerNum;

            if (customerNum > NUM_CUSTOMERS || customerNum <= 0 || customers[customerNum - 1].name == "")
            {
                clearScreen();
                cout << "Invalid customer number. Returning to the menu...\n";
                notification = true;
                break;
            }

            cout << "Enter the customer's name: ";
            cin.ignore();
            getline(cin, customers[customerNum - 1].name);

            clearScreen();
            cout << "Name updated successfully." << endl;
            notification = true;

            break;
        case 3:
            if (customers[0].name == "")
            {
                cout << "No customers to edit. Returning to the menu...\n";
                notification = true;
                break;
            }

            displayCustomers(customers, NUM_CUSTOMERS);

            cout << "Enter the customer number to change the address: ";
            cin >> customerNum;

            if (customerNum > NUM_CUSTOMERS || customerNum <= 0 || customers[customerNum - 1].name == "")
            {
                clearScreen();
                cout << "Invalid customer number. Returning to the menu...\n";
                notification = true;
                break;
            }

            cout << "Enter the customer's street address: ";
            cin.ignore();
            getline(cin, customers[customerNum - 1].residence.address);

            cout << "City: ";
            getline(cin, customers[customerNum - 1].residence.city);

            cout << "State: ";
            getline(cin, customers[customerNum - 1].residence.state);

            cout << "ZIP: ";
            getline(cin, customers[customerNum - 1].residence.zip);

            clearScreen();
            cout << "Address updated successfully." << endl;
            notification = true;

            break;

        case 4:
            if (customers[0].name == "")
            {
                cout << "No customers to edit. Returning to the menu...\n";
                notification = true;
                break;
            }

            displayCustomers(customers, NUM_CUSTOMERS);

            cout << "Enter the customer number to change the phone number: ";
            cin >> customerNum;

            if (customerNum > NUM_CUSTOMERS || customerNum <= 0 || customers[customerNum - 1].name == "")
            {
                clearScreen();
                cout << "Invalid customer number. Returning to the menu...\n";
                notification = true;
                break;
            }

            cout << "Enter the customer's phone number: ";
            cin.ignore();
            getline(cin, customers[customerNum - 1].phone);

            clearScreen();
            cout << "Phone number updated successfully." << endl;
            notification = true;

            break;

        case 5:
            if (customers[0].name == "")
            {
                cout << "No customers to edit. Returning to the menu...\n";
                notification = true;
                break;
            }

            displayCustomers(customers, NUM_CUSTOMERS);

            cout << "Enter the customer number to change the balance: ";
            cin >> customerNum;

            if (customerNum > NUM_CUSTOMERS || customerNum <= 0 || customers[customerNum - 1].name == "")
            {
                clearScreen();
                cout << "Invalid customer number. Returning to the menu...\n";
                notification = true;
                break;
            }

            cout << "Enter the customer's balance: $";
            cin >> customers[customerNum - 1].balance;

            while (customers[customerNum - 1].balance < 0 || cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Invalid Input. Please try again." << endl;
                cout << "Enter the customer's balance: $";
                cin >> customers[customerNum - 1].balance;
            }

            cin.ignore();

            clearScreen();
            cout << "Balance updated successfully." << endl;
            notification = true;

            break;

        case 6:
            if (customers[0].name == "")
            {
                cout << "No customers to edit. Returning to the menu...\n";
                notification = true;
                break;
            }

            displayCustomers(customers, NUM_CUSTOMERS);

            cout << "Enter the customer number to change the last payment date: ";
            cin >> customerNum;

            if (customerNum > NUM_CUSTOMERS || customerNum <= 0 || customers[customerNum - 1].name == "")
            {
                clearScreen();
                cout << "Invalid customer number. Returning to the menu...\n";
                notification = true;
                break;
            }

            cout << "Enter the date of the last payment.\n";
            cout << "Month (up to 2 digits): ";
            cin >> customers[customerNum - 1].lastPayment.month;

            while (customers[customerNum - 1].lastPayment.month < 1 || customers[customerNum - 1].lastPayment.month > 12 || cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Invalid month. Please try again." << endl;
                cout << "Month (up to 2 digits): ";
                cin >> customers[customerNum - 1].lastPayment.month;
            }

            cout << "Day (up to 2 digits): ";
            cin >> customers[customerNum - 1].lastPayment.day;

            while (customers[customerNum - 1].lastPayment.day < 1 || customers[customerNum - 1].lastPayment.day > 31 || cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Invalid day. Please try again." << endl;
                cout << "Day (up to 2 digits): ";
                cin >> customers[customerNum - 1].lastPayment.day;
            }

            cout << "Year (4 digits): ";
            cin >> customers[customerNum - 1].lastPayment.year;

            while (customers[customerNum - 1].lastPayment.year < 1776 || customers[customerNum - 1].lastPayment.year > 9999 || cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Invalid year. Please try again." << endl;
                cout << "Year (4 digits): ";
                cin >> customers[customerNum - 1].lastPayment.year;
            }

            cin.ignore();

            clearScreen();
            cout << "Last payment date updated successfully." << endl;
            notification = true;

            break;

        case 7:
            if (customers[0].name == "")
            {
                cout << "No customers have been added yet." << endl;
                notification = true;
                break;
            }

            displayAllCustomers(customers, NUM_CUSTOMERS);

            cout << "Press Enter to return to the menu...";
            cin.ignore(std::numeric_limits<streamsize>::max(), '\n');

            clearScreen();
            break;

        default:
            cin.ignore();
            cout << "Invalid choice. Please try again." << endl;
            notification = true;
        }

        if (notification)
            cout << endl;
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
    }

    cout << endl;
    exitProgram();

    return 0;
}

void exitProgram()
{
    cout << "Exiting the program..." << endl;
    exit(0);
}

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

void displayMenu()
{
    cout << "1. Add a new customer" << endl;
    cout << "2. Change a customer's name" << endl;
    cout << "3. Change a customer's address" << endl;
    cout << "4. Change a customer's phone number" << endl;
    cout << "5. Change a customer's balance" << endl;
    cout << "6. Change a customer's last payment data" << endl;
    cout << "7. Display all customers" << endl;
    cout << "8. Exit the program" << endl;
}

void displayCustomers(Customer customers[], int NUM_CUSTOMERS)
{
    if (customers[0].name == "")
    {
        cout << "No customers have been added yet." << endl;
        return;
    }

    for (int i = 0; i < NUM_CUSTOMERS; i++)
    {
        if (customers[i].name != "")
        {
            cout << i + 1 << ". " << customers[i].name << endl;
        }
    }
}

void displayAllCustomers(Customer customers[], int NUM_CUSTOMERS)
{
    // Fail-safe
    if (customers[0].name == "")
    {
        cout << "No customers have been added yet." << endl;
        return;
    }

    for (int i = 0; i < NUM_CUSTOMERS; i++)
    {
        if (customers[i].name != "")
        {
            cout << "Customer #" << i + 1 << ":" << endl;
            cout << "\tName: " << customers[i].name << endl;
            cout << "\tPlace of Residence:\n";
            cout << "\t\t" << customers[i].residence.address << endl;
            cout << "\t\t" << customers[i].residence.city << ", " << customers[i].residence.state << " " << customers[i].residence.zip << endl;
            cout << "\tPhone: " << customers[i].phone << endl;
            cout << "\tBalance: $" << customers[i].balance << endl;
            cout << "\tLast Payment: " << displayDate(customers[i].lastPayment) << endl;
            cout << endl;
        }
    }

    cout << endl;
}

string displayDate(Date d)
{
    stringstream ss;
    ss << d.month << "/" << d.day << "/" << d.year;

    return ss.str();
}
