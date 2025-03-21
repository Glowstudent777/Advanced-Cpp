#include <iostream>
#include <vector>
#include <string>

using namespace std;

void split(const string &s, char delim, vector<string> &tokens);

int main()
{
    string str1 = "One Two Three Four Five";
    string str2 = "10:20:30:40:50";
    string str3 = "a/b/c/d/e/f/g/h/i/j";

    vector<string> tokens;

    split(str1, ' ', tokens);
    for (auto e : tokens)
        cout << e << endl;
    cout << endl;
    tokens.clear();

    split(str2, ':', tokens);
    for (auto e : tokens)
        cout << e << endl;
    cout << endl;
    tokens.clear();

    split(str3, '/', tokens);
    for (auto e : tokens)
        cout << e << endl;
    cout << endl;

    return 0;
}

void split(const string &s, char delim, vector<string> &tokens)
{
    int tokenStart = 0;

    int delimPosition = s.find(delim);

    while (delimPosition != string::npos)
    {
        string tok = s.substr(tokenStart, delimPosition - tokenStart);

        tokens.push_back(tok);

        delimPosition++;

        tokenStart = delimPosition;

        delimPosition = s.find(delim, delimPosition);

        if (delimPosition == string::npos)
        {
            string tok = s.substr(tokenStart, delimPosition - tokenStart);

            tokens.push_back(tok);
        }
    }
}
