#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

Person makePerson();
void displayPerson(Person p);

int main()
{
    Person person;
    person = makePerson();
    displayPerson(person);
    return 0;
}

Person makePerson()
{
    Person p("John Doe");
    return p;
}

void displayPerson(Person p2)
{
    cout << p2.getName() << endl;
}