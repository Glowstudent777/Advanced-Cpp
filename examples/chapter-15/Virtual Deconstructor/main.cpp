#include <iostream>

using namespace std;

class Animal
{
public:
    Animal()
    {
        cout << "Animal constructor called." << endl;
    }

    virtual ~Animal()
    {
        cout << "Animal destructor called." << endl;
    }
};

class Dog : public Animal
{
public:
    Dog() : Animal()
    {
        cout << "Dog constructor called." << endl;
    }

    ~Dog()
    {
        cout << "Dog destructor called." << endl;
    }
};

int main()
{
    Animal *myAnimal = new Dog();

    delete myAnimal;

    return 0;
}