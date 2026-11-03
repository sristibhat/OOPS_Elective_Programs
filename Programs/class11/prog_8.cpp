
// Program for unary operator overloading using decrement operator (--).

#include<iostream>
using namespace std;

class Counter
{
    int val;

public:
    Counter(int v=0):val(v){}

    Counter& operator--()       // PREFIX --c
    {
        val--;
        return *this;
    }

    Counter operator--(int)     // POSTFIX c--
    {
        Counter temp=*this;
        val--;
        return temp;            // Returns the old value
    }

    int get()
    {
        return val;
    }
};

int main()
{
    Counter c;

    c--;       // Postfix decrement
    cout<<"The returned value is: "<<c.get()<<endl;

    --c;       // Prefix decrement
    cout<<"The returned value is: "<<c.get();

    return 0;
}
