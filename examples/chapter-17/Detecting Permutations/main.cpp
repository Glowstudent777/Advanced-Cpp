#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    const int MAX = 5;

    vector<int> winning(MAX);
    vector<int> player(MAX);

    cout << "Enter the " << MAX << " winning numbers:\n";
    for (auto &e : winning)
    {
        cout << "> ";
        cin >> e;
    }

    cout << "Enter the " << MAX << " player numbers:\n";
    for (auto &e : player)
    {
        cout << "> ";
        cin >> e;
    }

    if (is_permutation(winning.begin(), winning.end(), player.begin()))
    {
        cout << "You Won the Lottery!\n";
    }
    else
    {
        cout << "Sorry, you did not win.\n";
    }

    return 0;
}