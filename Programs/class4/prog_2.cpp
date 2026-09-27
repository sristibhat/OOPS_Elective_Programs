/* Write a C++ program to maintain employee data with fields employe ID , name and Department for 5 employees.
This program can be compared with prog_3 to understand how static data members are shared among all objects of a class.*/

#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    string department;

    static int count;     // declaration inside class

public:
    void getData()
    {
        cout << "Enter ID, Name and Department: ";
        cin >> id >> name >> department;
        count++;
    }

    void display()
    {
        cout << id << "\t" << name << "\t" << department << endl;
    }

    static void showCount()
    {
        cout << "Total Employees = " << count << endl;
    }
};

int Employee::count = 0;        // definition outside class

int main()
{
    Employee e[5];

    for(int i = 0; i < 5; i++)
    {
        e[i].getData();
    }

    cout << "\nEmployee Details\n";
    cout << "ID\tName\tDepartment\n";

    for(int i = 0; i < 5; i++)
    {
        e[i].display();
    }

    Employee::showCount();

    return 0;
}
