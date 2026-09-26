#include<iostream>

#include "add.h" // Insert contents of add.h at this point.  Note use of double quotes here.

namespace test {
    int add(int x, int y)
    {
        return x + y;
    }

    float add(float x, float y)
    {
        return x + y;
    }

    string add(string s1, string s2)
    {
        return s1 + s2;
    }

}