#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course
{
private:
    int roomNumber;
    std::string instructorName;
    int meetingTime;

public:
    Course()
    {
        roomNumber = 0;
        instructorName = "";
        meetingTime = 0;
    }

    Course(int roomNum, std::string instructor, int time)
    {
        roomNumber = roomNum;
        instructorName = instructor;
        meetingTime = time;
    }

    int getRoomNumber() const
    {
        return roomNumber;
    }

    std::string getInstructorName() const
    {
        return instructorName;
    }

    int getMeetingTime() const
    {
        return meetingTime;
    }

    std::string getMeetingTimeString() const
    {
        std::string timeString = std::to_string(meetingTime % 12) + ":00 " + (meetingTime < 12 ? "am" : "pm");
        if (meetingTime % 12 == 0)
        {
            timeString = "12:00 ";
            timeString.append(meetingTime < 12 ? "am" : "pm");
        }

        return timeString;
    }

    void setRoomNumber(int roomNum)
    {
        roomNumber = roomNum;
    }

    void setInstructorName(std::string instructor)
    {
        instructorName = instructor;
    }

    void setMeetingTime(int time)
    {
        meetingTime = time;
    }
};

#endif