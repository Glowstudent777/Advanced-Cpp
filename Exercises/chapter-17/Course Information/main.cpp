/*****
 * Author: Glowstudent
 * Program: Course Information
 *****/

#include <iostream>
#include <map>
#include <string>
#include "Course.h"

using namespace std;

int main()
{
    map<string, Course> courses = {
        {"CS101", Course(3004, "Haynes", 8)},
        {"CS102", Course(4501, "Alvarado", 9)},
        {"CS103", Course(6755, "Rich", 10)},
        {"NT110", Course(1244, "Burke", 11)},
        {"CM241", Course(1411, "Lee", 13)}};

    string courseCode;
    cout << "Enter a course code (e.g., CS101): ";
    cin >> courseCode;

    auto it = courses.find(courseCode);
    if (it != courses.end())
    {
        cout << "Room Number: " << it->second.getRoomNumber() << endl;
        cout << "Instructor Name: " << it->second.getInstructorName() << endl;
        cout << "Meeting Time: " << it->second.getMeetingTimeString() << endl;
    }
    else
    {
        cout << "Course not found." << endl;
    }

    return 0;
}