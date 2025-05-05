#include <iostream>
#include <map>
#include <string>
#include "Contact.h"

using namespace std;

int main()
{
    string searchName;

    Contact contact1("Ashley Miller", "amiller@faber.edu");
    Contact contact2("Jacob Brown", "jbrown@gotham.edu");
    Contact contact3("Emily Ramirez", "eramirez@coolidge.edu");

    map<string, Contact> contacts;
    map<string, Contact>::iterator iter;

    contacts[contact1.getName()] = contact1;
    contacts[contact2.getName()] = contact2;
    contacts[contact3.getName()] = contact3;

    cout << "Enter a name to search for: ";
    getline(cin, searchName);

    iter = contacts.find(searchName);

    if (iter != contacts.end())
    {
        cout << "Name: " << iter->second.getName() << endl;
        cout << "Email: " << iter->second.getEmail() << endl;
    }
    else
    {
        cout << "Contact not found." << endl;
    }

    return 0;
}