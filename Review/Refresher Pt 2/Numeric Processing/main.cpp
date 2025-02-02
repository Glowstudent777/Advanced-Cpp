/*****
 * Author: Glowstudent
 * Program: Numeric Processing
 *****/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    int count = 0, sum = 0;
    double average;
    string s;
    ifstream inFile;

    inFile.open("numbers.txt");

    if (inFile.fail())
    {
        cout << "File failed to open" << endl;
        return 1;
    }

    while (getline(inFile, s) && !inFile.eof() && inFile.good() && (s != "" && s != " "))
    {
        sum += stoi(s);
        count++;
    }

    inFile.close();

    average = static_cast<double>(sum) / static_cast<double>(count);

    cout << "There are " << count << " numbers in the file." << endl;
    cout << "The sum of the numbers is: " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}