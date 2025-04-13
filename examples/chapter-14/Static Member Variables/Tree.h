#pragma once

class Tree
{
private:
    static int objectCount;

public:
    Tree() { objectCount++; }
    ~Tree() { objectCount--; }

    int getObjectCount() const { return objectCount; }
};

int Tree::objectCount = 0;