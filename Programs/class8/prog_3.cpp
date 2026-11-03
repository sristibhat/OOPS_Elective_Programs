// Program demonstrates multiple inheritance using constructor initializer lists.
// Default constructors are not defined for Student and Test classes.
// Hence, objects of these classes cannot be created without arguments.
#include<iostream>
#include<string>
using namespace std;

class Student
{
    int roll_no;
    string name;
public:
    //Student(){};  (here)
    Student(int a,string b):roll_no(a),name(b){}
};

class Test
{
    int marks;
public:
    //Test(){};  (here)
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
        cout<<"The total marks : "<<total_marks
            <<"\nThe percentage : "<<percentage<<endl;
    }
};

int main()
{
    //Student s1;
    //Test t1;

    Result r1(97,85.7,352,"Sristi",60);
    r1.display();

    return 0;
}
