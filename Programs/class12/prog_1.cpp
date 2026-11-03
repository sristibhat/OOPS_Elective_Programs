
// Program for binary operator overloading to concatenate two strings.

#include<iostream>
#include<string>
using namespace std;

class String_Concat
{
    string str_1;

public:
    String_Concat(string r=""):str_1(r){}

    String_Concat operator+(const String_Concat &s)
    {
        return String_Concat(str_1+s.str_1);
    }

    void show()
    {
        cout<<str_1;
    }
};

int main()
{
    String_Concat a("hi"), b("bye");

    String_Concat s = a+b;       // Calls a.operator+(b)

    s.show();

    return 0;
}
