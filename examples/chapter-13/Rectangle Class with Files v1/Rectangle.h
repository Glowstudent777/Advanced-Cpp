#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double length;

public:
    void setWidth(double width);
    void setLength(double length);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

#endif