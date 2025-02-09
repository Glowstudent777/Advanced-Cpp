#include <iostream>
#include <iomanip>
#include "sortingAlgs.h"

using namespace std;

void calcSales(const int[], const double[], double[], int);
void showOrder(const double[], const int[], int);
void showTotals(const double[], const int[], int);

int main()
{
    const int NUM_PRODS = 9;

    int id[NUM_PRODS] = {914, 915, 916, 917, 918,
                         919, 920, 921, 922};

    int units[NUM_PRODS] = {842, 416, 127, 514, 437,
                            269, 97, 492, 212};

    double prices[NUM_PRODS] = {12.95, 14.95, 18.95, 16.95, 21.95,
                                31.95, 14.95, 14.95, 16.95};

    double sales[NUM_PRODS];

    calcSales(units, prices, sales, NUM_PRODS);
    dualSort(id, sales, NUM_PRODS);

    cout << setprecision(2) << fixed << showpoint;

    showOrder(sales, id, NUM_PRODS);

    showTotals(sales, units, NUM_PRODS);

    return 0;
}

void calcSales(const int units[], const double prices[], double sales[], int num)
{
    for (int i = 0; i < num; i++)
        sales[i] = units[i] * prices[i];
}

void showOrder(const double sales[], const int id[], int num)
{
    cout << "Product Number\tSales\n";
    cout << "===================================\n";
    for (int i = 0; i < num; i++)
    {
        cout << id[i] << "\t\t$";
        cout << setw(8) << sales[i] << endl;
    }
    cout << endl;
}

void showTotals(const double sales[], const int units[], int num)
{
    int totalUnits = 0;
    double totalSales = 0.0;

    for (int i = 0; i < num; i++)
    {
        totalUnits += units[i];
        totalSales += sales[i];
    }
    cout << "Total units Sold: " << totalUnits << endl;
    cout << "Total sales:     $" << totalSales << endl;
}