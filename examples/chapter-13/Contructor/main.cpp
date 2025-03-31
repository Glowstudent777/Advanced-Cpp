#include <iostream>

using namespace std;

class Demo
{
public:
    Demo();
};

Demo::Demo()
{
    cout << "Constructor called!" << endl;
}

int main()
{
    Demo obj;

    cout << "Object created!" << endl;

    return 0;
}