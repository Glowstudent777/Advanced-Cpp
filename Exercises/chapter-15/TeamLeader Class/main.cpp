/*****
 * Author: Glowstudent
 * Program: TeamLeader Class
 *****/

#include <iostream>
#include <iomanip>
#include "TeamLeader.h"

using namespace std;

void displayLeaderInfo(const TeamLeader *w);
void displayWorkerInfo(const ProductionWorker *w);

int main()
{
    TeamLeader tLeads[3] = {TeamLeader("John Doe", "12345", "01/01/2020", 1, 20.00, 500.00, 40, 35),
                            TeamLeader("Alice Johnson", "54321", "03/15/2019", 2, 22.50, 600.00, 40, 40),
                            TeamLeader("Bob Brown", "98765", "05/20/2021", 1, 25.00, 700.00, 40, 30)};

    ProductionWorker pWorker("Jane Smith", "67890", "02/01/2021", 2, 18.00);

    cout << "Team Leader Information:" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Team Leader " << (i + 1) << ":" << endl;
        displayLeaderInfo(&tLeads[i]);
        cout << endl;
    }

    cout << endl
         << endl;

    cout << "Production Worker Information:" << endl;
    displayWorkerInfo(&pWorker);

    return 0;
}

void displayLeaderInfo(const TeamLeader *worker)
{
    cout << "Name: " << worker->getName() << endl;
    cout << "ID: " << worker->getIdNum() << endl;
    cout << "Hire Date: " << worker->getHireDate() << endl;
    cout << "Shift: " << (worker->getShift() == 1 ? "Day" : "Night") << endl;
    cout << "Pay Rate: $" << fixed << setprecision(2) << worker->getPayRate() << endl;
    cout << "Monthly Bonus: $" << fixed << setprecision(2) << worker->getMonthlyBonus() << endl;
    cout << "Training Hours: " << worker->getAtdTrainingHours() << " of " << worker->getReqTrainingHours() << endl;
    cout << "Training Status: " << (worker->getAtdTrainingHours() >= worker->getReqTrainingHours() ? "Completed" : "Incomplete") << endl;
    cout << "Total Pay: $" << fixed << setprecision(2) << (worker->getPayRate() * 40 + worker->getMonthlyBonus()) << endl;
}

void displayWorkerInfo(const ProductionWorker *worker)
{
    cout << "Name: " << worker->getName() << endl;
    cout << "ID: " << worker->getIdNum() << endl;
    cout << "Hire Date: " << worker->getHireDate() << endl;
    cout << "Shift: " << (worker->getShift() == 1 ? "Day" : "Night") << endl;
    cout << "Pay Rate: $" << fixed << setprecision(2) << worker->getPayRate() << endl;
}