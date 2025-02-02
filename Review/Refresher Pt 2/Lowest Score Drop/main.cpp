/*****
 * Author: Glowstudent
 * Program: Lowest Score Drop
 *****/

#include <iostream>
#include <iomanip>
#include <vector>
#include <limits>

using namespace std;

void getScore(double &score, int &i)
{
    cout << "Enter score " << i + 1 << ": ";
    cin >> score;

    while (score < 0 || score > 100 || cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << endl;
        cout << "Invalid input. Please enter a score between 0 and 100." << endl;
        cout << "Enter score " << i + 1 << ": ";
        cin >> score;
    }
}

int findLowest(vector<double> &scores)
{
    double lowest = scores[0];
    int index = 0;

    for (int i = 0; i < scores.size(); i++)
    {
        if (scores[i] < lowest)
        {
            lowest = scores[i];
            index = i;
        }
    }

    return index;
}

void calcAverage(vector<double> &scores, double &average)
{
    double sum = 0;
    int lowestIndex = findLowest(scores);

    for (int i = 0; i < scores.size(); i++)
    {
        if (i != lowestIndex)
        {
            sum += scores[i];
        }
    }

    average = sum / (scores.size() - 1);
}

int main()
{
    vector<double> scores;
    double average, score;

    for (int i = 0; i < 5; i++)
    {
        getScore(score, i);
        scores.push_back(score);
    }

    calcAverage(scores, average);

    cout << fixed << setprecision(2);
    cout << "The average of the four highest scores is: " << average << endl;

    return 0;
}