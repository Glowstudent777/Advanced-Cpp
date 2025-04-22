/*****
 * Author: Glowstudent
 * Program: Employee and ProductionWorker Classes
 *****/

#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"

using namespace std;

void displayWorkerInfo(const ProductionWorker *w);

int main()
{
    ProductionWorker *workers[4] = {
        new ProductionWorker("John Doe", "12345", "01/01/2020", 1, 20.50),
        new ProductionWorker("Jane Smith", "67890", "02/15/2021", 2, 22.75),
        new ProductionWorker("Alice Johnson", "54321", "03/10/2019", 1, 19.00),
        new ProductionWorker("Bob Brown", "98765", "04/20/2022", 2, 21.00)};

    cout << "The current workers are: " << endl;
    cout << "------------------------" << endl;
    for (int i = 0; i < 4; i++)
    {
        displayWorkerInfo(workers[i]);
        cout << "------------------------" << endl;
    }

    return 0;
}

void displayWorkerInfo(const ProductionWorker *worker)
{
    cout << "Name: " << worker->getName() << endl;
    cout << "ID Number: " << worker->getIdNum() << endl;
    cout << "Hire Date: " << worker->getHireDate() << endl;
    cout << "Shift: " << (worker->getShift() == 1 ? "Day" : "Night") << endl;
    cout << fixed << setprecision(2) << "Pay Rate: $" << worker->getPayRate() << endl;
}