
// Create a class Student that stores roll_no, name.
// Create a class Test that stores marks obtained in five subjects.
// Class Result derived from Student and Test contains the total_marks
// and percentage obtained in test.
// Input and display information of a student.

#include<iostream>
#include<string>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

public:
    Student(int a, string b):roll_no(a),name(b){}
};

class Test
{
protected:
    int marks[5];

public:
    void input_marks()
    {
        cout<<"Enter the Subject Marks out of 100\n"<<endl;

        for(int i=0;i<5;i++)
        {
            cout<<"Enter the Marks of "<<i+1<<" Subject: ";
            cin>>marks[i];
        }
    }
};

class Result:public Student,public Test
{
    int total_marks = 0;
    float percentage = 0;

public:
    Result(int a,string b):Student(a,b){}

    void calculate_total_marks()
    {
        total_marks = marks[0]+marks[1]+marks[2]+marks[3]+marks[4];
    }

    void calculate_percentage()
    {
        percentage = total_marks/5.0;
    }

    void display_result()
    {
        cout<<"\n\nStudent Name: "<<name<<"\nRoll No: "<<roll_no;

        for(int i=0;i<5;i++)
        {
            cout<<"\n"<<i+1<<" Subject Marks: "<<marks[i];
        }

        cout<<"\nTotal Marks: "<<total_marks<<"/500"
            <<"\nPercentage: "<<percentage<<"%"<<endl;
    }
};

int main()
{
    Result r1(352,"Sristi");

    r1.input_marks();
    r1.calculate_total_marks();
    r1.calculate_percentage();
    r1.display_result();

    return 0;
}
