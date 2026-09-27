// write a c++ program to initialize employee id and departmet for an employee in the company. using WITH Constructors
#include<iostream>
using namespace std;

class Employee
{
    int id;
    string dept;
public:
    void display()
    {
        cout<<"\n\n\nThe Employees ID: "<<id<<"\n Department: "<<dept<<endl;
    }
    Employee()
    {
        cout<<"Enter the Employee id"<<endl;
        cin>>id;
        cout<<"Enter the Employee Department"<<endl;
        cin>>dept;
    }
};

int main()
{
    Employee e1,e2;
    e1.display();
    e2.display();
    return 0;
}
