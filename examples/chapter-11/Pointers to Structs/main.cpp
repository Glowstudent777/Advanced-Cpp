#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Student
{
    string name;
    int idNum;
    int creditHours;
    double gpa;
};

void getData(Student *);

int main()
{
    Student freshman;

    cout << "Enter the following student data:\n";
    getData(&freshman);

    cout << "Here is the student data:\n";
    cout << "Name: " << freshman.name << endl;
    cout << "ID Number: " << freshman.idNum << endl;
    cout << "Credit Hours: " << freshman.creditHours << endl;
    cout << "GPA: " << freshman.gpa << endl;

    return 0;
}

void getData(Student *s)
{
    cout << "Student Name: ";
    getline(cin, s->name);

    cout << "Student ID Number: ";
    cin >> s->idNum;

    cout << "Credit Hours Enrolled: ";
    cin >> s->creditHours;

    cout << "Current GPA: ";
    cin >> s->gpa;
}