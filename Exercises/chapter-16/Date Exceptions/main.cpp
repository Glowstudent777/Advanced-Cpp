/*****
 * Author: Glowstudent
 * Program: Date Class with Exceptions
 *****/

#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    int dArr[3][3] = {{1, 2, 2012}, {0, 10, 2020}, {5, 32, 2020}};
    cout << "This program demonstrates the Date class." << endl;
    cout << "It will create a valid date and two invalid dates." << endl
         << endl;

    for (int i = 0; i < 3; i++)
    {
        try
        {
            Date date(dArr[i][0], dArr[i][1], dArr[i][2]);
            date.displayDate();
            cout << "\nDate created successfully." << endl
                 << endl;
        }
        catch (Date::InvalidMonth e)
        {
            cout << "Error: Invalid month " << e.getValue() << endl;
        }
        catch (Date::InvalidDay e)
        {
            cout << "Error: Invalid day " << e.getValue() << endl;
        }
        catch (Date::InvalidYear e)
        {
            cout << "Error: Invalid year " << e.getValue() << endl;
        }
        catch (Date::InvalidFormat e)
        {
            cout << "Error: Invalid format " << e.getValue() << endl;
        }
    }

    return 0;
}