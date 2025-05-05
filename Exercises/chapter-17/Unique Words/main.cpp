/*****
 * Author: Glowstudent
 * Program: Unique Words
 * Note: Bacon Ipsum > Lorem Ipsum, Lorem is boring.
 *****/

#include <iostream>
#include <set>
#include <string>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
    const string fileName = "example.txt";
    ifstream inFile;
    set<string> words;

    inFile.open(fileName);

    if (inFile)
    {
        string s;
        while (inFile >> s)
        {
            s.erase(remove_if(s.begin(), s.end(), [](char c)
                              { return ispunct(c) && c != '-'; }),
                    s.end());

            for (auto &c : s)
                c = tolower(c);

            words.insert(s);
        }
        inFile.close();
    }
    else
    {
        cout << "Error opening file " << fileName << endl;
        return 1;
    }

    cout << "Total unique words: " << words.size() << endl;
    cout << "The unique words in the file are: " << endl;
    for (const auto &word : words)
        cout << word << endl;
    cout << endl;

    return 0;
}