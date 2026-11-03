
// Write a C++ program to handle multiplication of two variables
// using exceptions such that the product is non-zero.
// Re-modelled using different exception data types.

#include<iostream>
using namespace std;

int main()
{
    int x=2,y=0;

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
            throw 2.50;
            cout<<"After throw"<<endl; // Never executed
        }
        else
        {
            cout<<"Product = "<<x*y<<endl;
        }
    }

    catch(int x)
    {
        cout<<"Exception Caught and x= "<<x<<endl;
    }

    catch(double z)
    {
        cout<<"Exception Caught and y= "<<z<<endl;
    }

    cout<<"After Catch"<<endl;

    return 0;
}
