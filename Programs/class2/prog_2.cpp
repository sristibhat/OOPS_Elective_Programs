// write a c++ program to create a Student Class with data members name, age and display the details using an object.

#include<iostream>
using namespace std;

 class Student
 {
  string s1;
  int age;
  public:
      void SetData()
      {
        s1="Megha";
          age=21;
      }
  void DisplayData()
      {
          cout<<"Name is : "<<s1<<endl;
          cout<<"Age is : "<<age;
      }
 };

 int main()
 {
     Student s1;
     s1.SetData();
     s1.DisplayData();
     return 0;
 }
