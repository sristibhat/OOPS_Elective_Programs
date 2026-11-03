
// Correct implementation of multiple inheritance using constructor initializer lists.

#include<iostream>
#include<string>
using namespace std;

class Student
{
    int roll_no;
    string name;

public:
    // Default constructor is not defined because a parameterized constructor is provided.
    Student(int a,string b):roll_no(a),name(b){}
};

class Test
{
    int marks;

public:
    // Default constructor is not defined because a parameterized constructor is provided.
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
        cout<<"This is the total marks :"<<total_marks
            <<"\n This is the percentage :"<<percentage<<endl;
    }
};

int main()
{
    // Student s1;  // Cannot create an object without arguments because no default constructor is available.
    // Test t1;      // Cannot create an object without arguments because no default constructor is available.

    Result r1(97,85.7,352,"Sristi",65);
    r1.display();

    return 0;
}
