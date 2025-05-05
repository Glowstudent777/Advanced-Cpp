#include <iostream>
#include <map>
#include <string>
#include "Contact.h"

using namespace std;

int main()
{
    string searchName;
    map<string, Contact> contacts = {
        {"Ashley Miller", Contact("Ashley Miller", "amiller@faber.edu")},
        {"Jacob Brown", Contact("Jacob Brown", "jbrown@gotham.edu")},
        {"Emily Ramirez", Contact("Emily Ramirez", "eramirez@coolidge.edu")}};

    for (auto e : contacts)
    {
        cout << "Name: " << e.second.getName() << endl;
        cout << "Email: " << e.second.getEmail() << endl;
        cout << endl;
    }

    return 0;
}