/*****
 * Author: Glowstudent
 * Program: Wi-Fi Diagnostic Tree
 *****/

#include <iostream>
#include <string>

using namespace std;

string toUpper(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }

    return str;
}

int getAnswer(string question, int &control)
{
    string answer;

    cout << question << endl;
    cout << "Did that fix the problem? (yes or no): ";
    getline(cin, answer);

    if (toUpper(answer) == "YES" || toUpper(answer) == "Y")
    {
        cout << "\nGreat! We're done." << endl;
        control = -1;
        return 1;
    }
    else if (toUpper(answer) == "NO" || toUpper(answer) == "N")
    {
        control += 1;
        return 0;
    }
    else
    {
        cout << "Invalid input. Please enter 'yes' or 'no'." << endl;
        return getAnswer(question, control);
    }
}

int main()
{
    string answer;
    int qNum = 1;

    cout << "This program is designed to help you with Wi-Fi connectivity issues." << endl;
    cout << "Please answer the following questions to help us diagnose the problem." << endl;

    while (qNum != -1)
    {
        switch (qNum)
        {
        case 1:
            getAnswer("\nReboot the computer and try to connect.", qNum);
            break;
        case 2:
            getAnswer("\nReboot the router and try to connect.", qNum);
            break;
        case 3:
            getAnswer("\nMake sure the cables between the router & modem are plugged in firmly.", qNum);
            break;
        case 4:
            getAnswer("\nMove the router to a new location and try to connect.", qNum);
            break;
        case 5:
            cout << "\nGet a new router." << endl;
            qNum = -1;
            break;
        default:
            break;
        }
    }

    return 0;
}