
// Multiple Inheritance - Diamond Problem
// Ambiguity of variable 'i' is resolved using Virtual Base Class.

#include<iostream>
using namespace std;

class A
{
public:
    int i;
};

class B:virtual public A
// Virtual inheritance ensures a single shared copy of class A.
{
public:
    int j;
};

class C:public virtual A
{
public:
    int k;
};

class D:public B,public C
{
public:
    int sum;
};

int main()
{
    D obj1;

    obj1.i=10;
    obj1.j=20;
    obj1.k=30;

    obj1.sum=obj1.i+obj1.j+obj1.k;

    cout<<"The Sum is: "<<obj1.sum<<endl;

    return 0;
}
