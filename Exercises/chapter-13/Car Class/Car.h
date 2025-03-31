#ifndef CAR_H
#define CAR_H

#include <cstring>

class Car
{
private:
    int yearModel;
    char *make;
    int speed;

    void copyString(char *&dest, const char *src)
    {
        delete[] dest;
        dest = new char[strlen(src) + 1];
        strcpy(dest, src);
    };

public:
    Car(int year, const char *mk) : yearModel(year), speed(0)
    {
        make = new char[strlen(mk) + 1];
        strcpy(make, mk);
    };

    ~Car()
    {
        delete[] make;
    };

    int getYearModel() const { return yearModel; }
    const char *getMake() const { return make; }
    int getSpeed() const { return speed; }

    void accelerate() { speed += 5; }
    void brake() { speed -= 5; }
};

#endif