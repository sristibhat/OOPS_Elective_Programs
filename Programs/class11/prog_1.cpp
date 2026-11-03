
// Single inheritance: One base class and one derived class.
//
// Virtual functions are not used only for solving the Diamond Problem.
// Here, we use a virtual function to achieve function overriding
// and runtime polymorphism (Late Binding).

#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout<<"Generic shape";
    }
};

class Circle: public Shape
{
public:
    void draw() override
    {
        cout<<"Circle";
    }
};

int main()
{
    Shape *s = new Circle();

    s->draw();    // Output: Circle (Late Binding!)

    delete s;

    return 0;
}
