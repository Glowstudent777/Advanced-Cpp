#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    class NegativeWidth
    {
    };
    class NegativeLength
    {
    };

    Rectangle()
    {
        width = 0.0;
        height = 0.0;
    }

    void setWidth(double w)
    {
        if (w < 0.0)
            throw NegativeWidth();
        width = w;
    }

    void setHeight(double h)
    {
        if (h < 0.0)
            throw NegativeLength();
        height = h;
    }

    double getWidth() const
    {
        return width;
    }

    double getHeight() const
    {
        return height;
    }

    double getArea() const
    {
        return width * height;
    }
};

#endif