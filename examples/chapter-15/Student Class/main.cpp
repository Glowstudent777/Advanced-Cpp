#include <iostream>
#include "CsStudent.h"

using namespace std;

int main()
{
    CsStudent student("Jennifer Haynes", "167W98337", 2006);

    student.setMathHours(12);
    student.setCsHours(20);
    student.setGenEdHours(40);

    cout << "The student " << student.getName() << " needs to take "
         << student.getRemainingHours() << " more hours to graduate." << endl;

    return 0;
}