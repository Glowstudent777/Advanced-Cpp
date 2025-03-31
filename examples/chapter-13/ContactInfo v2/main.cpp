#include <iostream>
#include "ContactInfo.h"

using namespace std;

int main()
{
    ContactInfo entry("Kristen Lee", "555-2021");

    cout << "Name: " << entry.getName() << endl;
    cout << "Phone: " << entry.getPhoneNumber() << endl;

    return 0;
}