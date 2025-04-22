#include <iostream>

using namespace std;

class BaseClass
{
public:
    BaseClass()
    {
        cout << "This is the BaseClass constructor" << endl;
    }

    ~BaseClass()
    {
        cout << "This is the BaseClass destructor" << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    DerivedClass()
    {
        cout << "This is the DerivedClass constructor" << endl;
    }

    ~DerivedClass()
    {
        cout << "This is the DerivedClass destructor" << endl;
    }
};

int main()
{
    cout << "Creating DerivedClass object" << endl;
    DerivedClass obj;

    cout << "DerivedClass object created" << endl;
    cout << "Exiting main function" << endl;

    return 0;
}