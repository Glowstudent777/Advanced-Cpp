#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int *getRandomNumbers(int);

int main()
{
    int *numbers = nullptr;

    numbers = getRandomNumbers(5);

    for (int i = 0; i < 5; i++)
        cout << numbers[i] << endl;

    delete[] numbers;
    numbers = nullptr;

    return 0;
}

int *getRandomNumbers(int num)
{
    int *array = nullptr;

    if (num <= 0)
        return nullptr;

    array = new int[num];

    srand(time(0));

    for (int i = 0; i < num; i++)
        array[i] = rand();

    return array;
}