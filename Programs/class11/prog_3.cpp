
// One base class and three derived classes.
// Array of Base Class Pointers using Runtime Polymorphism.

#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout<<"Generic shape"<<endl;
    }

    virtual ~Shape() = default;
};

class Circle: public Shape
{
public:
    void draw() override
    {
        cout<<"Circle"<<endl;
    }
};

class Square: public Shape
{
public:
    void draw() override
    {
        cout<<"Square"<<endl;
    }
};

class Triangle: public Shape
{
public:
    void draw() override
    {
        cout<<"Triangle"<<endl;
    }
};

int main()
{
    Shape *shapes[3] = {
        new Circle(),
        new Square(),
        new Triangle()
    };

    for(int i=0; i<3; i++)
    {
        shapes[i]->draw();
    }

    for(int i=0; i<3; i++)
    {
        delete shapes[i];
    }

    return 0;
}
