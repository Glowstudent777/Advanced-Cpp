#ifndef TEXTBOOK_H
#define TEXTBOOK_H

#include <iostream>
#include <string>

class Textbook
{
    std::string title;
    std::string author;
    std::string publisher;

public:
    Textbook()
    {
        set("", "", "");
    }

    Textbook(std::string title, std::string author, std::string publisher)
    {
        set(title, author, publisher);
    }

    void set(std::string title, std::string author, std::string publisher)
    {
        this->title = title;
        this->author = author;
        this->publisher = publisher;
    }

    void print() const
    {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Publisher: " << publisher << std::endl;
    }
};

#endif