
// Write a C++ program for exception handling of division by zero error.

#include<iostream>
using namespace std;

double division(int a,int b)
{
    if(b==0)
    {
        throw "Division by zero condition!!!";
    }

    return static_cast<double>(a)/b;
}

int main()
{
    int x=50,y=0;
    double z=0;

    try
    {
        z=division(x,y);
        cout<<z<<endl;
    }

    catch(const char*msg)
    {
        cout<<msg<<endl;
    }

    return 0;
}
