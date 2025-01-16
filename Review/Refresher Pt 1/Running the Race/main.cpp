/*****
 * Author: Glowstudent
 * Program: Running the Race
 *****/

#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
    string runners[3];
    double times[3];
    int extra = 0;

    cout << "This program will determine the fastest runner." << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the name of runner " << i + 1 << ": ";
        getline(cin, runners[i]);

        while (runners[i].empty())
        {
            cout << "Invalid name. Please enter a name: ";
            getline(cin, runners[i]);
        }

        if (runners[i].length() > extra)
            extra = runners[i].length();

        cout << "Enter the time of runner " << i + 1 << ": ";
        cin >> times[i];

        while (times[i] < 0 || cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid time. Please enter a positive time: ";
            cin >> times[i];
        }
        cin.ignore();
    }

    // Sorting the runners and times in ascending order
    // I believe this is called a bubble sort.
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (times[j] > times[j + 1])
            {
                swap(times[j], times[j + 1]);
                swap(runners[j], runners[j + 1]);
            }
        }
    }

    cout << endl;
    cout << "The scoreboard:" << endl;
    cout << string(30 + extra, '-') << endl;
    cout << "1st place: " << runners[0] << " with a time of " << times[0] << endl;
    cout << "2nd place: " << runners[1] << " with a time of " << times[1] << endl;
    cout << "3rd place: " << runners[2] << " with a time of " << times[2] << endl;
    cout << string(30 + extra, '-') << endl;

    return 0;
}