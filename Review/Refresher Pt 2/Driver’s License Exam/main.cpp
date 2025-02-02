/*****
 * Author: Glowstudent
 * Program: Driver’s License Exam
 *****/

#include <iostream>
#include <string>
#include <limits>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

void screenHeader()
{
    cout << "== Driver's License Exam ==" << endl;
    cout << "This exam consists of 20 multiple-choice questions." << endl;
    cout << "Each question has four possible answers." << endl;
    cout << "Good luck!" << endl;
    cout << "===========================" << endl;
    cout << endl;
}

struct Question
{
    string question;
    string answers[4];
    char correctAnswer;
};

Question questions[20] = {
    {"What should you do when approaching a stop sign?", {"A) Stop completely", "B) Slow down", "C) Only stop if needed", "D) Honk and proceed"}, 'A'},
    {"When parking downhill with a curb, which way should you turn your wheels?", {"A) Straight ahead", "B) Away from curb", "C) Leave them", "D) Toward curb"}, 'D'},
    {"What is the legal BAC limit for drivers over 21?", {"A) 0.02%", "B) 0.08%", "C) 0.05%", "D) 0.10%"}, 'B'},
    {"What should you do if your car hydroplanes?", {"A) Press brakes", "B) Ease off gas", "C) Speed up", "D) Turn sharply"}, 'B'},
    {"At a four-way stop, who has the right of way if two cars arrive at the same time?", {"A) Left car", "B) Larger car", "C) Right car", "D) Whoever signals first"}, 'C'},
    {"When should you use high beams?", {"A) Always", "B) Dark roads, no oncoming cars", "C) In the city", "D) When passing another vehicle"}, 'B'},
    {"What should you do when a school bus has flashing red lights?", {"A) Stop and wait", "B) Pass if no kids visible", "C) Honk to alert", "D) Stop only if behind the bus"}, 'A'},
    {"If you miss your highway exit, you should:", {"A) Reverse carefully", "B) Take the next exit", "C) Stop on the shoulder", "D) Cut across lanes"}, 'B'},
    {"How do you avoid a collision if someone is tailgating you?", {"A) Speed up", "B) Brake suddenly", "C) Slow down, let them pass", "D) Honk at them"}, 'C'},
    {"How should you drive in fog?", {"A) High beams", "B) Hazard lights", "C) Speed up", "D) Low beams, slow down"}, 'D'},
    {"When is it legal to turn right on red?", {"A) After stopping", "B) Anytime", "C) Only with a green arrow", "D) Never"}, 'A'},
    {"What does a flashing yellow traffic light mean?", {"A) Stop", "B) Yield", "C) Slow and proceed", "D) Treat as stop sign"}, 'C'},
    {"What should you do if your brakes fail?", {"A) Turn off engine", "B) Shift up", "C) Honk and swerve", "D) Pump brakes, use emergency brake"}, 'D'},
    {"What does a solid yellow line on your side mean?", {"A) Passing allowed", "B) No passing", "C) Passing at intersections only", "D) Shared turning lane"}, 'B'},
    {"What should you do at a railroad crossing with flashing red lights?", {"A) Speed up", "B) Proceed if no train", "C) Stop only if gate is down", "D) Stop and wait"}, 'D'},
    {"How should you merge onto a highway?", {"A) Stop first", "B) Any speed", "C) Match speed, merge safely", "D) Merge immediately"}, 'C'},
    {"What should you do if an emergency vehicle approaches with lights on?", {"A) Slow down", "B) Pull over left", "C) Pull over right and stop", "D) Stop in an intersection"}, 'C'},
    {"At an uncontrolled intersection, who has the right of way?", {"A) Right car", "B) Left car", "C) Largest vehicle", "D) Whoever signals first"}, 'A'},
    {"When should you use turn signals?", {"A) Only when coming to a complete stop", "B) Only when other vehicles are nearby", "C) Only when making a left turn", "D) At least 100 feet before turning or changing lanes"}, 'D'},
    {"What should you do during a tire blowout?", {"A) Brake hard", "B) Hold wheel, ease off gas", "C) Turn sharply", "D) Pull over immediately"}, 'B'}};

void getStudentAnswers(char (&studentAnswers)[20])
{
    for (int i = 0; i < 20; i++)
    {
        cout << questions[i].question << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << questions[i].answers[j] << endl;
        }
        cout << endl;
        cout << "Enter answer (A/B/C/D): ";
        cin >> studentAnswers[i];
        studentAnswers[i] = toupper(studentAnswers[i]);

        while (studentAnswers[i] != 'A' && studentAnswers[i] != 'B' && studentAnswers[i] != 'C' && studentAnswers[i] != 'D' && !cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << endl;
            cout << "Invalid input. Please enter A, B, C, or D." << endl;
            cout << "Enter answer (A/B/C/D): ";
            cin >> studentAnswers[i];
            studentAnswers[i] = toupper(studentAnswers[i]);
        }

        clearScreen();
    }
}

int main()
{
    // A D B B C B A B C D A C D B D C C A D B
    char studentAnswers[20];
    int correct = 0;
    int incorrect = 0;

    clearScreen();
    screenHeader();

    getStudentAnswers(studentAnswers);

    for (int i = 0; i < 20; i++)
    {
        if (studentAnswers[i] == questions[i].correctAnswer)
            correct++;
        else
            incorrect++;
    }

    cout << endl;

    if (correct >= 15)
        cout << "You passed the exam." << endl;
    else
        cout << "You failed the exam." << endl;

    cout << "Correct answers: " << correct << endl;
    cout << "Incorrect answers: " << incorrect << endl;

    return 0;
}