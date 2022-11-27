#include<stdio.h>
#include<iostream>

class Rectangle
{
    public:

    int length;
    int breadth;



    void initialize(int l, int b)
    // Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }

    int area()
    {
        return length*breadth;
    }

    void changelength(int l)
    {
        length=l;
    }
};

int main()
{
    Rectangle r;
    // Rectangle r(10, 5);
    r.initialize(10, 5);
    std::cout << r.length << "\n";
    std::cout << r.area();
    r.changelength(20);
    std::cout << "\n" << r.length;
}

