
// Modification of previous program (prog_5).
// Division by zero without explicitly throwing a user-defined exception.

#include<iostream>
using namespace std;

double division(int a,int b)
{
    int c;
    c=a/b;
    return c;
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
