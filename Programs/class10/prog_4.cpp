// Class_10 prog_4: Function overriding without virtual keyword.
// Demonstrates static binding using a base class pointer.
#include<iostream>
using namespace std;

class Base{
public:
      void show(){
    cout<<"Base"<<endl;
    }
};

class Derv1: public Base{
public:
    void show()
    {
        cout<<"Derv1\n";
    }
};

class Derv2:public Base
{
public:
    void show() override{
    cout<<"Derv2\n";}
};

int main()
{
    Base *ptr;
    Base b;
    Derv1 dv1;
    Derv2 dv2;
    ptr= &dv2;



//    Base* ptr;
//     ptr=&dv1;
//     ptr->show();
//     ptr=&dv2;
//     ptr->show();
//dv1.show();
ptr->show();
b.show();
dv1.show();
dv2.show();
}
