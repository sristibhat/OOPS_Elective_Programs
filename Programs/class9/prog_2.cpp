
// Program demonstrating multiple inheritance using parameterized constructors.

#include<iostream>
#include<string>
using namespace std;

class Student
{
    int roll_no;
    string name;

public:
    // Default constructor is not required as a parameterized constructor is defined.
    Student(int a,string b):roll_no(a),name(b){}
};

class Test
{
    int marks;

public:
    // Default constructor is not required as a parameterized constructor is defined.
    Test(int c):marks(c){}
};

class Result:public Student,public Test
{
    int total_marks;
    float percentage;

public:
    Result(int d,float e,int r,string n,int m):Student(r,n),Test(m),total_marks(d),percentage(e){}

    void display()
    {
        cout<<total_marks<<" "<<percentage<<endl;
    }
};

int main()
{
    // Separate Student and Test objects are not required in this program.

    Result r1(97,85.7,352,"Sristi",65);
    r1.display();

    return 0;
}
