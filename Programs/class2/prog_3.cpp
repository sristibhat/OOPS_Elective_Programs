// write a c++ program to create a Student Class with data members name, age and display the details using an object.

// Previous code(prog_2) with {{Writing the class functions outside of class}}...


#include<iostream>
using namespace std;

 class Student
 {
  string s1;
  int age;
  public:
       void DisplayData();
      void SetData()
      {
        s1="Megha";
          age=21;
      }
 };

 void Student::DisplayData()
      {
          cout<<"Name is : "<<s1<<endl;
          cout<<"Age is : "<<age;
      }

 int main()
 {
     Student s1;
     s1.SetData();
     s1.DisplayData();
     return 0;
 }
