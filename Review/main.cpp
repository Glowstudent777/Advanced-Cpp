/*****
 * Author: Glowstudent
 * C++ Review
 *****/

#include <iostream>
#include "consoleUtils.h"

using namespace std;

int main()
{
    const int width = 50;
    const string lyrics[] = {
        "They say that life's a carousel",
        "Spinning fast, you gotta ride it well",
        "The world is full of Kings and Queens",
        "Who blind your eyes and steal your dreams",
        "It's Heaven and Hell, oh well",
        "And they'll tell you black is really white",
        "The moon is just the sun at night",
        "And when you walk in golden halls",
        "You get to keep the gold that falls",
        "It's Heaven and Hell, oh no",
    };

    cout << "Hi, I'm Glowstudent, I'm currently working on my Associates of Science degree" << endl;
    cout << endl;

    fullLine(width);
    printText("Band:\tBlack Sabbath", width, Alignment::left, 1, '*');
    printText("Song:\tHeaven and Hell", width, Alignment::left, 1, '*');
    fullLine(width);

    for (int i = 0; i < sizeof(lyrics) / sizeof(lyrics[0]); i++)
    {
        printText(lyrics[i], width, Alignment::left, 1, '*');
    }

    fullLine(width);

    return 0;
}