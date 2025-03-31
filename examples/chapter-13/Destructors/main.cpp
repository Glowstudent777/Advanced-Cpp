#include <iostream>

using namespace std;

class Demo
{
public:
    Demo();
    ~Demo();
};

Demo::Demo()
{
    cout << "Constructor called." << endl;
}

Demo::~Demo()
{
    cout << "Destructor called." << endl;
}

int main()
{
    cout << "Creating an object of class Demo." << endl;
    Demo obj;

    cout << "Exiting main function." << endl;
    return 0;
}