
// Write a C++ program to handle multiplication of two variables
// using exceptions such that the product is non-zero.

#include<iostream>
using namespace std;

int main()
{
    int x=8,y=0;

    cout<<"Before try \n";

    try
    {
        cout<<"Inside try \n";

        if(x==0)
        {
            throw x;
            cout<<"After throw"<<endl; // Never executed
        }
        else if(y==0)
        {
            throw y;
            cout<<"After throw"<<endl; // Never executed
        }
        else
        {
            cout<<"Product = "<<x*y<<endl;
        }
    }

    catch(int a)
    {
        cout<<"Exception Caught and value = "<<a<<endl;
    }

    cout<<"After Catch"<<endl;

    return 0;
}
