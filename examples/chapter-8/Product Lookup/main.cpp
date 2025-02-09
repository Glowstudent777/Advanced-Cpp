#include <iostream>
#include <string>

using namespace std;

const int NUM_PRODS = 9,
          MIN_PRODNUM = 914,
          MAX_PRODNUM = 922;

int binarySearch(int[], int, int);
int getProdNum();
void displayProd(const string[], const string[], const double[], int);

int main()
{
    int id[NUM_PRODS] = {914, 915, 916, 917, 918, 919, 920,
                         921, 922};

    string title[NUM_PRODS] =
        {"Six Steps to Leadership",
         "Six Steps to Leadership",
         "The Road to Excellence",
         "Seven Lessons of Quality",
         "Seven Lessons of Quality",
         "Seven Lessons of Quality",
         "Teams Are Made, Not Born",
         "Leadership for the Future",
         "Leadership for the Future"};

    string description[NUM_PRODS] =
        {"Book", "Audio CD", "DVD",
         "Book", "Audio CD", "DVD",
         "Book", "Book", "Audio CD"};

    double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95,
                                31.95, 14.95, 14.95, 16.95};

    int prodNum, index;
    char again;

    do
    {
        prodNum = getProdNum();
        index = binarySearch(id, NUM_PRODS, prodNum);

        if (index == -1)
            cout << "That product number was not found.\n";
        else
            displayProd(title, description, prices, index);

        cout << "Would you like to look up another product? (y/n) ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}

int binarySearch(int array[], int numElems, int value)
{
    int first = 0,
        last = numElems - 1,
        middle;

    while (first <= last)
    {
        middle = first + (last - first) / 2;

        if (array[middle] == value)
            return middle;

        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }

    return -1;
}

void displayProd(const string title[], const string desc[], const double price[], int index)
{
    cout << "Title: " << title[index] << endl;
    cout << "Description: " << desc[index] << endl;
    cout << "Price: $" << price[index] << endl;
}

int getProdNum()
{
    int prodNum;

    cout << "Enter the item's product number: ";
    cin >> prodNum;

    while (prodNum < MIN_PRODNUM || prodNum > MAX_PRODNUM)
    {
        cout << "Enter a number in the range of " << MIN_PRODNUM;
        cout << " through " << MAX_PRODNUM << ".\n";
        cin >> prodNum;
    }

    return prodNum;
}
