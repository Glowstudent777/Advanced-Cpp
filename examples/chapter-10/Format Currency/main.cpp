#include <iostream>
#include <string>

using namespace std;

void dollarFormat(string &);

int main()
{
    string input;

    cout << "Enter a dollar amount in the format nnnnn.nn: ";
    cin >> input;

    dollarFormat(input);

    cout << "Formatted amount: " << input << endl;

    return 0;
}

void dollarFormat(string &cur)
{
    int dp;

    dp = cur.find('.');
    if (dp > 3)
    {
        for (int i = dp - 3; i > 0; i -= 3)
            cur.insert(i, ",");
    }
    cur.insert(0, "$");
}