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
    private:
        double value;

    public:
        NegativeWidth(double v)
        {
            value = v;
        }
        double getValue() const
        {
            return value;
        }
    };

    class NegativeLength
    {
    private:
        double value;

    public:
        NegativeLength(double v)
        {
            value = v;
        }
        double getValue() const
        {
            return value;
        }
    };

    Rectangle()
    {
        width = 0.0;
        height = 0.0;
    }

    void setWidth(double w)
    {
        if (w < 0.0)
            throw NegativeWidth(w);
        width = w;
    }

    void setHeight(double h)
    {
        if (h < 0.0)
            throw NegativeLength(h);
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