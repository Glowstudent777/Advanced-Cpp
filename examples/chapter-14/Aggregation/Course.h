#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include "Instructor.h"
#include "Textbook.h"

class Course
{
private:
    std::string courseName;
    Instructor instructor;
    Textbook textbook;

public:
    Course(std::string course, std::string instrLastName, std::string instrFirstName, std::string instrOffice,
           std::string textTitle, std::string textAuthor, std::string textPublisher)
    {
        courseName = course;
        instructor.set(instrLastName, instrFirstName, instrOffice);
        textbook.set(textTitle, textAuthor, textPublisher);
    }

    void print() const
    {
        std::cout << "Course Name: " << courseName << std::endl
                  << std::endl;
        std::cout << "Instructor Information:" << std::endl;
        instructor.print();
        std::cout << "\nTextbook Information:" << std::endl;
        textbook.print();
    }
};

#endif